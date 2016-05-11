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
string fileName = "file.txt";
int gridSize = 50;

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
    infile.close();
}
//2. TODO::
void deleteLastRow(){
    //go while getline through the file and regex the temp left and right scores, substract total - temp and delete the
    //last 2 lines
}
//3. Rename teams
//what does eof() really mean ?!
void renameTeams(){
    ifstream input_file(fileName.c_str());
    ofstream output_file("temp.txt");//ofstream - pisane

    string currLine;
    getline(input_file, currLine);

    string leftName;
    cout << " Left Team name: ";
    cin >> leftName;

    string rightName;
    cout << " Right Team name: ";
    cin >> rightName;

    output_file <<"|" << leftName;
    for(int i = 0; i < (gridSize/2 - leftName.length() - 2); i++){
        output_file << "_";
    }
    output_file <<"||";
    for(int i = 0; i < (gridSize/2 - rightName.length() - 2); i++){
        output_file << "_";
    }
    output_file << rightName << "|"<< endl;
    output_file << endl;

    //TODO:: Check if file exists
    while (!input_file.eof()){
      getline(input_file, currLine);
      output_file << currLine << endl;
    }
    input_file.close();

    remove(fileName.c_str());
    int result = rename("temp.txt", "file.txt");
    //delete input_file and rename output file HERE ..


    output_file.close();

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
    for(int i = 0; i < ((gridSize/2) - 5 -
                        numDigits(leftTotalScore) -
                        numDigits(leftScore)); i++ ){
        scoreFile << "-";
    }
    scoreFile << "||";
    for(int i = 0; i < ((gridSize/2) - 5 -
                        numDigits(rightTotalScore) -
                        numDigits(rightScore)); i++ ){
        scoreFile << "-";
    }
    scoreFile << rightTotalScore << " + " << rightScore << "|" << endl;

    leftTotalScore += leftScore;
    rightTotalScore += rightScore;

    scoreFile << "|" << leftTotalScore;
    for(int i = 0; i < ((gridSize/2) - 2 -
                        numDigits(leftTotalScore)); i++ ){
        scoreFile << "-";
    }
    scoreFile << "||";
    for(int i = 0; i < ((gridSize/2) - 2 -
                        numDigits(rightTotalScore)); i++ ){
        scoreFile << "-";
    }
    scoreFile << rightTotalScore << "|"<< endl;

    int firstRowLength = getFirstLineLength();
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
    scoreFile.open(fileName.c_str());

    string leftName;
    cout << " Left Team name: ";
    cin >> leftName;

    string rightName;
    cout << " Right Team name: ";
    cin >> rightName;

    scoreFile <<"|" << leftName;
    for(int i = 0; i < (gridSize/2 - leftName.length() - 2); i++){
        scoreFile << "_";
    }
    scoreFile <<"||";
    for(int i = 0; i < (gridSize/2 - rightName.length() - 2); i++){
        scoreFile << "_";
    }
    scoreFile << rightName << "|"<< endl;
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
            cout << "to rename teams press 3" << endl;
            cin >> menuInput;
            switch(menuInput){
            case 1:
                newDistro();
                break;
            case 2:
                deleteLastRow();
                break;
            case 3:
                renameTeams();
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
