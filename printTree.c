
void printTree(struct node* node)
{
	if(node == NULL) return;
	else{
		printTree(node->left);
		printf("%d	",node->data);
		printTree(node->right);
	}
}
