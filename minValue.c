
int minValue(struct node* node)
{
	if(node == 0)
		return 0;
	else{
		if(node->left )
			return (minValue(node->left));
		else return (node->data);
	}
}
