#include <stdio.h>
#include <stdbool.h>

#include "List.h"

void findNextPrime(LinkList* list, int* currentNum);

void load()
{
	printf("Question 3 answer.");

	LinkList primeList;

	createList(&primeList, 2);

	int dividedNum = 1;

	int mLength = primeList->count;

	LinkList mList = primeList;

	long long target = 600851475143;
	long long tempTarget = target;

	bool isNewPrime = false;

	while (1)
	{
		mList = primeList;
		mLength = mList->count;

		if (!isNewPrime)
		{
			for (int i = 1; i <= mLength; i++)
			{
				if ((tempTarget % (mList->value)) == 0)
				{
					tempTarget = tempTarget / (mList->value);
					isNewPrime = false;
					break;
				}
				mList = mList->next;
			}
		}
		else
		{
			LinkList newNode = getEndNode();

			if ((tempTarget % (newNode->value)) == 0)
			{
				tempTarget = tempTarget / (newNode->value);
				isNewPrime = false;				
			}
		}

		if (tempTarget == 1)
		{
			break;
		}
		else if (tempTarget == target)
		{
			findNextPrime(&primeList, &dividedNum);
			isNewPrime = true;
		}
		else
		{
			target = tempTarget;
			printf("Divided number: %lld \n", target);
		}
	}

	printf("Max prime value: %d ", getEndNode()->value);
}

void findNextPrime(LinkList *list, int *currentNum)
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

void main(){
	load();
}