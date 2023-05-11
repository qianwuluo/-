#include"List.h"
ListNode* BuyListNode(LTDataType x)
{
	ListNode* newnode = (ListNode*)malloc(sizeof(ListNode));
	newnode->data = x;
	newnode->next = NULL;
	newnode->prve = NULL;

	return newnode;
}
void ListPrint(ListNode* plist)
{
	ListNode* cur = plist->next;
	while (cur != plist)
	{
		printf("%d-> ", cur->data);
		cur = cur->next;
	}
	printf("\n");
}
ListNode* ListInit()
{
	ListNode* phead = BuyListNode(0);
	phead->next = phead;
	phead->prve = phead;
	return phead;
}
void ListDestory(ListNode* plist)
{
	assert(plist);
	ListNode* cur = plist->next;
	while (cur != plist)
	{
		ListNode* next = cur->next;
		free(cur);
		cur = next;
	}
}
void ListPushBack(ListNode* plist, LTDataType x)
{
	assert(plist);
	/*ListNode* tail = plist->prve;
	ListNode* newnode = BuyListNode(x);
	tail->next = newnode;
	newnode->prve = tail;
	newnode->next = plist;
	plist->prve = newnode;*/
	ListInsert(plist, x);
}

void ListPushFront(ListNode* plist, LTDataType x)
{
	/*assert(plist);
	ListNode* first = plist->next;
	ListNode* newnode = BuyListNode(x);
	plist->next = newnode;
	newnode->prve = plist;
	newnode->next = first;
	first->prve = newnode;*/
	ListInsert(plist->next, x);
}
void ListPopFront(ListNode* plist)
{
	/*assert(plist);
	assert(plist->next != plist);
	ListNode* first = plist->next;
	ListNode* second = first->next;
	plist->next = second;
	second->prve = plist;
	free(first);
	first = NULL;*/
	ListErase(plist->next);

}

void ListPopBack(ListNode* plist)
{
	/*assert(plist);
	assert(plist->next != plist);
	ListNode* tail = plist->prve;
	ListNode* prev = tail->prve;
	prev->next = plist;
	plist->prve = prev;
	free(tail);
	tail = NULL;*/
	ListErase(plist->prve);
}

ListNode* ListFind(ListNode* plist, LTDataType x)
{
	assert(plist);
	ListNode* cur = plist->next;
	while (cur != plist)
	{
		if (cur->data == x)
		{
			return cur;
		}
		cur = cur->next;
	}
	return NULL;
}
void ListInsert(ListNode* pos, LTDataType x) 
{
	assert(pos);
	ListNode* prev = pos->prve;
	ListNode* newnode = BuyListNode(x);
	prev->next = newnode;
	newnode->prve = prev;
	newnode->next = pos;
	pos->prve = newnode;

}//在pos 位置之前插入x
void ListErase(ListNode* pos)
{
	assert(pos);
	ListNode* prev = pos->prve;
	ListNode* next = pos->next;
	prev->next = next;
	next->prve = prev;
	free(pos);
	pos = NULL;

}