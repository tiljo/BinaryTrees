
void printTree(struct node* node)
{
	if(node == 0) return;
	else{
		printTree(node->left);
		printf("%d	",node->data);
		printTree(node->right);
	}
}
