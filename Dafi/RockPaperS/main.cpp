#include <iostream>
#include <string>
#include <random>


using namespace std;

class List {
    struct Node {
        int data;
        Node * next;
        int getData(){
            return data;
        }
    };

private:
    Node * head;
    Node * bottom;

public:
    List() {
        head = NULL;
        bottom = NULL;
    }
    ~List() {
        while(head != NULL) {
            Node * n = head->next;
            delete head;
            head = n;
        }
    }
    int getValue(){
        return head->data;
    }
    Node* getHead(){
        return head;
    }
    void add(int value) {
        Node * n = new Node;
        n->data = value;
        n->next = head;

        head = n;
    }
};
void gameFunction(List rps){
    cout << "Choose your weapon" << endl;
    cout << "Press 0. for Rock" << endl;
    cout << "Press 1. for Paper" << endl;
    cout << "Press 2. for Scissors" << endl;
    int choice;
    cin >> choice;

    //Make a RNG and set it a value
    mt19937 MyRNG;
    int seed_val;
    MyRNG.seed(seed_val);
    uniform_int_distribution<int> rng(0, 2); // range [0,10]
    rng(MyRNG);

}

int main()
{
    List rps;
    for(int i = 0; i < 3; i++){
        rps.add(i);
    }
    gameFunction(rps);


    return 0;
}
