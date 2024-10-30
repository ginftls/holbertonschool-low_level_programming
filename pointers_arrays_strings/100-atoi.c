#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to convert
 *
 * Return: integer value of string, 0 if no numbers found
 */
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int i = 0;
	int digit;
	int started = 0;

	/* Process signs before number */
	while (s[i] != '\0' && (s[i] < '0' || s[i] > '9'))
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}

	/* Process numbers */
	while (s[i] != '\0')
	{
		/* Check if current char is a digit */
		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';

			/* Check for potential overflow before multiplying */
			if (result > (2147483647 - digit) / 10)
			{
				if (sign == 1)
					return (2147483647);
				return (-2147483648);
			}

			result = result * 10 + digit;
			started = 1;
		}
		/* Stop if we've found digits and current char is not a digit */
		else if (started)
			break;
		i++;
	}

	return (result * sign);
}
