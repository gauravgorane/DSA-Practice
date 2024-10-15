#include <bits/stdc++.h>
using namespace std;

void printNos(int N)
{
    if (N == 0)
    {
        return;
    }
    printNos(N - 1);
    cout << N << " ";
}

void printGfg(int N)
{
    if (N == 0)
    {
        return;
    }
    cout << "GFG" << " ";
    printGfg(N - 1);
}

void printReverseNos(int N)
{
    if (N == 0)
    {
        return;
    }
    cout << N << " ";
    printNos(N - 1);
}

int sumOfSeries(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return n * n * n + sumOfSeries(n - 1);
}

class factorial{
    public:
  
    long long fact(long n){
        if(n == 1){
            return 1;
        }
        return n * fact(n-1);
    }
    
    vector<long long> factorialNumbers(long long n) {
        // Write Your Code here
        vector<long long> v;
        for(int i=1; i<=n; i++){
            long long factorial = fact(i);
            if (factorial > n){
                break;
            }
            v.push_back(factorial);
        }
        return v;
    }
};

class ReverseArray{
    public:
    vector<int> reverseSubArray(vector<int> &arr, int l, int r) {
        // code here
        if(l >= r) {
            return arr;
        }
        swap(arr[l-1], arr[r-1]);
        return reverseSubArray(arr, l + 1, r - 1);
    }
};

class validPalindrome {
public:

    string normalString(string &s){
        string normalStr;
        for(char c : s){
            if(isalnum(c)){
                normalStr += tolower(c);
            }
        }
        return normalStr;
    }

    bool isPalindromeRecursion(string &s, int i){
        int n = s.size();
        if(i>=n/2){
            return true;
        }
        if(s[i]!=s[n-i-1]){
            return false;
        }
        return isPalindromeRecursion(s, i+1);
    }

    bool isPalindrome(string s) {
        string str = normalString(s);
        return isPalindromeRecursion(str, 0);
    }
};

class Fibonacci {
public:
    int fib(int n) {
        if(n<=1){
            return n;
        }
        return fib(n-1)+fib(n-2);
    }
};

int main()
{

    cout << "Hello World" << endl << endl;

    int n = 10;

    cout << "Print 1 To N Without Loop" << endl;
    printNos(n);
    cout << endl << endl;

    cout << "Print GFG n times" << endl;
    printGfg(n);
    cout << endl << endl;

    cout << "Print N to 1 without loop" << endl;
    printReverseNos(n);
    cout << endl << endl;

    cout << "Sum of first n terms" << endl;
    cout << sumOfSeries(n);
    cout << endl << endl;

    cout << "Find all factorial numbers less than or equal to " << endl;
    factorial ob;
    vector<long long>ans = ob.factorialNumbers(n);
    for(auto num : ans){
        cout << num << " ";
    }
    cout << endl << endl;
    
    cout << "Reverse sub array" << endl;
    ReverseArray obj;
    vector<int> arr;
    arr.emplace_back(1);
    arr.emplace_back(2);
    arr.emplace_back(3);
    arr.emplace_back(4);
    arr.emplace_back(5);
    arr.emplace_back(6);
    arr.emplace_back(7);
    int l = 2;
    int r = 4;
    cout << "Input array: ";
    for(auto num : arr){
        cout << num << " ";
    }
    cout << endl << "Result array: ";
    vector<int>out = obj.reverseSubArray(arr, l, r);
    for(auto num : out){
        cout << num << " ";
    }
    cout << endl << endl;

    cout << "Valid Palindrome with recursion" << endl;
    validPalindrome obj1;
    string s = "A man, a plan, a canal: Panama";
    cout << obj1.isPalindrome(s) << endl;
    s = "race a car";
    cout << obj1.isPalindrome(s);
    cout << endl << endl;

    cout << "Fibonacci Number" << endl;
    Fibonacci objs;
    cout << objs.fib(n);
    cout << endl << endl;

    return 0;
}