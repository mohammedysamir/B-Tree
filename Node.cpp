#include"Key.cpp"
template <typename T>
class Node {
	Key* Keys;
	int Order;
public:
	Node() {
		Keys= new Key[1];
	}
	Node(int Order) {
		this->Order = Order;
		Keys = new Key[Order - 1];
	}
	void print() {
		for (int i = 0; i < Order - 1; i++)
			cout << data[i] << " ";
		cout << endl;
	}
};