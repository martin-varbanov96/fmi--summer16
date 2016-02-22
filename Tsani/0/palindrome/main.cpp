/*
Чрез рекурсия да се провери дали едно число е палиндром.
*/


#include <iostream>

using namespace std;

int numLen(int num, int count){
    if(num == 0){
        return count;
    }
    count++;
    return numLen(num/10, count);

}

bool isPalindrome(int num, int len, int current, int lastIndex, int firstIndex){
    if(num == 0){
        return true;
    }

}

int main()
{
    int number;
    cin >> number;
    int len = numLen(number, 0);
    cout << isPalindrome(number, len, len, number%10, number/len);

}
