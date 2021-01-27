#include <stdio.h>
#include <stdbool.h>

#include "List.h"

void findNextPrime(LinkList* list, int* currentNum);

void Question7()
{
	printf("Question 7 answer.\n");

	LinkList primeList;

	createList(&primeList, 2);

	int target = 10001;

	int dividedNum = 1;

	int count = 2;

	while (1)
	{
		LinkList newNode = getEndNode();

		findNextPrime(&primeList, &dividedNum);

		printf("%d st prime number: %d\n", count, dividedNum);

		if (count == target)
		{
			break;
		}

		count++;

	}

	printf("Max prime value: %d ", getEndNode()->value);
}

void findNextPrime(LinkList* list, int* currentNum)
{


	int length = (*list)->count;

	LinkList temp = *list;

	bool isNewValue = true;

	while (1)
	{
		temp = *list;
		isNewValue = true;
		(*currentNum)++;

		for (int i = 1; i <= length; i++)
		{
			if (((*currentNum) % temp->value) == 0)
			{
				isNewValue = false;
				break;
			}

			temp = temp->next;
		}

		if (isNewValue)
		{
			addValue(list, (*currentNum));
			return;
		}
	}
}

void main()
{
	Question7();
}