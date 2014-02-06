#include <iostream>

// ----
// Node
// ----
struct Node {
	Node() {
		left = nullptr;
		right = nullptr;
	}
	int store;
	Node* left;
	Node* right;

	void insert(int value);
	bool contains(Node* top, int value);
	void remove(int items[]);
};

void Node::insert(int value) {
	if (value < store) {
		if (left == nullptr) {
			Node* newn = new Node();
			newn->store = value;
			left = newn;
			std::cout << "left " << value << std::endl;
		}
		else {
			left->insert(value);
		}
	}
	else if (value > store) {
		if (right == nullptr) {
			Node* newn = new Node();
			newn->store = value;
			right = newn;
			std::cout << "right " << value << std::endl;
		}
		else {
			right->insert(value);
		}
	}
}

bool Node::contains(Node* top, int value) {
	if (top == nullptr) return false;
	else {
		if (value == top->store)
			return true;
		else if (value < top->store)
			return contains(top->left, value);
		else if (value > top->store)
			return contains(top->right, value);
	}
}

void Node::remove(int items[]) {

}

// ----
// Tree
// ----
struct Tree {
	Tree() {
		root = nullptr;
	}
	Node* root;

	void insert(int value);
	void remove(int value);
	bool contains(int value);
	int size();
	int size(Node* node);
};

void Tree::insert(int value) {
	if (root == nullptr) {
		Node* newn = new Node();
		newn->store = value;
		root = newn;
		std::cout << "sprouted " << value << std::endl;
	}
	else if (root->store != value) {
		root->insert(value);
	}
}

void Tree::remove(int value) {
	if (contains(value)) {
		std::cout << "remove" << std::endl;
		int* items = new int[size()];

		root->remove(items);
	}
}

bool Tree::contains(int value) {
	return root->contains(root, value);
}

int Tree::size() {
	return size(root);
}

int Tree::size(Node* node) {
	if (node == nullptr) return 0;
	return size(node->left) + size(node->right) + 1;
}

// ----
// Main
// ----
int main() {
	Tree* branch = new Tree();
	branch->insert(15);
	branch->insert(16);
	branch->insert(16);
	branch->insert(2);
	branch->insert(6);
	branch->insert(26);
	branch->remove(2);
	branch->remove(99);
	std::cout << branch->contains(26) << std::endl;
	std::cout << "count: " << branch->size() << std::endl;

	delete branch;
	return 0;
}
