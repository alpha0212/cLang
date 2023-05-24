
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct TreeNode {
	int data;
	struct TreeNode *left;
	struct TreeNode * right;
} TreeNode;

TreeNode* newNode(int data)
{
	printf("%d ������\n", data);
	//��忡 �޸� �Ҵ�
	TreeNode* node = (TreeNode*)malloc(sizeof(TreeNode));

	//������ ����
	node->data = data;

	// ����, ������ ��带 NULL�� �ʱ�ȭ
	node->left = NULL;
	node->right = NULL;
	return(node);
}

void inorder(TreeNode *root) {
	if (root) {
		inorder(root->left);
		printf("%d ", root->data);
		inorder(root->right);
	}
}

void NodeDelete(TreeNode *root) {
	if (root) {
		if (root->left != NULL) {
			NodeDelete(root->left);
		}
		if (root->right != NULL) {
			NodeDelete(root->right);
		}
		printf("%d ������\n", root->data);
		free(root);
	}
}

void preorder(TreeNode *root) {
	if (root) {
		printf("%d ", root->data);
		preorder(root->left);
		preorder(root->right);
	}
}

void postorder(TreeNode *root) {
	if (root->data) {
		postorder(root->left);
		postorder(root->right);
		printf("%d ", root->data);
	}
	else {
		printf("����");
	}
}





int main() {
	TreeNode *root = newNode(1);
	root->left = newNode(2);
	root->right = newNode(3);
	root->left->left = newNode(4);
	root->left->right = newNode(5);
	root->right->left = newNode(6);
	root->right->right = newNode(7);
	root->left->left->left = newNode(8);
	root->left->left->right = newNode(9);
	printf("inorder ");
	inorder(root);
	printf("\n");
	printf("\n");
	printf("preorder ");
	preorder(root);
	printf("\n");
	NodeDelete(root);
	printf("postorder ");
	postorder(root);
	printf("\n");

	return 0;

}

