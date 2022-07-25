#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void merge(int arr1[], int arr2[], int n, int m)
    {
        // code here
        // {1,3,5,7}
        // {0,2,6,8,9}

        // {0,1,2,3}---> n=4
        //{5, 6 , 7 , 8 , 9 }
        // {0,1,2,3,5,6,7,8,9}----->
        int i = 0, j = 0, k = n - 1;
        while (i <= k && j < m)
        {
            if (arr1[i] < arr2[j])
                i++;
            else
            {
                swap(arr2[j++], arr1[k--]);
            }
        }
        sort(arr1, arr1 + n);
        sort(arr2, arr2 + m);
    }
};
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, i;
        cin >> n >> m;
        int arr1[n], arr2[m];
        for (i = 0; i < n; i++)
        {
            cin >> arr1[i];
        }
        for (i = 0; i < m; i++)
        {
            cin >> arr2[i];
        }
        Solution ob;
        ob.merge(arr1, arr2, n, m);
        for (i = 0; i < n; i++)
        {
            cout << arr1[i] << " ";
        }
        for (i = 0; i < m; i++)
        {
            cout << arr2[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}