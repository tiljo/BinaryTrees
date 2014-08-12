void Delete(struct node** node,int target)
{
	struct node* tar = NULL;
        struct node** headRef = &tar;
	struct node* temp = NULL;
        struct node* tempright = NULL;
        struct node* current = NULL;


        struct node* head = look(*node,target,*node);
        assert(head != NULL);



	if(head->data == target){
		tar=(*node);
		headRef = node;
	}
        else if(head->data < target){
                tar = head->right;
		headRef = &(head->right);
	}
        else{
		tar = head->left;
		headRef = &(head->left);
	} 



        if((tar->left != NULL)  || (tar->right != NULL)){
                if((tar->right !=NULL) && (tar->left == NULL)){
                         temp = tar->right;
                         current = *headRef;
                         free(current);
                         (*headRef) = temp;
                }
                else{
                        if(maxvalue(tar->left) == (tar->left->data)){
					tempright = tar->right;
                              		temp = tar->left;
                                	current = *headRef;
                                	free(current);
                                	*headRef= temp;
					temp->right = tempright;
                        }
                        else{
                                tar->data = maxvalue(tar->left);
                                Delete(&(tar->left),maxvalue(tar->left));
                        }
                }
        }
        else{
                current = *headRef;
                free(current);
                *headRef = NULL;
        }
}

