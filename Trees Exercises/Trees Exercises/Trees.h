#pragma once
#include <iostream>

class Tree {

public:
	~Tree();
	void PrintInorder();
	void clear();
	void insert(int value);

private:
	struct Node {

		int value;
		Node* left = nullptr;
		Node* right = nullptr;
	};

	Node *root = nullptr;

	void printInorderRec(Node* n) {


	}

	void insert(int value, Node* n);
};