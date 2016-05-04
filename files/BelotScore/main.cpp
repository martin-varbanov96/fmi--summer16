#include <iostream>
#include <fstream>
#include <string>

using namespace std;
//using namespace std::ios;

//TODO FIX THESE
char spade[] = "\xe2\x99\xa4";
char diamond[] = "\xe2\x99\xa6";
char heart[] = "\xe2\x99\xa5";
char club[] = "\xe2\x99\xa7";

int leftTotalScore = 0;
int rightTotalScore = 0;

void writeLine(int leftScore, int rightScore){
    //ofstream scoreFile;
    //TODO:: make c++ have a naming system
    //deletes existing file scoreFile.open("file.txt");
    fstream scoreFile("file.txt", ios::in | ios::out | ios::ate);

    scoreFile << leftTotalScore << " + " << leftScore << "---||---" << rightTotalScore << " + " << rightScore << endl;

    leftTotalScore += leftScore;
    rightTotalScore += rightScore;

    scoreFile << leftTotalScore << "---||---" << rightTotalScore;

    string firstRow = getFirstRow();
    cout << firstRow;
}


void newDistro(){
    //set scores;
    cout << "Enter score of left= ";
    int leftScore;
    cin >> leftScore;

    //set scores;
    cout << "Enter score of right= ";
    int rightScore;
    cin >> rightScore;

    writeLine(leftScore, rightScore);
}

void f(){
    ofstream scoreFile;
    //TODO:: make c++ have a naming system
    scoreFile.open("file.txt");

    char* leftName = new char[50];
    cout << " Left Team name: ";
    cin >> leftName;

    char* rightName = new char[50];;
    cout << " Right Team name: ";
    cin >> rightName;

    scoreFile << leftName << " ===||=== " <<rightName << endl;
    delete[] rightName;
    delete[] leftName;
    scoreFile.close();

    //while switch za menu :
    newDistro();
}
int main()
{
    f();
    return 0;
}
