
void doubleTree(struct node* node)
{
	if(node == 0) return;
	else{
		struct node* templ = node->left;
		//struct node* tempr = node->right;

		node->left = NewNode(node->data);
		node->left->left = templ;
		doubleTree(templ);
		doubleTree(node->right);
	}
} 
