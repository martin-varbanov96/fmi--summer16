#ifndef FSObject_H
#define FSObject_H
class FSObject {
private:
	char* name;
public:
	FSObject(char* = NULL);
	virtual ~FSObject();
	FSObject& operator=(const FSObject&);
	FSObject(const FSObject&);
	

	virtual double getSize() = 0;
	virtual FSObject* clone() = 0;

	char* getName() const;
	void setName(const char*);

};

#endif //  FSObject_H


