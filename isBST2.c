int isBSTRecur(struct node* node, int min, int max)
{	
	int a, b;
	if(node == 0) return 1;
	else{
		if((node->data)>= min  &&  (node->data)<=max){
			a = isBSTRecur(node->left,min,node->data);
			b = isBSTRecur(node->right,node->data,max);
			return (a&&b);
		}
		else return 0;
	}
}

int isBST2(struct node* node)
{
	int min = minvalue(node);
	int max = maxvalue(node);
	return isBSTRecur(node,min,max);
}
