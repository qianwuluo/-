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
void QueuePush(Queue* pq, QDataType x);//��β��
void QueuePop(Queue* pq);//��ͷ��
QDataType QueueFront(Queue* pq);//ȡ��ͷ����
QDataType QueueBack(Queue* pq);//��β����
int QueueSize(Queue* pq);
bool QueueEmpty(Queue* pq);

