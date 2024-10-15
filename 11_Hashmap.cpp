#include <bits/stdc++.h>
using namespace std;

int findFrequency(vector<int> Arr, int X)
{
    // Your code here
    unordered_map<int, int> mpp;
    for (int i = 0; i < Arr.size(); i++)
    {
        mpp[Arr[i]]++;
    }
    for (auto it : mpp)
    {
        cout << it.first << "->" << it.second << endl;
    }
    return mpp[X];
}

class Hashh
{
public:
    // Function to count the frequency of all elements from 1 to N in the array.
    void frequencyCount(vector<int> &arr, int N, int P)
    {
        // do modify in the given array
        int hashh[N] = {0};

        for (int i = 0; i < N; i++)
        {
            if (1 <= arr[i] && arr[i] <= N)
            {
                hashh[arr[i] - 1] += 1;
            }
        }
        for (int i = 0; i < N; i++)
        {
            arr[i] = hashh[i];
        }
    }
};

int main()
{
    cout << "Hello World" << endl
         << endl;

    vector<int> Arr;
    Arr.emplace_back(1);
    Arr.emplace_back(2);
    Arr.emplace_back(3);
    Arr.emplace_back(3);
    Arr.emplace_back(2);
    Arr.emplace_back(1);

    int X = 2;
    cout << findFrequency(Arr, X) << endl
         << endl;

    cout << "Frequencies of Limited Range Array Elements" << endl;
    vector<int> arr;
    arr.emplace_back(3);
    arr.emplace_back(3);
    arr.emplace_back(3);
    arr.emplace_back(3);
    int N = 4;
    int P = 3;
    Hashh obj;
    obj.frequencyCount(arr, N, P);
    for (int i = 0; i < N; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl
         << endl;

    return 0;
}
