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


void InOrder(BTNode* root);//÷–


void PostOrder(BTNode* root);//∫Û

//void TreeSize(BTNode* root, int *psize);
int TreeSize(BTNode* root);

int TreeSize(BTNode* root);
int TreeLeafSize(BTNode* root);
void LeverOrder(BTNode* root);//≤„–Ú±È¿˙

void DestoryTree(BTNode* root);
