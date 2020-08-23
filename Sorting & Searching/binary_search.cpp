#include <bits/stdc++.h>

using namespace std;

// Given a sorted array the function below
// returns the position of the element in
// the array. If the element isn't in the
// array returns -1.
// Time complexity: O(logn)
int binary_search(const vector<int> &elements, int x) {
    int left = 0;
    int right = elements.size() - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (elements[mid] == x)
            return mid;
        if (elements[mid] < x)
            left = mid + 1;
        if (elements[mid] > x)
            right = mid - 1;
    }
    return -1;
}

int main() {
    // Index: 0 1 2 3 4 5 6 7 8 9
    // Value: 1 2 3 4 5 6 7 8 9 10
    vector<int> elements = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int x = -1;
    cin >> x;
    int index = binary_search(elements, x);
    cout << (index != -1 ? "Element was found at: " : "Element wasn't found: ");
    cout << index << '\n';
    return 0;
}