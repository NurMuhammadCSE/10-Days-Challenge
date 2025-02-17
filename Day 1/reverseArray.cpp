#include <bits/stdc++.h>
using namespace std;

void reverseArray(vector<int> &arr)
{
    int start = 0;
    int end = arr.size() - 1;

    while (start < end)
    {
        swap(arr[start++], arr[end--]);
    }
}

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    reverseArray(arr);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}