#include <bits/stdc++.h>

using namespace std;

void square(int num)
{
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;
}

void leftTriangle(int num)
{
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;
}

void leftTriangleDigit1(int num)
{
    for (int i = 0; i < num; i++)
    {
        // for (int j = 1; j <= i + 1; j++)
        // {
        //     cout << j;
        // }
        int j = 0;
        while (j <= i)
        {
            cout << j + 1;
            j++;
        }
        cout << endl;
    }
    cout << endl;
}

void leftTriangleDigit2(int num)
{
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << i + 1;
        }
        cout << endl;
    }
    cout << endl;
}

void leftTriangleInverse(int num)
{
    for (int i = 0; i < num; i++)
    {
        int j = 0;
        while (j < num - i)
        {
            cout << "*";
            j++;
        }
        cout << endl;
    }
    cout << endl;
}

void leftTriangleInverseDigit(int num)
{
    for (int i = 0; i < num; i++)
    {
        int j = 1;
        while (j <= num - i)
        {
            cout << j;
            j++;
        }
        cout << endl;
    }
    cout << endl;
}

void Pyramid(int num)
{
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num - i - 1; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < num - i - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
    cout << endl;
}

void PyramidInverse(int num)
{
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < (2 * num) - (2 * i + 1); j++)
        {
            cout << "*";
        }
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
    cout << endl;
}

void PyramidDouble(int num)
{
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num - i - 1; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < num - i - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < (2 * num) - (2 * i + 1); j++)
        {
            cout << "*";
        }
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
    cout << endl;
}

void PyramidDoubleLeft(int num)
{
    for (int i = 0; i < 2 * num - 1; i++)
    {
        int restart = i + 1;
        if (restart > num)
        {
            restart = 2 * num - i - 1;
        }

        for (int j = 0; j < restart; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;
}

void LeftTriangle10(int num)
{
    int start;
    for (int i = 0; i < num; i++)
    {
        if (i % 2 == 0)
        {
            start = 1;
        }
        else
        {
            start = 0;
        }
        for (int j = 0; j < i + 1; j++)
        {
            cout << start;
            start = 1 - start;
        }
        cout << endl;
    }
    cout << endl;
}

void MPattern(int num)
{
    int space = 2 * (num - 1);
    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        for (int j = 1; j <= space; j++)
        {
            cout << " ";
        }

        for (int j = i; j >= 1; j--)
        {
            cout << j;
        }
        cout << endl;
        space -= 2;
    }
    cout << endl;
}

void leftTriangleDigit(int num)
{
    int start = 1;
    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << start << " ";
            start++;
        }
        cout << endl;
    }
    cout << endl;
}

void leftTriangleAlphabet1(int num)
{
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << char('A' + j) << " ";
        }
        cout << endl;
    }
    cout << endl;
}

void reverseTriangleAlphabet(int num)
{
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num - i; j++)
        {
            cout << char('A' + j) << " ";
        }
        cout << endl;
    }
    cout << endl;
}

void leftTriangleAlphabet2(int num)
{
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << char('A' + i) << " ";
        }
        cout << endl;
    }
    cout << endl;
}

void PyramidAlphabet(int num)
{
    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= num - i; j++)
        {
            cout << " ";
        }
        char ch = 'A';
        int breakpoint = (2 * i - 1) / 2;
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << ch;
            if (j <= breakpoint)
                ch++;
            else
                ch--;
        }
        for (int j = 1; j <= num - i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
    cout << endl;
}

void leftTriangleAlphabet3(int num)
{
    for (int i = 0; i < num; i++)
    {
        for (char ch = ('A' + num - 1) - i; ch <= ('A' + num - 1); ch++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
    cout << endl;
}

void HollowDiamond(int num)
{
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num - i; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < 2 * i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < num - i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    int space = 2 * num - 2;
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < space; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < i + 1; j++)
        {
            cout << "*";
        }
        space = space - 2;
        cout << endl;
    }
    cout << endl;
}

void HollowDiamondInverse(int num)
{
    int space = 2 * num - 2;
    for (int i = 1; i <= 2 * num - 1; i++)
    {
        int stars = i;
        if (i > num)
        {
            stars = 2 * num - i;
        }
        for (int j = 0; j < stars; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < space; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < stars; j++)
        {
            cout << "*";
        }

        if (i < num)
        {
            space -= 2;
        }
        else
        {
            space += 2;
        }

        cout << endl;
    }
    cout << endl;
}

void Reactangle(int num)
{
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num; j++)
        {
            if (i == 0 || j == num - 1 || i == num - 1 || j == 0)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    cout << endl;
}

void ReactangleDigit(int num){
    for (int i = 0; i < 2*num-1; i++){
        for (int j = 0; j < 2*num-1; j++)
        {
            // int top = i;
            // int left = j;
            // int right = (2*num-2)-j;
            // int bottom = (2*num-2)-i;
            // cout << num - min(min(top, left), min(bottom, right));
            cout << max(abs(i-num+1), abs(j-num+1)) + 1;
        }
        cout << endl;
    }
    cout << endl;
}

int main()
{
    int num;
    cin >> num;

    cout << "Square" << endl;
    square(num);

    cout << "Left Triangle" << endl;
    leftTriangle(num);

    cout << "Left Triangle Digit 1" << endl;
    leftTriangleDigit1(num);

    cout << "Left Triangle Digit 2" << endl;
    leftTriangleDigit2(num);

    cout << "Left Triangle Inverse" << endl;
    leftTriangleInverse(num);

    cout << "Left Triangle Inverse Digit" << endl;
    leftTriangleInverseDigit(num);

    cout << "Pyramid" << endl;
    Pyramid(num);

    cout << "Pyramid Inverse" << endl;
    PyramidInverse(num);

    cout << "Pyramid Double" << endl;
    PyramidDouble(num);

    cout << "Pyramid Double Left" << endl;
    PyramidDoubleLeft(num);

    cout << "Left Triangle 10" << endl;
    LeftTriangle10(num);

    cout << "M" << endl;
    MPattern(num);

    cout << "Left Triangle Digit" << endl;
    leftTriangleDigit(num);

    cout << "Left Triangle Alphabet1" << endl;
    leftTriangleAlphabet1(num);

    cout << "Reverse Triangle Alphabet" << endl;
    reverseTriangleAlphabet(num);

    cout << "Left Triangle Alphabet2" << endl;
    PyramidAlphabet(num);

    cout << "Left Triangle Alphabet3" << endl;
    leftTriangleAlphabet3(num);

    cout << "Hollow Diamond" << endl;
    HollowDiamond(num);

    cout << "Hollow Diamond Inverse" << endl;
    HollowDiamondInverse(num);

    cout << "Rectangle" << endl;
    Reactangle(num);
    
    cout << "Rectangle Digit" << endl;
    ReactangleDigit(num);

    return 0;
}