#pragma once
#ifndef PUG_H
#define PUG_H
#include <cstdlib>


class Pug
{
public:
	enum Type {
		NORMAL, BIG, SMALL
	};

	Pug();
	Pug(char* = NULL);
	Pug(const Pug&);
	Pug& operator=(const Pug&);
	~Pug();

	void setColor(char* = NULL);
	//void setParent(const Pug&);

	char* getColor() const;
	//Pug& getParent() const;

	virtual void printUniqueness();
private:
	char* color;
	//Pug& parent;
};


#endif // !PUG_H