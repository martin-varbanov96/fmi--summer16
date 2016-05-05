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

bool isPalindrome(int num, int len){
    if(num == 0){
        return true;
    }
    int first = num/(pow(10, len-1));
    int last = num % 10;

    if(first == last){
        num -=  (pow(10, len-1) * first);
        num /= 10;
        len -= 2;
        return isPalindrome(num, len);
    }

    return false;
}

int main()
{
    int number;
    cin >> number;
    int len = numLen(number, 0);
    cout << isPalindrome(number, len);

}
