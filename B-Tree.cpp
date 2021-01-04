#include <iostream>
#include "Node.cpp"
using namespace std;
template <class T, int Order>
class BTree
{
	Node<T, Order> *mainNode;

public:
	BTree()
	{
		mainNode = new Node<T, Order>();
		cout << "Assigned of order : " << Order << endl;
	}
	void Insert(T k)
	{
		mainNode->insert(k);
	}
	void Print()
	{
		
	}
};