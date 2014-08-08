int minvalue(struct node* node)
{
	int a,b,c;
	if((node->left ==0)&&(node->right==0))
		return node->data;
	else{
		if(node->left)
			a = minvalue(node->left);
		else a= node->data;
		
		if(node->right)
			b=minvalue(node->right);
		else b=node->data;

		c=(a>b)?b:a;
		return (c > node->data)?node->data:c;
	}	
}
