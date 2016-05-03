#include <iostream>
#include <fstream>

using namespace std;

//TODO FIX THESE
char spade[] = "\xe2\x99\xa4";
char diamond[] = "\xe2\x99\xa6";
char heart[] = "\xe2\x99\xa5";
char club[] = "\xe2\x99\xa7";


void f(){

    int leftTotalScore = 0;
    int rightTotalScore = 0;

    ofstream scoreFile;
    scoreFile.open("file.txt");

    char* leftName = new char[50];
    cout << " Left Team name: ";
    cin >> leftName;

    char* rightName = new char[50];;
    cout << " Right Team name: ";
    cin >> rightName;

    scoreFile << leftName << " ===||=== " <<rightName;
    delete[] rightName;
    delete[] leftName;

    void calcPoints(int game, int Kontra){
        if(game >= 1 & game <= 4){
            int all = 16;
            /*
            have to be specified for each team ..

            count << "number or belots ? (max 1)";
            int isBelot;
            cin >> isBelot;
            if(isBelot){
                all += 2;
            }

            //counter tierces
            cout << "number of tierce";
            int tierceCount;
            cin >> tierceCount;
            all += tierceCount * 2;

            //count 50
            cout << "number of 50";
            int fiftyCount;
            cin >> fiftyCount;
            all += fiftyCount * 5;

            //count 100
            cout << "number of 100";
            int hundreadCount;
            cin >> hundreadCount;
            all += hundreadCount * 10;


            //count flush
            cout << "number of flushes";
            int flush;
            cin >> flush;
            all += flush * 5;
            */

            //set scores;
            cout << "Enter score of left= ";
            int leftScore;
            cin >> leftScore;

            cout << "Enter score of right= ";
            int rightScore;
            cin >> rightScore;

            if(){

            }
        }

    }


    void newDistro(){
        int isKontra;
        cout << "game was ? :  ";
        cout << "press 1 for: " << "spade" << endl
            << "press 2 for: " << "diamond" << endl
            << "press 3 for: " << "heart" << endl
            << "press 4 for: " << "club" << endl
            << "press 5 for: " << "no koz" << endl
            << "press 6 for: " << "everything koz" << endl;
         int nameOfTheGame;
         cin >> nameOfTheGame;

         if(nameOfTheGame > 6 || nameOfTheGame < 1){
            cout << "Enter valid numbers " << endl;
         }else{
            cout << "if there was kontra press 1, if there was rekontra press 2 else press any other key: ";
            cin >> isKontra;
         }
         calcPoints(nameOfTheGame, isKontra);
    }


    newDistro();
    //while starts here



    /*

    while(leftTotalScore <= 151 || rightTotalScore <= 151  ){




    }
    if(leftTotalScore >= 151){
        left wins ... new game ?
    }else{
        right wins ... new game ?
    }

    */
}


int main()
{
    f();
}
