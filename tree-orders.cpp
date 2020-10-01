#include <iostream>
#include <vector>
#include <algorithm>
#if defined(__unix__) || defined(__APPLE__)
#include <sys/resource.h>
#endif

using std::vector;
using std::ios_base;
using std::cin;
using std::cout;

struct avl
{
	int value;
	struct avl *left;
	struct avl *right;
};

//class avl_tree
//{
//public:
//	int height(avl *);
//	int difference(avl *);
//	avl *rr_rotat(avl *);
//	avl *ll_rotat(avl *);
//	avl *lr_rotat(avl*);
//	avl *rl_rotat(avl *);
//	avl * balance(avl *);
//	avl * insert(avl*, int);
//	void show(avl*, int);
//	void inorder(avl *);
//	void preorder(avl *);
//	void postorder(avl*);
//	avl_tree()
//	{
//		ptr = NULL;
//	}
//};

class TreeOrders {
	int n;
	vector <int> key;
	vector <int> left;
	vector <int> right;

public:
	void read() {
		cin >> n;
		key.resize(n);
		left.resize(n);
		right.resize(n);
		for (int i = 0; i < n; i++)
		{
			cin >> key[i] >> left[i] >> right[i];
		}
	}


	vector <int> in_order()
	{
		vector<int> result;
		//// Finish the implementation
		//// You may need to add a new recursive method to do that
		//int root = key[0];
		//int l = left[0];
		//int r = right[0];
		//inorder(0);


		return result;
	}
	void inorder(int passed)
	{
		if (passed == -1)
			return;
		inorder(left[passed]);
		cout << key[passed]<<" ";
		inorder(right[passed]);

	}
	void preorder(int passed)
	{
		if (passed == -1)
			return;
		cout << key[passed] << " ";
		preorder(left[passed]);
		preorder(right[passed]);

	}
	void postorder(int passed)
	{
		if (passed == -1)
			return;
		postorder(left[passed]);
		postorder(right[passed]);
		cout << key[passed] << " ";
	}
	/*void avl_tree::inorder(avl *t)
	{
		if (t == NULL)
			return;
		inorder(t->left);
		cout << t->value << " ";
		inorder(t->right);
	}*/

	vector <int> pre_order()
	{
		vector<int> result;
		// Finish the implementation
		// You may need to add a new recursive method to do that

		return result;
	}

	vector <int> post_order() {
		vector<int> result;
		// Finish the implementation
		// You may need to add a new recursive method to do that

		return result;
	}
};

void print(vector <int> a)
{
	for (size_t i = 0; i < a.size(); i++) {
		if (i > 0) {
			cout << ' ';
		}
		cout << a[i];
	}
	cout << '\n';
}

int main_with_large_stack_space() {
	ios_base::sync_with_stdio(0);
	TreeOrders t;
	t.read();
	//print(t.in_order());
	//print(t.pre_order());
	//print(t.post_order());
	t.inorder(0);std::cout << '\n';
	t.preorder(0); std::cout << '\n';
	t.postorder(0); std::cout << '\n';
	return 0;
}

int main(int argc, char **argv)
{


	return main_with_large_stack_space();
}



