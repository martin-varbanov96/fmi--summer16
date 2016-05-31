#pragma once
#ifndef  TREE_H
#define TREE_H
#include <cstdlib>


struct cell {
	int data;
	cell* next;
	cell* previous;
	cell(int elem, cell* position = NULL, cell* positionPrev = NULL)
		:data(elem), next(position), previous(positionPrev) {}
};
class Tree {
public:
	Tree();
	~Tree();
	Tree(const Tree&);
	void insert(Tree const&);
private:
	cell *first, *last;
};

#endif // ! TREE_H