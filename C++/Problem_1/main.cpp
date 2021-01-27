/**************************************************************
* If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. 
* The sum of these multiples is 23.Find the sum of all the multiples of 3 or 5 below 1000.
*
**************************************************************/

#include <iostream>

int main()
{
	long sum_3 = 0;
	long sum_5 = 0;
	int multiples_3 = 3;
	int multiples_5 = 5;

	while (multiples_3 < 1000)
	{
		sum_3 += multiples_3;
		multiples_3 += 3;
	}

	while (multiples_5 < 1000)
	{
		if (multiples_5 % 3 == 0)
		{
			multiples_5 += 5;
			continue;
		}
		else
		{
			sum_5 += multiples_5;
			multiples_5 += 5;
		}
	}

	long sum = sum_3 + sum_5;
    std::cout << "result is " << sum << std::endl;
}
