#ifndef List

#define List

struct Node
{
	int value;
	int count;
	struct Node *next;
};

typedef struct Node *LinkList;

int createList(LinkList *L, int value);

int addValue(LinkList *list, int newValue);

LinkList getEndNode();

#endif // List