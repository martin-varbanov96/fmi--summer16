#include <iostream>

using namespace std;
/*
�������, ����� ��������� �������� ��� �� ��������� �� �������
�����.
������� ������ ������ ��� ������, ���� ���� ������� �� �����
������ ���,
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
//200 ��������
int main()
{

    return 0;
}
