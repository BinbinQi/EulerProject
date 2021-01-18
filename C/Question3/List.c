#include <malloc.h>

#include "List.h"

int length;

LinkList L;
LinkList endElement;

int createList(LinkList *L, int value) 
{
	*L = (LinkList)malloc(sizeof(struct Node));
	if (!*L)
	{
		return 0;
	}

	(*L)->value = value;

	(*L)->next = *L;

	(*L)->count = 1;

	endElement = *L;
	
	return 1;
}

int addValue(LinkList *list, int newValue)
{
	LinkList temp = (*list)->next;

	LinkList newNode = (LinkList)malloc(sizeof(struct Node));

	if (newNode != NULL) {
		newNode->value = newValue;
	}

	(*list)->count++;
		
	endElement->next = newNode;

	endElement = newNode;

	return 1;
}

LinkList getEndNode()
{
	return endElement;
}