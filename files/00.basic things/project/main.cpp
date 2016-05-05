#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main()
{
    ofstream simpleFile;
    //if it doesn't exit, it creates one for you :)))
    simpleFile.open("file.txt");
    simpleFile << "Hello world !!!" << endl;

    //ne6to kato delete
    simpleFile.close();

    char fileName[50];
    ifstream simpleFileRead;
    cin.getline(fileName, 50);
    simpleFileRead.open(fileName);
    if(!simpleFileRead.is_open()){
        exit(EXIT_FAILURE);
    }
    char word[50];
    simpleFileRead >> word;
    while(simpleFileRead.good()){
        cout << word << endl;
        simpleFileRead >> word;
    }
    return 0;
}
