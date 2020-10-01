#include <algorithm>
#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int n;
vector <int> key;
vector <int> left;
vector <int> right;
int globalCheck = (-2147483647 - 1);

struct Node {
	int key;
	int left;
	int right;

	Node() : key(0), left(-1), right(-1) {}
	Node(int key_, int left_, int right_) : key(key_), left(left_), right(right_) {}
};

void inorder(int passed)
{
	if (passed == -1)
		return;
	//if(key[passed]> key )
	inorder(left[passed]);
	if(left[passed] != -1 )
	{
		//globalCheck = key[passed];
		if (!(key[passed] >= key[left[passed]]))
		{
			cout << "INCORRECT" << endl; exit(1);
		}
	}
	//cout << key[passed] << " ";
	if ((key[passed] < globalCheck))
	{
		cout << "INCORRECT" << endl; exit(1);
	}
	globalCheck = key[passed];

	inorder(right[passed]);
	if (right[passed] != -1)
	{
		//globalCheck = key[passed];
		if (!(key[passed] <= key[right[passed]]))
		{
			cout << "INCORRECT" << endl;
			exit(1);
		}
	}

}
bool IsBinarySearchTree(const vector<Node>& tree) {
	// Implement correct algorithm here
	//inorder(0);
	//itr
	return true;
}

int main()
{
	/*int nodes;
	cin >> nodes;
	vector<Node> tree;
	for (int i = 0; i < nodes; ++i)
	{
		int key, left, right;
		cin >> key >> left >> right;
		tree.push_back(Node(key, left, right));
	}*/
	cin >> n;
	if (n == 0)
	{
		cout << "CORRECT" << endl;
		return 0;
	}
	key.resize(n);
	left.resize(n);
	right.resize(n);
	for (int i = 0; i < n; i++)
	{
		cin >> key[i] >> left[i] >> right[i];
	}
	inorder(0);
	cout << "CORRECT" << endl;
	/*if (IsBinarySearchTree(tree))
	{
		cout << "CORRECT" << endl;
	}
	else {
		cout << "INCORRECT" << endl;
	}*/
	return 0;
}
