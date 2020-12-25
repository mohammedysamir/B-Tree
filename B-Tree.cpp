#include<iostream>
#include"Node.cpp"
using namespace std;
template <typename T>
class B_Tree{
	Node<T>* mainNode;
public:
	B_Tree() {
		mainNode = NULL;
		cout << "assigned order of 1" << endl;
	}
	B_Tree(int order) {
		mainNode = new mainNode(order);
	}
};