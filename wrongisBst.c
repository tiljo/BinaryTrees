int isBST(struct node* node)
{
	int a=0,b=0,tempdata;
	struct node* temp = node->left;
	if((node->left)!= 0  || (node->right!=0)){
		if(node->left !=0){////////////////////
			if(maxvalue(node->left)<(node->data)){



				if(isBST(node->left)< node->data)
				/*if(isBST(node->left)==0){//
					while(temp !=0){
						tempdata=temp->data;
						temp=temp->left;
						if(tempdata != 0)	break;
					}




					if(isBST(node->left) == tempdata)//
					//if(isBST(node->left) == node->left->data)*///////////
						a=node->data;
					else return 0;
				}
				else return 0;//else a= node->data;
		}
			//else return 0;
		//}
		
		if(node->right !=0){////////
			//int a = minvalue(node->right);	
			if(minvalue(node->right)>(node->data)){

				if(isBST(node->right)> node->data)//{//

					b= isBST(node->right);
				else return 0;
			}
			else return 0;



		}//////////
	}
	else return (node->data);
	
	
	if((a!=0) && (b!=0)){
		if(a<b) return b;
		else return 0;
	}
	else return (a+b);
}
