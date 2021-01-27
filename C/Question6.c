/*
* 1^2 + 2^2 +3^2 + ... + n^2 = 
* 
* n^2 = n(n+1) - n
* 
* 1^2 + 2^2 + 3^2 + ... + n^2
* =1*2-1+2*3-2+ ... + n(n+1)-n
* =1*2+2*3+3*4+...+n(n+1) - (1+2+3+...+n)
*
* Becuase n(n+1)=[n(n+1)(n+2)-(n-1)n(n+1)]/3
* So 1*2+2*3+3*4+...+n(n+1)=[1*2*3-0+2*3*4-1*2*3+3*4*5-2*3*4+...+n(n+1)(n+2)-(n-1)n(n+1)]/3 = [n(n+1)(n+2)]/3
*    1^2+2^2+3^2+...+n^2
*   =[n(n+1)(n+2)]/3 - [n(n+1)]/2
*   =n(n+1)[(n+2)/3-1/2]
*   =n(n+1)[(2n+1)/6]
*   =n(n+1)(2n+1)/6
* 
*/

#include <stdio.h>

void Question6()
{
	int maxNum = 100;
	int n = maxNum;
	int sumOfSquares = n * (n + 1);
	sumOfSquares = (sumOfSquares * (2 * n + 1)) / 6;

	printf("Sum of squares: %d\n", sumOfSquares);

	int SquareOfSum = (n*(n+1))/2;
	SquareOfSum = SquareOfSum * SquareOfSum;
	printf("Square of sum: %d\n", SquareOfSum);

	int difference = SquareOfSum - sumOfSquares;
	printf("Difference: %d\n", difference);
}

void main()
{
	Question6();
}