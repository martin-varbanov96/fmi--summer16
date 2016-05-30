#ifndef LIST_H
#define LIST_H
#include <cstdlib>

struct Node {
	int value;
	Node* next;
	Node(int elem, Node* position = NULL)
		:value(elem), next(position){}
};

class  List{
public:
	 List();
	~ List();
	List(const List&);
	List& operator = (const List&);

	Node* begin();

	void toEnd(int);
	void insertAfter(int, Node*);
	void insertBefore(int, Node*);

	void removeAfter(Node*);
	void removeAt(Node*&);

	bool isEmpty() const;
	void print() const;

private:
	Node *first, *last;
	void copy(const List&);
	void clear();
};
#endif // !CN