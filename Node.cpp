#include <iostream>
using namespace std;
template <typename T, int Order>
class Node
{
T* Keys;
int Min_Key;
Node** Children; //array of Children
int Key_Num;
bool isLeaf; //determine if this node is leaf
public:
	Node(bool l){
		isLeaf=l;
		Key_Num=0;
		Min_Key=Order/2;
		Keys=new T[Order-1];
		Children=new Node*[Order];
	}
	void insertNonFull(T element){
		int newindex=n-1; //get last index
		if(isLeaf){
			//find location of element
			while(newindex >= 0 && Keys[newindex]>element){
				Keys[newindex+1]=Keys[newindex];
				newindex--;
			}
			//insert new element
			Keys[newindex+1]=element;
			Key_Num++;//increase number of keys
		}
	}
	void SplitNode(int i,Node* node){

	}
	void Traverse(){
		int index;
		for(;index<Key_Num;index++){
			if(!isLeaf){
				Children[index]->Traverse();
				cout<<Keys[index]<<" ";
			}
		}
		if(!isLeaf) //traverse last children of the node
			Children[index]->Traverse();
	}
};