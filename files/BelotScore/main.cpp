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
string fileName;

//returns the size of the first row of the txt file
int getFirstLineLength(){
    ifstream infile("file.txt");

    if (infile.good()){
    string sLine;
    getline(infile, sLine);
    infile.close();
    return sLine.length();
    }
    return 0;
}

void deleteLastRow(){
    console.log(SetEndOfFile("file.txt"));
}
//return length of the number
template <class T>
int numDigits(T number)
{
    int digits = 0;
    if (number < 0) digits = 1; // remove this line if '-' counts as a digit
    while (number) {
        number /= 10;
        digits++;
    }
    return digits;
}

//TODO:: get the first row
string getFirstRow(){
    return "";
}

void writeLine(int leftScore, int rightScore){
    //ofstream scoreFile;
    //TODO:: make c++ have a naming system
    //deletes existing file scoreFile.open("file.txt");
    fstream scoreFile("file.txt", ios::in | ios::out | ios::ate);

    scoreFile << "|" << leftTotalScore << " + " << leftScore;
    for(int i = 0; i < (getFirstLineLength() - 10 -
                        numDigits(leftTotalScore) -
                        numDigits(rightTotalScore) -
                        numDigits(leftScore) -
                        numDigits(rightScore))/2; i++ ){
        scoreFile << "-";
    }
    scoreFile << "||";
    for(int i = 0; i < (getFirstLineLength() - 10 -
                        numDigits(leftTotalScore) -
                        numDigits(rightTotalScore) -
                        numDigits(leftScore) -
                        numDigits(rightScore))/2; i++ ){
        scoreFile << "-";
    }
    scoreFile << rightTotalScore << " + " << rightScore << "|" << endl;

    leftTotalScore += leftScore;
    rightTotalScore += rightScore;

    scoreFile << "|" << leftTotalScore;
    for(int i = 0; i < (getFirstLineLength() - 4 -
                        numDigits(leftTotalScore) -
                        numDigits(rightTotalScore))/2; i++ ){
        scoreFile << "-";
    }
    scoreFile << "||";
    for(int i = 0; i < (getFirstLineLength() - 4 -
                        numDigits(leftTotalScore) -
                        numDigits(rightTotalScore))/2; i++ ){
        scoreFile << "-";
    }
    scoreFile << rightTotalScore << "|"<< endl;

    int firstRowLength = getFirstLineLength();
    cout << firstRowLength << endl ;
}


void newDistro(){
    //set scores;
    cout << endl <<"Enter score of left= ";
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
    //TODO :: da ne trie file-a
    scoreFile.open("file.txt");

    char* leftName = new char[50];
    cout << " Left Team name: ";
    cin >> leftName;

    char* rightName = new char[50];;
    cout << " Right Team name: ";
    cin >> rightName;

    scoreFile <<"|" << leftName << "========||========" << rightName << "|"<< endl;
    delete[] rightName;
    delete[] leftName;
    for(int i = 0; i < getFirstLineLength(); i++){
        scoreFile << "_";
    }
    scoreFile << endl;
    scoreFile.close();

    //while switch za menu :
    while(leftTotalScore < 151 && rightTotalScore < 151){
            int menuInput;
            cout << "for new distribution press 1" << endl;
            cout << "to delete last row press 2" << endl;
            cin >> menuInput;
            switch(menuInput){
            case 1:
                newDistro();
                break;
            case 2:
                deleteLastRow();
                break;
            default:
                break;
            }

    }
}
int main()
{
    f();
    return 0;
}
