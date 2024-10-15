#include<iostream>

using namespace std;

int main() {
	
    /*
    Write a program to input an integer 'n' and print the sum of all its even digits and sum of all its odd digits separately. Digits mean numbers, not the places! That is, if the given integer is "132456", even digits are 2, 4 and 6 and odd digits are 1, 3 and 5.
    */
    int n, e = 0, o = 0;
    cin >> n;

    while(n){
    	int k = n%10;
    	if (k%2){
    		o += k;
    	}
    	else{
    		e += k;
    	}
    	n /= 10;
    }
    cout << e << " " << o;



	return 0;	
}
