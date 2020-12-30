#define _CRT_SECURE_NO_WARNINGS
#include"SList.h"

SListNode* BuySListNode(SLTDateType x)
{
	SListNode* node = (SListNode*)malloc(sizeof(SListNode));
	node->_data = x;
	node->_next = NULL;

	return node;
}
void SListPrintf(SListNode* plist)
{
	SListNode* cur = plist;
	while (cur)
	{
		printf("%d->", cur->_data);
		cur = cur->_next;
	}
	printf("NULL\n");
}

SListNode* SListPushBack(SListNode** pplist, SLTDateType x)
{
	SListNode* newnode = BuySListNode(x);
	if (*pplist == NULL)
	{
		*pplist= newnode;
	}
	else
	{
		SListNode* tail = *pplist;
		while (tail->_next != NULL)
		{
			tail = tail->_next;
		}
		tail->_next=newnode;
	}
}

SListNode* SListPopBack(SListNode** pplist)
{
	SListNode* prev = NULL;
	SListNode* tail = *pplist;
	if (tail == NULL || tail->_next == NULL)
	{
		free(tail);
		*pplist = NULL;
	}
	else
	{
		while (tail->_next)
		{
			prev = tail;
			tail = tail->_next;
		}
		free(tail);
		tail = NULL;
		prev->_next = NULL;
	}
}

SListNode* SListPushFront(SListNode** pplist, SLTDateType x)
{
	assert(pplist);
	SListNode* newnode = BuySListNode(x);
	if (*pplist == NULL)
	{
		*pplist = newnode;
	}
	else
	{
		newnode->_next = *pplist;
		*pplist = newnode;
	}
}

SListNode* SListPopFront(SListNode** pplist)
{
	SListNode* first = *pplist;
	if (first == NULL)
	{
		return;
	}
	else if (first->_next == NULL)
	{
		free(first);
		*pplist = NULL;
	}
	else
	{
		SListNode* next = first->_next;
		free(first);
		*pplist = next;
	}
}
