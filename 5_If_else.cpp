#include <bits/stdc++.h>

using namespace std;

int main()
{

    // // Write a program that take input of age & print if you are adult or not
    
    // int age;
    // cin >> age;
    // if (age >= 18)
    // {
    //     cout << "You are an adult !";
    // }
    // else{
    //     cout << "You are not an adult !";
    // }

//------------------------------------------------------------------
    
//     /*A school has following rule for grading system
//     a. Below 25 - F
//     b. 25 to 44 - E
//     c. 45 to 49 - D
//     d. 50 to 59 - C
//     e. 60 to 79 - B
//     f. 80 to 100 - A
//     Ask user to enter the marks and print the corresponding grade.
//     */
   
//------------------------------------------------------------------

//    int marks;
//    cin >> marks;
//    if (marks < 25)
//    {
//     cout << 'F';
//    }
//    else if (marks <= 44)
//    {
//     cout << 'E';
//    }
//    else if (marks <= 49)
//    {
//     cout << 'D';
//    }
//    else if (marks <= 59)
//    {
//     cout << 'C';
//    }
//    else if (marks <= 79)
//    {
//     cout << 'B';
//    }
//    else if (marks <= 100)
//    {
//     cout << 'A';
//    }

//----------------------------------------------------------------

//     /*
//     Take the age from the user and then decide accordingly.
//     1. If age < 18,
//         ·print-> not eligible for job
//     2. If age >= 18 and age <= 54,
//         print-> "eligible for job"
//     3. If age >= 55 and age <= 57,
//         print-> "eligible for job, but retirement soon."
//     4. If age > 57
//         print-> "retirement time"
//     */
//    int age;
//    cin >> age;
//    if (age < 18){
//     cout << "Not eligible for job";
//    }
//    else if (age <= 57){
//     cout << "Eligible for Job";
//     if(age >= 55){
//         cout << ", but retirment soon.";
//     }
//    }
//    else{
//     cout << "Retirement Time!!!";
//    }
   
//--------------------------------------------------------------------

    /*
    Write a program that takes a character as input and prints 1, 0, or -1 according to the following rules. 
    1, if the character is an uppercase alphabet (A - Z).
    0, if the character is a lowercase alphabet (a - z).
    -1, if the character is not an alphabet
    */
        char ch;
        cin>>ch;
        if(ch>='A'&&ch<='Z'){
            cout<<"1";
        }
        else if(ch>='a'&&ch<='z'){
            cout<<"0";
        }
        else{
            cout<<"-1";
        }
   
//----------------------------------------------------------------------

// /*
// Data type refers to the type of value a variable has and the way the computer interprets it. Each data type has a different size. You’ve studied 5 different data types and the sizes of the data types:
// Integer: 4 bytes
// Long: 8 bytes
// Float: 4 bytes
// Double: 8 bytes
// Character: 1 byte
// You’re given a data type. Print its size in bytes
// */

// int dataTypes(string type) {
// 	// Write your code here
// 	if (type == "Integer"){
// 		return 4;
// 	}
// 	else if (type == "Long"){
// 		return 8;
// 	}
// 	else if (type == "Float"){
// 		return 4;
// 	}
// 	else if (type == "Double"){
// 		return 8;
// 	}
// 	else{
// 		return 1;
// 	}
// }

//--------------------------------------------------------------------

    // /*
    // Programming languages have some conditional / decision-making statements that execute when some specific condition is fulfilled. If-else is one of the ways
    // to implement them. You are given two numbers 'a' and 'b'. Compare the numbers and print the relation. Print “smaller”, “greater” or “equal” when ‘a’ is smaller than ‘b’, greater than ‘b’, or equal to ‘b’ respectively.
    // */

    // string compareIfElse(int a, int b) {
    //     // Write your code here
        
    //     if (a < b){
    //         return "smaller";
    //     }
    //     else if (a > b){
    //         return "greater";
    //     }
    //     else{
    //         return "equal";
    //     }
    // }


    return 0;
}
