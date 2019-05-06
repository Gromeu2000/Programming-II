#ifndef PRIORITY_QUEUE_H
#define PRIORITY_QUEUE_H

#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <assert.h>

//gerard Romeu Vidal

class Ranking
{
public:

	Ranking() :
		first(nullptr),
		num_elems(0)
	{ }

	~Ranking()
	{
		clear();
	}

	int size() const
	{
		return num_elems;
	}

	bool empty() const
	{
		return num_elems == 0;
	}

	const char *head()
	{
		assert(num_elems > 0 && "The ranking is empty");
		return first->name;
	}

	const char *head() const
	{
		assert(num_elems > 0 && "The ranking is empty");
		return first->name;
	}

	void push_front(const char *name)
	{
		Node *new_node = new Node;
		new_node->name = name;
		new_node->prev = nullptr;
		new_node->next = first;
		if (first != nullptr) {
			first->prev = new_node;
		}
		first = new_node;
		num_elems++;
	}

	void clear()
	{
		Node *it = first;
		while (it != nullptr) {
			Node *to_delete = it;
			it = it->next;
			delete to_delete;
		}
	}

	int find_player_position(const char *name)
	{
		// TODO: Insert your code here

		Node *it = first;
		
		for(int pos = 0; pos < num_elems; pos++) {

			if (strcmp(it->name, name) == 0){

				return pos;
			}
			else {

				it = it->next;
				
			}
		}
		
		return -1;
	}

	void advance(int position)
	{
		// TODO: Insert your code here
		assert(position < num_elems && "Index out of bounds");

		if (position == 0) { return; }

		Node *it = first;

		for (int i = 0; i < position; i++) {

			it = it->next;
		}

		Node *d = it->next;
		Node *b = it->prev;
		Node *a = b->prev;

		if (a != nullptr) {

			a->next = it;
		}

		it->prev = a;
		it->next = b;

		b->prev = it;
		b->next = d;

		if (d != nullptr) {

			d->prev = b;
		}

		if (it->prev == nullptr) {

			first = it;
		}
	}

private:

	struct Node
	{
		const char *name = nullptr;
		Node *next = nullptr;
		Node *prev = nullptr;
	};

	Node *first;
	int num_elems;
};

#endif // PRIORITY_QUEUE_H