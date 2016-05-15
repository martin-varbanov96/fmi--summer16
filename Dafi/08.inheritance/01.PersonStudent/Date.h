#ifndef DATE_H
#define DATE_H
class Date{
private:
        unsigned day;
        unsigned month;
        unsigned year;
public:
        Date(unsigned = 1, unsigned = 1, unsigned = 1900);
		Date(const Date&);
		~Date();
		Date& operator = (const Date&);

		void setDay(unsigned);
		void setMonth(unsigned);
		void setyear(unsigned);
        void setDate(unsigned, unsigned, unsigned);

		void print() const;

		unsigned getDay();
		unsigned getMonth();
		unsigned getYear();

};

#endif // DATE_H
