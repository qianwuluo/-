#include"List.h"


void Test1()
{
	ListNode* plist = ListInit();
	
	ListPushBack(plist, 1);
	ListPushBack(plist, 2);
	ListPushBack(plist, 3);
	ListPushBack(plist, 4);
	/*ListPushBack(plist, 5);
	ListPushBack(plist, 6);
	ListPushFront(plist, 0);*/
	ListPushFront(plist, 0);
	ListPrint(plist);
	/*ListPushFront(plist,8);
	ListPrint(plist);
	ListPopFront(plist);
	ListPrint(plist);
	ListPopBack(plist);
	ListPrint(plist);
	ListDestory(plist);*/

}
void Test2()
{
	ListNode* plist = ListInit();

	ListPushBack(plist, 1);
	ListPushBack(plist, 2);
	ListPushBack(plist, 3);
	ListPushBack(plist, 4);
	ListPrint(plist);
	ListNode* pos = ListFind(plist, 3);
	if (pos)
	{
		pos->data = 30;
		printf("�ҵ��ˣ��޸�����Ϊ*10\n");
	}
	else {
		printf("�Ҳ���\n");
	}
	ListPrint(plist);
	ListInsert(pos, 300);
	ListPrint(plist);
	ListErase(pos);
	ListPrint(plist);

}

int main(void)
{
	Test1();

	return 0;
}