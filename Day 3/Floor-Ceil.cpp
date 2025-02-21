#include <iostream>
#include <vector>
using namespace std;

// Floor খুঁজে বের করা
int findFloor(vector<int>& a, int x) {
    int low = 0, high = a.size() - 1;
    int floorValue = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (a[mid] <= x) {
            floorValue = a[mid]; // সম্ভাব্য Floor
            low = mid + 1; // ডানদিকে দেখবো
        } else {
            high = mid - 1; // বাঁদিকে দেখবো
        }
    }

    return floorValue;
}

// Ceiling খুঁজে বের করা
int findCeiling(vector<int>& a, int x) {
    int low = 0, high = a.size() - 1;
    int ceilValue = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (a[mid] >= x) {
            ceilValue = a[mid]; // সম্ভাব্য Ceiling
            high = mid - 1; // বাঁদিকে দেখবো
        } else {
            low = mid + 1; // ডানদিকে দেখবো
        }
    }

    return ceilValue;
}


pair<int, int> getFloorAndCeil(vector<int> &a, int n, int x) {
    int low = 0, high = n - 1;
    int floorValue = -1, ceilValue = -1;

    // Floor খোঁজা
    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (a[mid] <= x) {
            floorValue = a[mid]; // সম্ভাব্য Floor
            low = mid + 1; // ডানদিকে দেখবো
        } else {
            high = mid - 1; // বাঁদিকে দেখবো
        }
    }

    // Ceiling খোঁজা
    low = 0, high = n - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (a[mid] >= x) {
            ceilValue = a[mid]; // সম্ভাব্য Ceiling
            high = mid - 1; // বাঁদিকে দেখবো
        } else {
            low = mid + 1; // ডানদিকে দেখবো
        }
    }

    return {floorValue, ceilValue};
}

int main() {
    int n, x;
    cin >> n >> x;
    
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int floorValue = findFloor(a, x);
    int ceilValue = findCeiling(a, x);

    cout << floorValue << " " << ceilValue << endl;

    return 0;
}
