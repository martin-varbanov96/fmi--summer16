
#ifndef include_card
#define include_card


class Card{
    private:
        int value;
        int suit;
        char valueImg;
    public:
        Card(int, char&);
        Card(int&, int&);
        Card(int, int);
        Card();
        Card(const Card&);

        void setValue(int);
        void setSuit(int);
        void setValueImg(char);
        void setValueImg(int);
        void print();


        int getValue() const;
        int getSuit() const;
        char getValueImg() const;

        bool isEqual (const Card& ) const;

};
#endif
