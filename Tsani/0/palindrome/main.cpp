/*
Чрез рекурсия да се провери дали едно число е палиндром.
*/

#include <iostream>
#include <cmath>

using namespace std;

int numLen(int num, int count){
    if(num == 0){
        return count;
    }
    count++;
    return numLen(num/10, count);

}

bool isPalindrome(int num, int len, int firstIndex, int lastIndex){
    if(num == 0){
        return true;
    }
    int first = num/(pow(10, firstIndex));
    int last = num % lastIndex;
    if(first == last){
        return isPalindrome(num, len, firstIndex/10, lastIndex*10);
    }

    return false;
}

int main()
{
    int number;
    cin >> number;
    int len = numLen(number, 0);
    cout << isPalindrome(number, len, 1, 10);

}
