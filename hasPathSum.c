
int hasPathSum(struct node* node, int sum)
{
	int a,b;
	if(node==0)
		return (sum == 0);
	else{
		a = hasPathSum(node->left, ( sum- (node->data) ));
		b = hasPathSum(node->right, ( sum- (node->data) ));
		return (a|b);
	}
}
