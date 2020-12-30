#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

typedef int SLTDateType;
typedef struct SListNode SListNode;
struct SListNode
{
	SLTDateType _data;
	struct SListNode* _next;
};

SListNode* SListPushBack(SListNode** pplist, SLTDateType x);
SListNode* SListPopBack(SListNode** pplist);
SListNode* SListPushFront(SListNode** pplist, SLTDateType x);
SListNode* SListPopFront(SListNode** pplist);
SListNode* BuySListNode(SLTDateType x);
void SListPrintf(SListNode* pplist);
