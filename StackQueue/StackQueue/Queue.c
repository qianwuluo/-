#include"Queue.h"


void QueueInit(Queue* pq)
{
	assert(pq);
	pq->head = pq->tail = NULL;
}

void QueueDestory(Queue* pq)
{
	assert(pq);
	QNode* cur = pq->head;
	while (cur)
	{
		QNode* next = cur->next;
		free(cur);
		cur = next;

	}
	pq->head = pq->tail = NULL;
}
void QueuePush(Queue* pq, QDataType x)
{
	assert(pq);
	QNode* newnode =(QNode*) malloc(sizeof(QNode));
	if (newnode == NULL) {
		printf("malloc fail\n");
		exit(-1);
	}
	newnode->data = x;  
	newnode->next = NULL; 
	if (pq->tail == NULL) 
	{
		pq->head = pq->tail = newnode; 
	}else {
		pq->tail->next = newnode;
		pq->tail = newnode;
	}


	
	
	
	
	//if (newnode == NULL)
	//{
	//	printf("开辟失败!\n");
	//	exit(-1);
	//}
	//newnode->data = x;
	//newnode->next = NULL;
	//if (pq->tail == NULL)   //无节点
	//{
	//	pq->head = pq->tail = newnode;
	//}
	//else
	//{
	//	pq->tail->next = newnode;
	//	pq->tail = newnode;
	//}
	

}//队尾入
void QueuePop(Queue* pq)
{
	assert(pq);
	assert(pq->head);
	//一个结点
	if (pq->head-> next== NULL)
	{
		free(pq->head);
		pq->head = pq->tail = NULL;
	}
	else {
		QNode* next = pq->head->next;
		free(pq->head);
		pq->head = next;
	}
	
}//对头出
QDataType QueueFront(Queue* pq) {
	assert(pq);
	assert(pq->head);
	return pq->head->data;
}//取队头数据
QDataType QueueBack(Queue* pq)
{
	assert(pq);
	assert(pq->head);
	return pq->tail->data;
}//队尾数据
int QueueSize(Queue* pq)
{
	assert(pq);
	int size = 0;
	QNode* cur = pq->head;
	while (cur)
	{
		size++;
		cur = cur->next;
	}
	return size;
}
bool QueueEmpty(Queue* pq)
{
	assert(pq);
	return pq->head == NULL;
}