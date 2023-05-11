#pragma once
#include<stdio.h>
#include<malloc.h>
#include<assert.h>

typedef int LTDataType;
typedef struct ListNode
{
	struct ListNode* next;
	struct ListNode* prve;
	LTDataType data;
}ListNode;


ListNode* ListInit();
void ListDestory(ListNode* plist);
void ListPrint(ListNode* plist);
void ListPushBack(ListNode* plist, LTDataType x);
void ListPushFront(ListNode* plist, LTDataType x);
void ListPopBack(ListNode* plist);
void ListPopFront(ListNode* plist);
ListNode* ListFind(ListNode* plist,LTDataType x);
void ListInsert(ListNode* pos, LTDataType x);//��pos λ��֮ǰ����x
void ListErase(ListNode* pos);

