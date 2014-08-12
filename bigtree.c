struct node* bigtree()
{
	struct node* bigtree = NewNode(5);
	bigtree->left = NewNode(3); 
	bigtree->left->right = NewNode(4); 
	bigtree->left->left = NewNode(1); 
	bigtree->left->left->right = NewNode(2); 


	bigtree->right = NewNode(25);
	bigtree->right->left = NewNode(16);
	bigtree->right->left->right = NewNode(19);
	bigtree->right->left->right->right = NewNode(20);
	bigtree->right->left->right->right->right = NewNode(21);
	bigtree->right->left->left = NewNode(12);
	bigtree->right->left->left->left = NewNode(11);
	bigtree->right->right = NewNode(27);
	bigtree->right->right->left = NewNode(26);
	bigtree->right->right->right = NewNode(28);
	bigtree->right->right->right->right = NewNode(29);
	return bigtree;
}
