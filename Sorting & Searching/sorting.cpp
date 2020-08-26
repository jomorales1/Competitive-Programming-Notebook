#include <bits/stdc++.h>

using namespace std;

bool compare(pair<int, int> &a, pair<int, int> &b) {
    return a.second < b.second;
}

// Sorts the given string in ascending order
// Time complexity: O(logn)
void sort_string_a(string &word) {
    sort(word.begin(), word.end());
    for (const auto &character : word) {
        cout << character;
    }
    cout << '\n';
}

// Sorts the given string in descending order
// Time complexity: O(logn)
void sort_string_d(string &word) {
    sort(word.rbegin(), word.rend());
    for (const auto &character : word) {
        cout << character;
    }
    cout << '\n';
}

// Sorts the given array in ascending order
// Time complexity: O(logn)
void sort_array_a(int arr[], int n) {
    sort(arr, arr + n);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << ' ';
    }
    cout << '\n';
}

// Sorts the given array in descending order
// Time complexity: O(logn)
void sort_array_d(int arr[], int n) {
    sort(arr, arr + n);
    for (int i = n - 1; i >= 0; i--) {
        cout << arr[i] << ' ';
    }
    cout << '\n';
}

// Sorts the given vector in ascending order
// Time complexity: O(logn)
void sort_vector_a(vector<int> &elements) {
    sort(elements.begin(), elements.end());
    for (const auto &element : elements) {
        cout << element << ' ';
    }
    cout << '\n';
}

// Sorts the given vector in descending order
// Time complexity: O(logn)
void sort_vector_d(vector<int> &elements) {
    sort(elements.rbegin(), elements.rend());
    for (const auto &element : elements) {
        cout << element << ' ';
    }
    cout << '\n';
}

// Sorts the given vector of pairs given a custom
// function to compare the elements between them
// Time complexity: O(logn)
void custom_sort(vector<pair<int, int>> &segments) {
    sort(segments.begin(), segments.end(), compare);
    for (const auto &segment : segments) {
        cout << '(' << segment.first << ", " << segment.second << ')' << ' ';
    }
    cout << '\n';
}

int main() {
    cout << "Testing string sorting\n";
    cout << "Input: ";
    string word; cin >> word;
    cout << "Ascending: ";
    sort_string_a(word);
    cout << "Descending: ";
    sort_string_d(word);
    cout << "Testing array sorting\n";
    cout << "Size: ";
    int n; cin >> n;
    int elements[n];
    for (int i = 0; i < n; i++) {
        cout << "Element " << (i + 1) << ": ";
        cin >> elements[i];
    }
    cout << "Ascending: ";
    sort_array_a(elements, n);
    cout << "Descending: ";
    sort_array_d(elements, n);
    cout << "Testing vector sorting\n";
    cout << "Size: ";
    cin >> n;
    vector<int> elements2(n);
    for (int i = 0; i < n; i++) {
        cout << "Element " << (i + 1) << ": ";
        cin >> elements2[i];
    }
    cout << "Ascending: ";
    sort_vector_a(elements2);
    cout << "Descending: ";
    sort_vector_d(elements2);
    cout << "Testing custom sorting of pairs\n";
    cout << "Size: ";
    cin >> n;
    vector<pair<int, int>> segments(n);
    for (int i = 0; i < n; i++) {
        cout << "Segment " << (i + 1) << ": ";
        cin >> segments[i].first >> segments[i].second;
    }
    cout << "Sorting by the second component\n";
    custom_sort(segments);
    return 0;
}