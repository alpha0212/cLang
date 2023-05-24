/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int sum = 0;
int cDrive = 0;
int dDrive = 0;

typedef struct VolumeNode {
	int volume;
	struct VolumeNode *left;
	struct VolumeNode *right;
} VN;


VN* newVolume(int volume, VN* leftNode, VN* rightNode)
{
	VN* node = (VN*)malloc(sizeof(VN));
	node->volume = volume;

	node->left = leftNode;
	node->right = rightNode;
	return(node);
}

void postorder(VN *root) {
	if (root) {
		if (root->left) {
			postorder(root->left);
			cDrive += root->right->volume;
		}
		if (root->right) {
			postorder(root->right);
			dDrive += root->left->volume;
		}
		sum += root->volume;
	}
}

int main() {
	VN* RightRightLeft = newVolume(100, NULL, NULL);
	VN* RightRightRight = newVolume(200, NULL, NULL);
	VN* RightRight = newVolume(2, RightRightLeft, RightRightRight);
	VN* RightLeft = newVolume(15, NULL, NULL);
	VN* LeftRightRight = newVolume(120, NULL, NULL);
	VN* LeftRightLeft = newVolume(55, NULL, NULL);
	VN* LeftRight = newVolume(68, LeftRightLeft, LeftRightRight);
	VN* LeftLeft = newVolume(40, NULL, NULL);
	VN* Right = newVolume(0, RightLeft, RightRight);
	VN* Left = newVolume(10, LeftLeft, LeftRight);
	VN *root = newVolume(0, Left, Right);
	postorder(Left);
	printf("%d sum? \n", sum);
	printf("%d C? \n", cDrive);
	printf("%d D? \n", dDrive);
	return 0;
}
*/
