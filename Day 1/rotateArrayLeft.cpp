#include<bits/stdc++.h>
using namespace std;

void rotateArrayLeft(vector<int> &arr, int k){
    int n = arr.size();
    k = k % n;
    reverse(arr.begin(), arr.end());
    reverse(arr.begin(), arr.begin() + n - k);
    reverse(arr.begin() + n - k, arr.end());
}   

int main(){
    int n, k;
    cin >> n >> k;

    vector<int> arr(n);

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    rotateArrayLeft(arr, k);

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
