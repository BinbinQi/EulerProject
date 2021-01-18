#include "Question4.h"
#include <stdbool.h>
#include <stdio.h>
#include "stack.h"

bool isPalindrome(char* temp, int mLength);
void intToStr(double value, char* temp, int* mLength);

void question4()
{
	int bigNum = 0;

	for (int i = 999; i > 99; i--)
	{
		for (int j = 999; j > 99; j--)
		{
			int length = 0;

			char mStr[20];

			double result = 0;

			result = i * j;

			intToStr(result, &mStr, &length);

			if (isPalindrome(&mStr, length))
			{
				int mResult = i * j;
				//printf("It is Palindrome Result %d * %d = %d.\n", i, j, mResult);
				if (mResult > bigNum)
				{
					bigNum = mResult;
				}
			}
		}
	}

	printf("Big number: %d", bigNum);
}

void intToStr(double value, char* temp, int* mLength)
{
	int target = value;

	int bitNum = 0;
	int index = 0;

	bitNum = target % 10;

	while (1)
	{
		temp[index++] = bitNum + '0';
		bitNum = (target - bitNum) / 10;
		target = bitNum;
		bitNum = bitNum % 10;
		(*mLength)++;
		if (target == 0)
		{
			break;
		}
	}
}

bool isPalindrome(char* temp, int mLength)
{
	for (int i = 0; i <= mLength / 2; i++)
	{
		if (temp[i] != temp[mLength - 1 - i])
		{
			return false;
		}
	}

	return true;
}