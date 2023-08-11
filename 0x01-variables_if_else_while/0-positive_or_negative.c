#include <stdlib.h>
#include <time.h>
# include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
void	check_neg_pos(int num);
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	check_neg_pos(n);
	/* your code goes there */
	return (0);
}

void	check_neg_pos(int num)
	{
	if (num < 0)
		printf("%d is negative\n", num);
	else if (num > 0)
		printf("%d is positive\n", num);
	else
		printf("%d is_zero", num);
}
