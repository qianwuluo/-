#include"BinaTree.h"
#include"Queue.h"

void PreOrder(BTNode* root)
{
	if (root == NULL) {
		printf("NULL ");
		return;
	}
	printf("%c ", root->data);
	PreOrder(root->left);
	PreOrder(root->right);
	
}

void InOrder(BTNode* root)//жа
{
	if (root == NULL) {
		printf("NULL ");
		return;
	}
	InOrder(root->left);
	printf("%c ", root->data);
	
	InOrder(root->right);
}

void PostOrder(BTNode* root)//Кѓ
{
	if (root == NULL) {
		printf("NULL ");
		return;
	}
	PostOrder(root->left);


	PostOrder(root->right);
	printf("%c ", root->data);
}

//void TreeSize(BTNode* root,int *psize)
//{
//	if (root == NULL) {
//		return;
//	}
//	else {
//		(*psize)++;
//
//	}
//	
//	
//	TreeSize(root->left,psize);
//	TreeSize(root->right,psize);
//
//
//
//}
int TreeSize(BTNode* root)
{
	return root == NULL ? 0 : TreeSize(root->left) + TreeSize(root->right) + 1;
}
int TreeLeafSize(BTNode* root)
{	
	if (root == NULL)
		return 0;
	if (root->left == NULL && root->right == 0)
		return 1;
	return TreeSize(root->left) + TreeSize(root->right);
}
void LeverOrder(BTNode* root) {
	Queue q;
	QueueInit(&q);
	if (root != NULL) {
		QueuePush(&q, root);

	}
	while (!QueueEmpty(&q)) {
		BTNode* front = QueueFront(&q);
		QueuePop(&q);
		printf("%d ", front->data);
		if (front->left) {
			QueuePush(&q, front->left);
		}
		if (front->right) {
			QueuePush(&q, front->right);
		}
	}
	printf("\n");
	QueueDestory(&q);




}
void DestoryTree(BTNode* root) {
	if (root == NULL)
		return;
	DestoryTree(root->left);
	DestoryTree(root->right);
	free(root);
	root = NULL;


}
