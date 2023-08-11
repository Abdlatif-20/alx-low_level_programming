#include <stdlib.h>
#include <time.h>
# include <stdio.h>
/* more headers goes there */

/*betty style doc for function main goes there */
void	check_neg_pos(int num);

int main(void) 
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2; /**get random number*/
	check_neg_pos(n); /**check the number*/
	/* your code goes there */
	return (0);
}

void	check_neg_pos(int num) /*function to check positive number or negative*/
	{
	if (num < 0)/**check the number is less than zero*/
		printf("%d is negative\n", num);
	else if (num > 0) /**check the number is more than zero*/
		printf("%d is positive\n", num);
	else /**check the number is equal zero*/
		printf("%d is zero\n", num);
}
