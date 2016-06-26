#include <iostream>

using namespace std;
/*
Функция, която реализира низходящ ред на обхождане на двоично
дърво.
обхожда наляво докато има накъде, след това обхожда на дясно
докато има,
*/
struct btree_cl{
    btree_cl *left;
    char key;
    btree_cl *right;
};

void preorder(btree_cl *t){
    if(t){
        putchar(t->key);
        preorder(t->left);
        preorder(t->right);
    }
}
//200 страница
int main()
{

    return 0;
}
