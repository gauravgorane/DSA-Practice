#include<bits/stdc++.h>

using namespace std;

int main()
{
        
    /*
    The n-th term of Fibonacci series F(n), where F(n) is a function, is calculated using the following formula - F(n) = F(n - 1) + F(n - 2), 
    Where, F(1) = 1, F(2) = 1 
    Provided 'n' you have to find out the n-th Fibonacci Number. Handle edges cases like when 'n' = 1 or 'n' = 2 by using conditionals like if else and return what's expected.
    */

    int n, ans;
    int f2 = 1;
    int f1 = 1;
    cin >> n;
    if (n == 1 || n == 2){
            cout << '1';
    }
    else{
            for (int i = 2; i < n; i++){
                    ans = f1 + f2;
                    f1 = f2;
                    f2 = ans;
            }
            cout << ans;
    }


        return 0;
}