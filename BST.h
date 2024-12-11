#include <iostream>
using namespace std;

template<class T>
class TreeNode {
public:
	TreeNode<T>* left;
	TreeNode<T>* right;
	
	TreeNode(T v);
};

template<class T>
class Tree {
private:
	int size;
	TreeNode<T>* root;
public:
	Tree();
	void insert(T val);
	bool find(T val);
	int GetLevel(T val);
};
