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
	Key(T d, Key* r, Key* l) {
		date = d;
		right = r;
		left = l;
	}
};