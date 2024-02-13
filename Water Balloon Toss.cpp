//Water Balloon Toss
#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>

using namespace std;


int main()
{
    int max, getTargetDistance;
    max = 180; //maximum distance and random number maximum

    srand(time(0));
    getTargetDistance = (rand () % max) + 18; //Generates a random number between (18 and 198)

    float range, g, targetDistance, A, theta;
    int u, guessCount = 0;

    g = 32.2; //32.2 ft/s^2 (gravity)
    u = 80.0; //80 ft/s (initial velocity)

    cout << "velocity: " << u << endl;
    targetDistance = getTargetDistance;
    cout<< "The target is "<< targetDistance << " feet away" << endl;

    do {
        cout << "" << endl; //makes output easier to read
        cout << "Angle for Balloon (negative value to quit) : ";
        cin >> theta;// get launch angle in degrees
        A = theta* M_PI/180; //convert to radians
        guessCount++; //increment guess counter

        range =  (pow(u, 2.0)*sin(2.0*A))/g; //calculate range thrown
        cout << "The balloon landed " << range << " feet away." << endl;

        if (theta < 0) {
            cout << "You are a quitter. " << endl;
            break;
        }
        else if ((theta > 90) || (theta < 0)){
           cout << "The angle must be between 0 and 90. Try again." << endl;
        }
        else if ((range > targetDistance + 1)){
            cout << "You missed" << endl;
            cout << "your balloon landed " << range - targetDistance << "feet past the target. " << endl;
        }
        else if ((range < targetDistance - 1)){
            cout << "You missed" << endl;
            cout << "Your balloon landed " << targetDistance - range << " feet short." << endl;
        }
        else if (((targetDistance - 1 <= range) && (range <= targetDistance +1))){
    cout << "CONGRATULATIONS TARGET HIT!!!!!!!" << endl;
    cout << "It took you " << guessCount << " attempts." << endl;
    break;
    }
    } while(true);
    cout << "" << endl; //makes output easier to read
    cout << "Thanks for playing.";
    cout << "" << endl; //makes output easier to read
    return 0;
}


