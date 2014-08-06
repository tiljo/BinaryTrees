
struct node* abuild123()
{
	struct node* node = NewNode(2);
	node->left = NewNode(1);
	node->right = NewNode(3);
	return (node);
}

struct node* bbuild123()
{
        struct node* node = NewNode(2);
        struct node* left = NewNode(1);
        struct node* right = NewNode(3);
	node->left = left;
	node->right = right;
        return (node);
}

struct node* cbuild123()
{
	struct node* node = NULL;
	node = insert( node,5);
	node =  insert( node, 3);
	node =  insert( node, 10);
	return (node);
}


