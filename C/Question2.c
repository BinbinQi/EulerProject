#include <stdio.h>

void Question2()
{
	int endNumber = 4000000;

	int numberOne;

	int numberTwo;

	int sumOfNumberOneAndTwo;

	int count = 0;

	int maxNumber = 10;

	int sumOfEven = 0;

	numberOne = 1;

	numberTwo = 2;

	while (1)
	{
		sumOfNumberOneAndTwo = numberOne + numberTwo;

		printf("NumberOne %d + NumberTwo %d = Sum: %d \n", numberOne, numberTwo, sumOfNumberOneAndTwo);

		if (sumOfNumberOneAndTwo >= 4000000)
		{
			break;
		}

		if ((sumOfNumberOneAndTwo % 2) == 0)
		{
			sumOfEven = sumOfEven + sumOfNumberOneAndTwo;
		}

		numberOne = numberTwo;

		numberTwo = sumOfNumberOneAndTwo;

		count++;
	}

	sumOfEven = sumOfEven + 2;

	printf("Sum of even is %d \n", sumOfEven);
}

void main() {
	Question2();
}