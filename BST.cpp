#include <iostream>
#include"BST.h"
using namespace std;
template<class T>
TreeNode<T>::TreeNode(T v) {
	left = NULL;
	right = NULL;
	data = v;
}

template<class T>
Tree<T>::Tree() {
	size = 0;
	root = NULL;
	left = null;

}
template<class T>
void Tree<T>::insert(T val) {
	if (root = NULL) {
		root = new TreeNode<T>(val);
		size++;
	}
	TreeNode<T>* ptr = root;
	TreeNode<T>* parentptr = root;
	while (ptr != NULL) {
		if (val > ptr->data ) {
			parentptr = ptr;
			ptr = ptr->right;
		}
		else if (val<ptr->data) {
			parentptr = ptr;
			ptr = ptr->left;

		}
		else {
			cout << "THE VALUE ALREADY EXISTS" << endl;
		}
	}
	ptr = new TreeNode<T>(val);
	if (val > (parentptr->data))
		parentptr->right = ptr;
	else
		parentptr->left = ptr;


	size++;

}
template <class T>
bool Tree<T>::find(T val) {
	TreeNode<T>* ptr = root;
	while (ptr != NULL) {
		if (val < ptr->data)
			ptr = ptr->left;
		else if (val > ptr->data)
			ptr = ptr->right;
		else
			return true;
	}
	return false;
}

template<class T>
int Tree<T>::GetLevel(T val) {
	TreeNode<T>* tmp = root;
	int lvl = 0;
	if (val == tmp->data) {
		return lvl;
	}
	else if (val < tmp->data) {
		tmp = tmp->left;
		lvl++;
	}
	else if (val > tmp->data) {
		tmp = tmp->right;
		lvl++;
	}
	return -1;
}
int main() {
	Tree<int> bst;
	bst.insert(10);
	bst.insert(130);
		bst.insert(30);
		if (bst.find(10) == true)
			cout << "yes";
		bst.GetLevel(130);
}