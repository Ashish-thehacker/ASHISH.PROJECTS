#include <bits/stdc++.h>
using namespace std;

void getUnion(int a[], int n, int b[], int m)
{
    // Defining set container s
    set<int> s; // it is similar as maths set
    // Inserting array elements in s
    for (int i = 0; i < n; i++)
    {
        s.insert(a[i]);
    }
    for (int i = 0; i < m; i++)
    {
        s.insert(b[i]);
    }
    cout << "Number of elements after union operation in the set : " << s.size() << endl;
    cout << "The union set of both arrays is : " << endl;
    for (auto itr = s.begin(); itr != s.end(); itr++)
    {
        cout << *itr
             << " "; // s will contain only distinct
                     // elements from array a and b
    }
}

int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    int b[3] = {1, 2, 3};
    getUnion(a, 5, b, 3);
    return 0;
}