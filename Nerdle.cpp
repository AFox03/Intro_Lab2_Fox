# Nerdle
#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include <cstdlib>

using namespace std;

int main()
{
    srand(time(NULL));
    int Attempts = 0;
    int r1,r2,r3,r4,r5;
    int a,b,c,d,e;
    char v,w,x,y,z;
    r1 = rand() % 10 + 1;
    r2 = rand() % 10;
    r3 = rand() % 10;
    r4 = rand() % 10;
    r5 = rand() % 10;

    int answer[5] = {r1,r2,r3,r4,r5};
    int guess[5] = {a,b,c,d,e};
    char hint[6] = {'v','w','x','y','x','\0'};


    cout << "Hi welcome to Nerdle." << endl;
    cout << "Your goal is to guess the five random numbers." << endl;
    cout << "Hints:" << endl <<  "(*)correct" << endl << "(x)wrong" << endl << "(=)Number is in a different spot." <<endl;
    cout << "Insert the numbers separated by spaces"<< endl;
do {
    Attempts++;// guess counter
    cout << "" << endl; //spacing
    cout << "                      Input your five guesses:";
    cin >> a >> b >> c >> d >> e;
        guess[0]= a;
        guess[1]= b;
        guess[2]= c;
        guess[3]= d;
        guess[4]= e;
    //first column
    if (a == r1) {
        hint[0] = '*';
    }else if ((a == r2) || (a == r3) || (a == r4) || (a == r5)){
        hint[0] = '=';
    }else if ((a != r1) && (a != r2) && (a != r3) && (a != r4) && (a != r5)){
        hint[0] = 'x';
    }

    //second column
    if (b == r2) {
        hint[1] = '*';
    }else if ((b == r1) || (b == r3) || (b == r4) || (b == r5)){
        hint[1] = '=';
    }else if ((b != r1) && (b != r2) && (b != r3) && (b != r4) && (b != r5)){
        hint[1] = 'x';
    }

    //third collumn
     if (c == r3) {
        hint[2] = '*';
    }else if ((c == r1) || (c == r2) || (c == r4) || (c == r5)){
        hint[2] = '=';
    }else if ((c != r1) && (c != r2) && (c != r3) && (c != r4) && (c != r5)){
        hint[2] = 'x';
    }

    //fourth column
    if (d == r4) {
        hint[3] = '*';
    }else if ( (d == r1) || (d == r2) || (d == r3) || (d == r5)){
        hint[3] = '=';
    }else if ((d != r1) && (d != r2) && (d != r3) && (d != r4) && (d != r5)){
        hint[3] = 'x';
    }

    //fifth column
    if (e == r5) {
        hint[4] = '*';
    }else if ((e == r1) || (e == r2) || (e == r3) || (e == r4)){
        hint[4] = '=';
    }else if ((e != r1) && (e != r2) && (e != r3) && (e != r4) && (e != r5)){
        hint[4] = 'x';
    }
        cout << guess[0] << " " << guess[1] << " " << guess[2] << " " << guess[3] << " " << guess[4] << " " << endl;
        cout << hint[0] << " " << hint[1] << " " << hint[2] << " " << hint[3] << " " << hint[4] << " " << endl;


    //correct final answer
    if (a == r1 && b == r2 && c == r3 && d == r4 && e == r5){
    cout << "" << endl; //spacing
    cout << guess[0] << " " << guess[1] << " " << guess[2] << " " << guess[3] << " " << guess[4] << endl;
    cout << hint[0] << " " << hint[1] << " " << hint[2] << " " << hint[3] << " " << hint[4] << endl;
    cout << " CONGRATULATIONS YOU WON!!!" << endl;
    cout << "it took you " << Attempts << " attempts." << endl;
    break;
    }

}while(true);

cout << "" << endl;
cout << "Thank you for playing Nerdle.";
cout << "" << endl;
return 0;






    return 0;
}
