int maxDepth(struct node* node)
{	
	int a,b;	
	if(node == 0) return 0;
	else{
		a= (1+maxDepth(node->right));
		b=(1+maxDepth(node->left));
		return (a>b)? a:b;



		//return ( (1+maxDepth(node->right))>(1+maxDepth(node->left)) ? (1+maxDepth(node->right)):(1+maxDepth(node->left)));
	}
}

	
