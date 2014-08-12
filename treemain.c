#include"tree.h"
#include"treefun.h"

int main()
{
	struct node* node = NULL;
//	struct node* node2 = NULL;
//	node = cbuild123();// replace 1 2 3 by 3 5 10respectively
	//node2 = cbuild123();
	node = bigtree();
	//node->left->left = NewNode(1);

//	node->left =NewNode(0);
	//node->right =NewNode(0);
	//node2->left->left = NewNode(0);
	//node->left->right = NewNode(4);
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
	printf("\nnewtree is\n");
//	Delete(&node,16);
//	Delete(&node,25);
	Delete(&node,27);
//	Delete(&node,4);
//	Delete(&node,19);
//	Delete(&node,29);
//	Delete(&node,1);
//	Delete(&node,3);
//	Delete(&node,5);
//	assert(node->right != NULL);
	printTree(node);
	printf("\n");
//	printf("%d\n",node->left->data);
//	printf("\n");
//	printPostorder(node);
//	printf("%d\n",hasPathSum(node,25));
//	printf("\n");	
//	printf("%d\n",sameTree(node,node2));
/*	if(isBST(node))
		printf("isBST:   True\n");
	else printf("isBST:   False\n");
	printf("\n");
	if(isBST2(node))
              printf("isBST2:   True\n");
	else printf("isBST2:   False\n");*/
//	printf("%d\n",look(node,5,node)->data);
//	printf("min %d\n",minvalue(node));
//	printf("max %d\n",maxvalue(node));
//	printPaths(node);
	return 0;

}
