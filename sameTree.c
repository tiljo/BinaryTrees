
int sameTree(struct node* a, struct node* b)
{
	if((a!=0)&&(b!=0)){
		int x = (a->data)== (b->data);
		int y = sameTree(a->left, b->left);
		int z = sameTree(a->right, b->right);
		return (x && y && z);
	}
	else return ((a==0)&&(b==0));
}
