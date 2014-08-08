
int isBST(struct node* node)
{
	int a=1,b=1;
	if((node->left !=0)&&(node->right !=0)){
			if((maxvalue(node->left)<node->data) && (minvalue(node->right)>node->data)){
					a = isBST(node->left);
					b = isBST(node->right);
					return (a&b);//
			}
			else return 0;
	}


	else if((node->left == 0)&& (node->right == 0)){//
		return 1;//
	}//



	else{

			if(node->left){
					if(maxvalue(node->left) < node->data){
						a = isBST(node->left);
						return a;//
					}
					else return 0;
			}
			//else a = node->data;



			if(node->right){
					if(minvalue(node->right) > node->data){
						b = isBST(node->right);
						return b;//
					}
					else return 0;
			}
			//else b = node->data;
	}	
			
			//return ((a<=b)? 1:0)
}
			
