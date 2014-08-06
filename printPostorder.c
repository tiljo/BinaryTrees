void printPostorder(struct node* node)
{
	if(node == 0)	return;
	else{
		printPostorder(node->left);
		printPostorder(node->right);
		printf("%d	",node->data);
	}
}
		
