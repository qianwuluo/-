#pragma once
#include<stdio.h>
#include<stdbool.h>
#include<malloc.h>
#include<assert.h>
#include<stdlib.h>
typedef int STData;
//��������ʵ��
typedef struct Stack
{
	STData* a;
	int top;
	int capacity;
}ST;

void StackInit(ST* ps);
void StackDestory(ST* ps);
void StackPush(ST* ps, STData x);//��ջ
void StackPop(ST* ps);//��ջ
STData StackTop(ST* ps);//ȡջ������
int StackSize(ST* ps);
bool StackEmpty(ST* ps);

