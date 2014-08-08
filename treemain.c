#include"tree.h"
#include"treefun.h"

int main()
{
	struct node* node = NULL;
//	struct node* node2 = NULL;
	node = cbuild123();//cbuild123 replace 1 2 3 by 3 5 10respectively
	//node2 = cbuild123();
	node->left->left = NewNode(0);
//	node->left =NewNode(0);
	//node->right =NewNode(0);
	//node2->left->left = NewNode(0);
	node->left->right = NewNode(4);
	//node->left->right->right = NewNode(2);
//	node->left->right->left = NewNode(0);
	//node->right->right = NewNode(12);
	//node->right->left = NewNode(9);//////////////
	//node->right->right->left = NewNode(6);
	//node->right->left->left = NewNode(1);
	//node->right->left->left = NewNode(1);
//	printf("%d\n",maxDepth(node));
//	printf("%d\n",minValue(node));
//	mirror(node);
	//doubleTree(node);
	printTree(node);
	printf("\n");
//	printPostorder(node);
//	printf("%d\n",hasPathSum(node,25));
//	printf("\n");	
//	printf("%d\n",sameTree(node,node2));
	if(isBST(node))
		printf("True\n");
	else printf("False\n");
//	printf("min %d\n",minvalue(node));
//	printf("max %d\n",maxvalue(node));
//	printPaths(node);
	return 0;

}
