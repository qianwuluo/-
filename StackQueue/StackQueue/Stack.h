#pragma once
#include<stdio.h>
#include<stdbool.h>
#include<malloc.h>
#include<assert.h>
#include<stdlib.h>
typedef int STData;
//基于数组实现
typedef struct Stack
{
	STData* a;
	int top;
	int capacity;
}ST;

void StackInit(ST* ps);
void StackDestory(ST* ps);
void StackPush(ST* ps, STData x);//入栈
void StackPop(ST* ps);//出栈
STData StackTop(ST* ps);//取栈顶数据
int StackSize(ST* ps);
bool StackEmpty(ST* ps);

