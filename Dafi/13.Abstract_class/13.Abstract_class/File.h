#pragma once
#ifndef FILE_H
#include "FSObject.h"
#define FILE_H

class File:  public FSObject {
public:
	File(int  = 0, char* = NULL);

	virtual double getSize();
	virtual FSObject* clone();
private:
	int size;


};

#endif // !FILE_H
