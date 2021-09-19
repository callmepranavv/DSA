vector <vector><int> levelorder(Node *root)
{
	vector<vector><int> ans;

	if(root == NULL)	return ans;

	queue<Node *>q;
	q.push(root);

	while(!q.empty())
	{
		int size = q.size();

		vector<int> level;

		for(int i=0; i<size; i++)
		{
			Node * curr = q.front();
			q.pop();

			if(curr->left != NULL)	q.push(curr->left);

			if(curr->right != NULL)	q.push(curr->right);

			level.push_back(curr->data);

		}

		ans.push_back(level);
	}

	return ans;
}