#include <stdio.h>
#include <stdbool.h>

#include "Question5.h"

#define maxLength 9


void SpliceNumber(int num, int * mCollection, int *mPrimes)
{
	int tempNum = num;
	int len = sizeof(*mPrimes) / sizeof(int);

	for (int i = 0; i < 10; i++)
	{
		int index = 0;
		while(true)
		{
			if (*(mPrimes + index) == 0)
			{
				break;
			}

			if ((tempNum % *(mPrimes + index)) == 0)
			{
				*(mCollection +i) = *(mPrimes + index);
				tempNum = tempNum / *(mPrimes + index);
				break;
			}
			index++;
		}

		if (tempNum == 1)
		{
			break;
		}
	}
}

void MergeToMaxCollection(int *subC, struct Element *maxC, int primes[maxLength])
{
	int index = 0;

	struct Element element[9];

	for (size_t i = 0; i < 9; i++)
	{
		element[i].prime = primes[i];
		element[i].count = 0;
	}

	while (*(subC + index) != 0)
	{
		for (size_t i = 0; i < 9; i++)
		{
			if (element[i].prime == *(subC + index))
			{
				element[i].count++;
			}
		}
		index++;
	}

	for (size_t i = 0; i < maxLength; i++)
	{
		if ((maxC+i)->count < element[i].count)
		{
			(maxC + i)->count = element[i].count;
		}
	}
}

void main() {	

	struct Element maxCollection[maxLength];

	for (size_t i = 0; i < maxLength; i++)
	{
		maxCollection[i].prime = primeCollection[i];
		maxCollection[i].count = 0;
	}

	for (size_t i = 1; i <=	20; i++)
	{
		int result[maxLength];
		for (int i = 0; i < maxLength; i++)
		{
			result[i] = 0;
		}

		SpliceNumber(i, result, primeCollection);

		int index = 0;
		for (size_t index = 0; index < sizeof(result) / sizeof(int) ; index++)
		{
			printf("%d ", result[index]);
		}
		printf("Number: %d collection \n", i);

		MergeToMaxCollection(result, maxCollection, primeCollection);
	}

	printf("Max collection: %d\n", maxCollection[0].count);

	long mTotal = 1;
	for (size_t i = 0; i < maxLength; i++)
	{
		if (maxCollection[i].count != 0)
		{
			size_t mCount = maxCollection[i].count;
			for (size_t j = 0; j < mCount; j++)
			{
				mTotal *= maxCollection[i].prime;
			}			
		}
	}

	printf("Total: %ld \n", mTotal);
}