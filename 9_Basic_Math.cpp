#include <bits/stdc++.h>

using namespace std;

void Count_Digit()
{
    int N = 22074;
    int temp = N;
    int count = 0;
    while (N > 0)
    {
        int digit = N % 10;

        if (digit != 0 && temp % digit == 0)
        {
            count++;
        }

        N = N / 10;
    }
    cout << count << endl;
}

void Reverse_integer()
{
    int x = -123;
    int reverse = 0;
    bool isNegative = x < 0;
    x = abs(x);
    while (x > 0)
    {
        if (reverse > INT_MAX / 10)
        {
            cout << "Integer overflow" << endl;
            break;
        }
        int last_digit = x % 10;
        x = x / 10;
        reverse = (reverse * 10) + last_digit;
    }
    signed ans = isNegative ? -reverse : reverse;
    cout << ans << endl;
}

void isPalindrome()
{
    int x = -121;
    int temp = x;
    int reverse = 0;

    while (temp > 0)
    {
        if (x < 0 || reverse > INT_MAX / 10)
        {
            cout << false;
        }
        int last_digit = temp % 10;
        reverse = (reverse * 10) + last_digit;
        temp = temp / 10;
    }
    cout << (x == reverse);
    cout << endl;
}

void armstrongNumber()
{
    int n = 371;
    int temp = n;
    int size = floor(log10(temp) + 1); // to calculate the digit length
    // code here
    int sum = 0;
    while (temp > 0)
    {
        int last_digit = temp % 10;
        sum = sum + pow(last_digit, size);
        temp = temp / 10;
    }
    if (sum == n)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
    cout << endl;
}

void sumOfDivisors()
{
    int N = 4;
    int sum = 0;
    // Write Your Code here
    for (int i = 1; i <= (N); i++)
    {
        int ans = i * (N / i); // contribution technique
        sum += ans;
    }
    cout << sum << endl;
}

void isPrime()
{
    int N = 13;
    if (N == 1)
    {
        cout << 0 << endl;
    }
    // code here
    int count = -1;
    for (int i = 1; i * i <= N; i++)
    {
        if (N % i == 0)
        {
            count++;
            if ((N / i) != i)
            {
                count++;
            }
        }
    }
    int ans = (count != 1) ? 0 : 1;
    cout << ans << endl;
}

void Lcm_Hcf()
{
    long long A = 10;
    long long B = 20;
    // code here
    vector<long long> v;
    long long a = A;
    long long b = B;

    long long prod = a * b;

    while (a > 0 && b > 0)
    {
        if (a > b)
            a = a - b;
        else
            b = b - a;
    }
    if (a == 0)
        v.push_back(b);
    else
        v.push_back(a);

    long long lcm = prod / v[0];

    v.insert(v.begin(), lcm);

    cout << v[0] << " " << v[1];
}

int main()
{
    cout << "Hello World" << endl;

    cout << "Count Digits" << endl;
    Count_Digit();

    cout << "Reverse Integer" << endl;
    Reverse_integer();

    cout << "isPalindrome" << endl;
    isPalindrome();

    cout << "Armstrong number" << endl;
    armstrongNumber();

    cout << "Sum of Divisiors" << endl;;
    sumOfDivisors();

    cout << "Check for Prime" << endl;
    isPrime();

    cout << "LCM & HCF" << endl;
    Lcm_Hcf();

    return 0;
}