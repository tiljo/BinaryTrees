
int size(struct node* node)
{
	if(node == 0) return 0;
	else	return (1+size(node->left)+size(node->right));
}

