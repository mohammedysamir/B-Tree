#include<iostream>
using namespace std;
template <typename T>
class Key {
	T data;
	Key* right;
	Key* left;
public:
	Key() {
		right = NULL;
		left = NULL;
	}
	Key(T d) {
		data = d;
	}
	T getdata() {
		return data;
	}
};