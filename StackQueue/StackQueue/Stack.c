#include"Stack.h"

void StackInit(ST* ps)
{
	assert(ps);
	ps->a = (STData*)malloc(sizeof(STData) * 4);
	if (ps->a == NULL)
	{
		printf("malloc fail\n");
		exit(-1);
	}
	ps->capacity = 4;
	ps->top = 0;
		
}
void StackDestory(ST* ps)
{
	assert(ps);
	free(ps->a);
	ps->a = NULL;
	ps->top = ps->capacity = 0;
}
void StackPush(ST* ps, STData x) {
	assert(ps);
	//��������
	if (ps->top == ps->capacity)
	{
		STData* tmp = realloc(ps->a, ps->capacity * 2 * sizeof(STData));
		if (tmp == NULL)
		{
			printf("realloc fail\n");
			exit(-1);
		}
		else {
			ps->a = tmp;
			ps->capacity *= 2;
		}
	}
	ps->a[ps->top] = x;
	ps->top++;
}//��ջ
void StackPop(ST* ps)
{
	assert(ps);
	assert(ps->top > 0);//���ջ���ˣ�ֱ����ֹ����
	ps->top--;

}//��ջ
STData StackTop(ST* ps)
{
	assert(ps);
	assert(ps->top > 0);
	return ps->a[ps->top - 1];
}//ȡջ������
int StackSize(ST* ps)
{
	assert(ps);
	return ps->top;
}
bool StackEmpty(ST* ps)
{
	assert(ps);
	return ps->top == 0;
}