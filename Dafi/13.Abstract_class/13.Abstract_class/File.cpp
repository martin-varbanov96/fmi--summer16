#include "stdafx.h"
#include "File.h"

File::File(int sizeTemp, char* temp) 
	:size(sizeTemp), FSObject(temp){}

double File::getSize() {
	return this->size;
}

FSObject* File::clone() {
	return new File(*this);
}



