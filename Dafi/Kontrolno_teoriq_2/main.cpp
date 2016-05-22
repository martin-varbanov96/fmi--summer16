#include <iostream>

using namespace std;
class A{
public:
    A(int nValue){
        cout << "A: " << nValue << endl;
    }
};
class B : public A{
public:
    B(int nValue, double dValue)
        :A(nValue){
        cout << "B: " <<  dValue << endl;
    }
};
class C: public B{
public:
    C(int nValue, double dValue, char chValue)
            :B(nValue, dValue){
                cout << "C: " <<  chValue << endl;
    }
};
int main()
{
    C c(5, 4.3, 'R');
    return 0;
}
/*
A: 5
B: 4.3
C: R
� main ������ ��������� ��������� �� ���� �. ������ � ������� �� ���� �. � ������������ �� � �� ������������� ����������� 5;
4.3; '�'. � ���������������� ������ �� ����� �� ������� ������������ �� ����� � � ��������� 5 � 4.3. � ��������������� ������
�� ����� � �� ������� ����������� �� ����������� ���� �, �������� �� ���� ��������� 5. � ������������ �� � �� �������� "�: 5",
������� �� � ������������ �� �, � ����� �� �������� "�: 4.3", ������� �� � ������������ �� �, � ����� �� �������� "�: '�'.
������� �� � main ������. ���������� �� ���������. "
*/
