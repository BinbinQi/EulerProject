/*
The prime factors of 13195 are 5, 7, 13 and 29.
What is the largest prime factor of the number 600851475143 ?
*/

#include <iostream>

int main()
{
	long long value = 600851475143;
	long largest_prime_factor;

	for (largest_prime_factor = 2; largest_prime_factor <= value;)
	{
		if ( value % largest_prime_factor == 0 && value / largest_prime_factor == 1)
		{
			break;
		}
		
		if (value % largest_prime_factor == 0 && value / largest_prime_factor != 1)
		{
			value = value / largest_prime_factor;
		}
		else
		{
			largest_prime_factor++;
		}
	}

    std::cout << "the result is " << largest_prime_factor << std::endl;

	return 0;
}
