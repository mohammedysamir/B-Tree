#include"Key.cpp"
#include<vector>
#include<iostream>
using namespace std;
template <typename T , int Order>
class Node {
	vector<Key<T>> Keys;
	int Size;
public:
	Node() {
		Size = 0;
	}
	void print() {
		for (int i = 0; i < Order - 1; i++)
			cout << Keys[i] << " ";
		cout << endl;
	}
	void insert(int k) {
		Key<T> key(k);
		if (Size < Order-1) {
			Keys.push_back(key);
			Size++;
			SortKeys();
			return;
		}
		if (Size == Order - 1) {
			cout << "need to split" << endl;
		}
		else {
			for (int i = 0; i < Order - 1; i++)
			{
				if (Keys.at(i).getdata() > k) {

					//there is an empty place 'at least'
					for (int j = Size + 1; j >= i + 1; j--) {
						//shifting 
						Keys.at(j) = Keys.at(j - 1);
					}
					Keys.at(i) = key;
					Size++;
					break;

				}
			}
		}
	}
	int getSize() {
		return Size;
	}

	void SortKeys() {
		for(int i=0;i<Size;i++)
			for (int j = i+1; j < Size; j++) {
				if (Keys.at(i).getdata() > Keys.at(j).getdata()) {
					Key<T> temp = Keys.at(i);
					Keys.at(i) = Keys.at(j);
					Keys.at(j) = temp;
				}
			}
	}
	void PrintNode() {
		for (int i=0;i<Size;i++){
			cout << Keys.at(i).getdata() << " ";
		}
	}
};