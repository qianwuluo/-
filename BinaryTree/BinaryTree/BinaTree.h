#pragma once
#include<stdio.h>
#include<malloc.h>
typedef char BTData;
typedef struct BinaryTree
{

	struct BinaryTree* left;
	struct BinaryTree* right;
	BTData data;
}BTNode;

void PreOrder(BTNode* root);


void InOrder(BTNode* root);//��


void PostOrder(BTNode* root);//��

//void TreeSize(BTNode* root, int *psize);
int TreeSize(BTNode* root);

int TreeSize(BTNode* root);
int TreeLeafSize(BTNode* root);
void LeverOrder(BTNode* root);//�������

void DestoryTree(BTNode* root);
