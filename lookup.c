struct node* look(struct node* node, int target,struct node* prev)
{
	if(node == NULL){
		printf("no data");
                return (node);
        }
        else{
                if(target == node->data) return (prev);
                else{
                        if(target < node->data)return(look(node->left,target,node));
                        else  return (look(node->right,target,node));
                }
        }
}

struct node* rightfun(struct node* node)
{
	if(node->right == NULL){
		return (node);
	}
	else	return rightfun(node->right);

}
