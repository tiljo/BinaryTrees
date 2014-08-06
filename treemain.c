#include"tree.h"
#include"treefun.h"

int main()
{
	struct node* node = NULL;
	struct node* node2 = NULL;
	node = cbuild123();//cbuild123 replace 1 2 3 by 3 5 10respectively
	node2 = cbuild123();
	node->left->left = NewNode(0);
	node2->left->left = NewNode(0);
	//node->left->right = NewNode(4);
/*	node->right->right = NewNode(12);
	node->right->left = NewNode(7);
	node->right->left->left = NewNode(6);*/
//	printf("%d\n",maxDepth(node));
//	printf("%d\n",minValue(node));
	//mirror(node);
	//doubleTree(node);
	//printTree(node);
//	printPostorder(node);
//	printf("%d\n",hasPathSum(node,25));
//	printf("\n");	
	printf("%d\n",sameTree(node,node2));
	return 0;

}
