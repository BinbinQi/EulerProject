#include <stdio.h>

double SumOfSequence(int beginNumber, int endNumber, int interval);

void Question1() 
{
	double sum = 0;

	int endNumber = 999;

	double sumOf3 = SumOfSequence(3, endNumber, 3);

	double sumOf5 = SumOfSequence(5, endNumber, 5);

	double sumof16 = SumOfSequence(15, endNumber, 15);

	sum = sumOf3 + sumOf5 - sumof16;
	printf("Sum: %f", sum);
}

/*
* Summation of sequence
* 
* Sum = (1/2)*n*(begin + end)
*/
double SumOfSequence(int beginNumber, int endNumber, int interval)
{
	int numberCount = endNumber / interval;
	int sumOfBeginAndEnd = beginNumber + numberCount * interval;
	double result = 0.5 * numberCount * sumOfBeginAndEnd;
	return result;
}

void main() {
    Question1();
}