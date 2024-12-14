#!/bin/bash

# Colors for output
RED='\033[0;31m'
GREEN='\033[0;32m'
YELLOW='\033[1;33m'
NC='\033[0m' # No Color

# Help function
show_help() {
    echo "C Learning Helper Script"
    echo "Usage: ./clearn.sh [options] filename"
    echo ""
    echo "Options:"
    echo "  -r    Compile and run"
    echo "  -d    Debug mode (compiles with -g flag)"
    echo "  -w    Show extra warnings"
    echo "  -h    Show this help message"
    echo ""
    echo "Examples:"
    echo "  ./clearn.sh -r program.c"
    echo "  ./clearn.sh -d program.c"
}

# Check if no arguments provided
if [ $# -eq 0 ]; then
    show_help
    exit 1
fi

# Default values
DEBUG=0
WARNINGS=0
RUN=0
FILENAME=""

# Parse arguments
while getopts "hdwr" opt; do
    case $opt in
        h)
            show_help
            exit 0
            ;;
        d)
            DEBUG=1
            ;;
        w)
            WARNINGS=1
            ;;
        r)
            RUN=1
            ;;
        \?)
            echo "Invalid option: -$OPTARG"
            exit 1
            ;;
    esac
done

# Get filename from remaining arguments
shift $((OPTIND-1))
FILENAME=$1

# Check if file exists
if [ ! -f "$FILENAME" ]; then
    echo -e "${RED}Error: File '$FILENAME' not found${NC}"
    exit 1
fi

# Build compiler flags
COMPILE_FLAGS="-o ${FILENAME%.*}"
if [ $DEBUG -eq 1 ]; then
    COMPILE_FLAGS="$COMPILE_FLAGS -g"
fi
if [ $WARNINGS -eq 1 ]; then
    COMPILE_FLAGS="$COMPILE_FLAGS -Wall -Wextra -Werror"
fi

# Compile the program
echo -e "${YELLOW}Compiling $FILENAME...${NC}"
if gcc $COMPILE_FLAGS "$FILENAME" 2> compile_errors.txt; then
    echo -e "${GREEN}Compilation successful!${NC}"
    
    # Run the program if -r flag is set
    if [ $RUN -eq 1 ]; then
        echo -e "${YELLOW}\nRunning the program:${NC}"
        echo "------------------------"
        ./"${FILENAME%.*}"
        echo "------------------------"
    fi
else
    echo -e "${RED}Compilation failed. Errors:${NC}"
    cat compile_errors.txt
fi

# Cleanup
rm -f compile_errors.txt

# Show debug info if enabled
if [ $DEBUG -eq 1 ]; then
    echo -e "\n${YELLOW}Debug information:${NC}"
    file "${FILENAME%.*}"
fi
