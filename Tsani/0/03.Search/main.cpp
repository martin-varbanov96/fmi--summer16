#include <iostream>
/*
Нека имаме даден двумерен масив от символи, които представляват думи в речник с размерност
 не повече от 10 символа и фиксиран брой думи. Задачата ни е, да приемем от потребител дума с размер,
отново не повече от 10 (зададен от потребителя), и трябва да проверим дали в този двумерен
масив, на някой от редовете се среща тази дума.
*/

using namespace std;


//TODO- case insensitive
bool isContained(char var[10], char arraySource[10][10]){
    int count = 0;
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            if((var[j] == '\0') || (arraySource[i][j] == '\0')){
                continue;
            }
            if(var[j] != arraySource[i][j]){
                count = 0;
                j = 10;
                continue;
            }
            if(var[j] == arraySource[i][j]){
                count++;
            }
        }
        if(count > 0){
            return true;
        }
    }
    return false;
}

//recursive search cal function
void searchWord(char book[10][10]){

    char searchGlass[10];
    cout << "Enter your word: ";
    cin >> searchGlass;

    if(isContained(searchGlass, book)){
        cout << searchGlass <<" is Contained, wanna search for another one ? [y/n]";
    }else{
        cout << searchGlass <<" is not contained, do you wanna again? [y/n]";
    }
    char continueVar;
    cin >> continueVar;
    if(continueVar == 'y'){
        searchWord(book);
    }

}

int main()
{
    char book[10][10] =
    {
        {'H', 'E', 'L', 'L', 'O', '\0'},
        {'W', 'O', 'R', 'L', 'D', '\0'},
        {'T', 'S', 'A', 'N', 'I'},
        {'P', 'R', 'O', 'B', 'L', 'E', 'M'}
    };
   searchWord(book);
}
