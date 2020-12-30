#define _CRT_SECURE_NO_WARNINGS
#include"SList.h"

void TestSList1()
{
	SListNode* plist = NULL;
	SListPushBack(&plist, 1);
	SListPushBack(&plist, 2);
	SListPushBack(&plist, 3);
	SListPushBack(&plist, 4);
	SListPrintf(plist);

	SListPopBack(&plist);
	SListPrintf(plist);

	SListPopBack(&plist);
	SListPrintf(plist);

	SListPopBack(&plist);
	SListPrintf(plist);

	SListPopBack(&plist);
	SListPrintf(plist);
}

int main()
{
	TestSList1();
	return 0;
}
