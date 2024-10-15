#include <bits/stdc++.h>

using namespace std;

int main()
{

// for using pi value type M_PI

//--------------------------------------------------------------

    /*
    Take the day no and print the corresponding day
    for 1 print Monday,
    for 2 print Tuesday and so on for 7 print Sunday.
    */
    int day;
    cin >> day;

    switch(day) {
        case 1:
            cout << "Monday";
            break;
        case 2:
            cout << "Tuesday";
            break;
        case 3:
            cout << "Wednesday";
            break;
        case 4:
            cout << "Thursday";
            break;
        case 5:
            cout << "Friday";
            break;
        case 6:
            cout << "Saturday";
            break;
        case 7:
            cout << "Sunday";
            break;
        default:
            cout << "Invalid";
            break;
    }

//---------------------------------------------------------------------

    // /*
    // Programming languages have some conditional / decision-making statements that execute when some specific condition is fulfilled. Switch-case is one of the ways to implement them. In a menu-driven program, the user is given a set of choices of things to do (the menu) and then is asked to select a menu item.
    // There are 2 choices in the menu:
    // Choice 1 is to find the area of a circle having radius 'r'. 
    // Choice 2 is to find the area of a rectangle having dimensions 'l' and 'b'.
    // You are given the choice 'ch' and an array 'a'.
    // If ‘ch’ is 1, ‘a’ contains a single number ‘r’. If ‘ch’ is 2, ‘a’ contains 2
    // numbers ‘l’ and ‘b’. Consider the choice and print the appropriate area.
    // */

    // double areaSwitchCase(int ch, vector<double> a){
	// // Write your code here
	// switch(ch){
	// 	case 1:
	// 		return M_PI*a[0]*a[0];
	// 		break;
	// 	case 2:
	// 		return a[0]*a[1];
	// 		break;
	//     }
    // }


    return 0;
}
