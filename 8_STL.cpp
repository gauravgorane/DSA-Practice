#include <bits/stdc++.h>

using namespace std;

void Pair()
{
    pair<int, int> p = {1, 2};

    cout << p.first << " " << p.second << endl;

    pair<int, pair<int, int>> q = {1, {2, 3}};

    cout << q.first << " " << q.second.first << " " << q.second.second << endl;

    pair<int, int> a[] = {{1, 2},
                          {3, 4},
                          {5, 6},
                          {7, 8},
                          {9, 0}};

    for (int i = 0; i < 5; i++)
    {
        cout << a[i].first << "->" << a[i].second << " ";
    }
}

void Vector()
{
    vector<int> v0;

    v0.push_back(1);
    v0.emplace_back(2);
    v0.emplace_back(3);
    v0.emplace_back(4);
    v0.emplace_back(5);
    v0.emplace_back(6);
    v0.emplace_back(7);

    vector<pair<int, int>> vec;

    vec.push_back({1, 2});
    vec.emplace_back(1, 2);

    vector<int> v1(5, 100);

    vector<int> v2(5);

    vector<int> v3(5, 20);
    vector<int> v4(v1);

    vector<int>::iterator it = v0.begin();
    it++;
    cout << *it << " ";

    // vector<int>::iterator it = v0.end(); // after vector
    // vector<int>::iterator it = v0.rend(); // reverse end
    // vector<int>::iterator it = v0.rbegin(); // reverse begin

    cout << v0[0] << " " << v0.at(0) << " ";

    cout << v0.back() << endl; // 7

    for (vector<int>::iterator it = v0.begin(); it != v0.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    for (auto it = v0.begin(); it != v0.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    for (auto it : v0)
    {
        cout << it << " ";
    }
    cout << endl;

    // Erase

    v0.erase(v0.begin() + 1);
    v0.erase(v0.begin() + 1, v0.begin() + 3);

    for (auto it : v0)
    {
        cout << it << " ";
    }
    cout << endl;

    // Insert

    vector<int> v(2, 100);
    v.insert(v.begin(), 300);
    v.insert(v.end() - 1, 2, 10);

    v.insert(v.begin(), v0.begin(), v0.end());

    cout << v.size() << endl;

    v.pop_back();

    v1.swap(v2);

    v0.clear();

    cout << v1.empty() << endl;

    for (auto it : v)
    {
        cout << it << " ";
    }
}

void List()
{
    list<int> ls;

    ls.push_back(2);
    ls.emplace_back(3);

    ls.push_front(5);

    ls.emplace_front(7);

    for (auto it = ls.begin(); it != ls.end(); it++)
    {
        cout << *it << " ";
    }

    // rest function same as vector
    // begin, end, rend, rbegin, clear, empty, insert, size, swap
}

void Deque()
{
    deque<int> dq;

    dq.push_back(2);
    dq.emplace_back(3);

    dq.push_front(5);
    dq.emplace_front(6);

    dq.pop_back();
    dq.pop_front();

    for (auto it = dq.begin(); it != dq.end(); it++)
    {
        cout << *it << " ";
    }

    // rest function same as vector
    // begin, end, rend, rbegin, clear, empty, insert, size, swap
}

void Stack()
{
    stack<int> st;

    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.emplace(5);

    st.pop();
    int x = st.top();

    for (int i = 0; i < st.size(); i++)
    {
        cout << x << " ";
    }

    cout << st.empty();

    stack<int> st1, st2;
    st1.swap(st2);
}

void Queue()
{
    queue<int> q;

    q.push(2);
    q.push(12);
    q.push(3);
    q.emplace(5);

    q.back() += 5;

    cout << q.back() << endl;
    cout << q.front() << endl;

    q.pop();

    cout << q.front();
}

void PriorityQueue()
{
    priority_queue<int> pq;

    pq.push(9);
    pq.push(4);
    pq.push(2);
    pq.emplace(8);
    pq.pop();

    cout << pq.top() << endl;

    // size swap empty function are same as other

    priority_queue<int, vector<int>, greater<int>> pq1;

    pq1.push(9);
    pq1.push(4);
    pq1.push(2);
    pq1.emplace(8);

    cout << pq1.top() << endl;
}

void Set()
{
    set<int> st;

    st.insert(1);
    st.insert(3);
    st.insert(3);
    st.insert(5);
    st.emplace(7);
    st.emplace(4);

    auto it = st.find(7);
    cout << &it << endl;

    st.erase(1);
    st.erase(it, it++);

    auto it1 = st.upper_bound(4);
    auto it2 = st.lower_bound(4);

    cout << &it1 << endl;
    cout << &it2 << endl;
}

void MultiSet()
{
    multiset<int> ms;

    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.insert(2);
    ms.insert(2);
    ms.insert(7);
    ms.insert(7);

    ms.erase(1);

    ms.erase(ms.find(1), ms.find(1)++);
}

void Unorderset()
{
    unordered_set<int> us;

    // lower and upper bound not work
    // not sorted + random + unique
}

void Map()
{
    // unique key + sorted order
    map<int, int> m;

    map<int, pair<int, int>> mpp;
    map<pair<int, int>, int> mp;

    m[1] = 2;
    m.emplace(3, 1);
    m.insert({2, 4});

    mp[{2, 3}] = 10;

    for (auto it : m)
    {
        cout << it.first << " " << it.second << endl;
    }

    cout << m[1];
}

void MultiMap()
{
    multimap<int, int> mp;

    // everything stores like a map, only it can store multiple keys
    // only map[key] is not use here
}

void UnorderMap()
{
    unordered_map<int, int> unmp;

    // same as set and unorderd_Set difference
}

bool comp(pair<int, int> p1, pair<int, int> p2)
{
    if (p1.second < p2.second)
    {
        return true;
    }
    if (p1.second > p2.second)
    {
        return false;
    }

    if (p1.first > p2.first)
    {
        return true;
    }
    return false;
}

void Extra()
{

    // int a[] = {8, 2, 7, 3, 6};
    // sort(a, a+5);

    // vector<int, int> v;
    // sort(v.begin(), v.end());

    int a[5] = {8, 2, 7, 1, 6};
    sort(a, a + 5, greater<int>());
    cout << a[0] << endl;

    pair<int, int> p[] = {{1, 2}, {2, 1}, {4, 1}};

    sort(p, p + 3, comp);

    for (int i = 0; i < 3; i++)
    {
        cout << p[i].first << "->" << p[i].second << " " << endl;
    }

    int num = 7;
    cout << __builtin_popcount(num) << endl;

    long long n = 158303493;
    cout << __builtin_popcountll(n) << endl;

    string s = "213";
    sort(s.begin(), s.end());
    do
    {
        cout << s << endl;
    } while (next_permutation(s.begin(), s.end()));
    
    cout << *max_element(a, a+5);

}

int main()
{
    cout << "Hello world" << endl;

    Pair();
    cout << endl;

    Vector();
    cout << endl;

    List();
    cout << endl;

    Deque();
    cout << endl;

    Stack();
    cout << endl;

    Queue();
    cout << endl;

    PriorityQueue();
    cout << endl;

    Set();
    cout << endl;

    MultiSet();
    cout << endl;

    Unorderset();
    cout << endl;

    Map();
    cout << endl;

    MultiMap();
    cout << endl;

    UnorderMap();
    cout << endl;

    Extra();
    cout << endl;

    return 0;
}