#pragma once
#include<stdio.h>
#include<stdbool.h>
#include<malloc.h>
#include<assert.h>
#include<stdlib.h>
struct BinaryTree;
typedef struct BinaryTree* QDataType;
typedef struct QueueNode
{
	struct QueueNode* next;
	QDataType data;
}QNode;

typedef struct Queue
{
	QNode* head;
	QNode* tail;
}Queue;

void QueueInit(Queue* pq);

void QueueDestory(Queue* pq);
void QueuePush(Queue* pq, QDataType x);//队尾入
void QueuePop(Queue* pq);//对头出
QDataType QueueFront(Queue* pq);//取队头数据
QDataType QueueBack(Queue* pq);//队尾数据
int QueueSize(Queue* pq);
bool QueueEmpty(Queue* pq);

