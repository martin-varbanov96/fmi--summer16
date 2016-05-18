#include <iostream>
#include "List.h"
#include "Stack.h"


using namespace std;

int main()
{
    List a;
    for(int i = 1; i < 7; i++){
        a.toEnd(i);
    }
    a.print();

    Node *current = a.begin();
    for(int i = 1; i <= 3; i++){
        current = current->next;
    }

    a.insertBefore(1, current);
    cout << endl;
    a.print();
    Stack st;
    for(int i = 1; i <= 3; i++){
        st.push(i);
    }
    cout << endl;
    st.print();
    st.pop();
    cout << endl;
    st.print();
    try{
        cout << st.top() << endl;
    }catch(const char* ex){
        cerr << ex << endl;
    }
    Stack st_cp = st;



    return 0;
}
