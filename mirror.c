
void mirror(struct node* node)
{
	if(node == 0) return;
	else{
		struct node* temp = (node->left);
		node->left = node->right;
		node->right = temp;
		mirror(node->left);
		mirror(node->right);
	}
}
