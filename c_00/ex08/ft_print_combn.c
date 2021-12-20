#include <unistd.h>
#include <stdio.h>
#include <math.h>
#include <stdbool.h>

void	ft_putchar(char	c)
{
	write(1, &c, 1);
}

int	get_power(int n)
{
	int res;

	res = 10;
	for (int i = 1; i < n; i++)
	{
		res = res * 10; 	
	}
	return res;
}

bool	split_into_digits(int number)
{
	printf("START of SPLIT: %d \n", number);
	int	temp;
	int last_digit;
	int second_last_digit;

	temp = number;

	// it's a recursion now, set a base case
	// that is when a number is a single digit
	// it means all checks are good, we can return true
	if (number < 10)
	{
		printf("ALL checked \n \n");
		return true;
	}
	
	last_digit = temp % 10;
	//printf("last digit: %d \n", last_digit);
	int last_two_digits = temp % 100;
	//printf("2 last digits: %d \n", last_two_digits);
	second_last_digit = last_two_digits / 10;
	//printf("2nd last digit: %d \n", second_last_digit);
	if (second_last_digit < last_digit)
	{
		// check third last < second last
		printf("TRUE \n");
		int new_number;
		new_number = number / 10;
		split_into_digits(new_number);
	}
		
	//printf("FALSE \n");
	return false;
}

void	ft_print_combn(int n)
{
	int start;
	int finish;

	start = 0;
	finish = get_power(n);

	while(start < finish)
	{
		// when we finish with the single digits
		// we still need to add leading zeros depending on n
		if (start >= 10) 
		{
			// split the number into digits 
			// while splitting the number, we can check the last 2 digits, if the 2nd last < the last digit
			// we need to continue our check to the 3rd last digit < 2nd last digit 
			// and so on
			// if the condition is met, print the number and continue the while loop (start++)
			if(split_into_digits(start))
			{
				printf("RETURNED TRUE");
				printf("%d, ", start);
			}
		}
		// add leading zeros for single digits
		//printf("%d, ", start);
		start++;
	}
}
