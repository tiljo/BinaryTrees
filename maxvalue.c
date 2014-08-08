int maxvalue(struct node* node)
{
        int a,b,c;
        if((node->left ==0)&&(node->right==0))
                return node->data;
        else{
                if(node->left)
                        a = maxvalue(node->left);
                else a= node->data;

                if(node->right)
                        b=maxvalue(node->right);
                else b=node->data;

                c=(a>b)?a:b;
                return (c > node->data)?c:node->data;
        }
}

