#include <unistd.h>

void print_fizz_buzz(int n) {
	if (n % 15 == 0)
		write("FizzBuzz\n", 10);
	else if (n % 5 == 0)
		write("Buzz\n", 6);
	else if (n % 3 == 0)
		write("Fizz\n", 5);
	else
		printf("%d\n", n);
}

int main() {
	int i;
	for (i = 1; i <= 100; i++)
		print_fizz_buzz(i);
	return 0;
}
