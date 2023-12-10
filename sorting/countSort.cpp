#include <iostream>
#include <vector>
using namespace std;

void countingSort(vector<int>& arr) {
    int n = arr.size();

    // Find the maximum element to determine the range
    int maxElement = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > maxElement) {
            maxElement = arr[i];
        }
    }
    // Create a counting array to store the count of each element
    vector<int> count(maxElement + 1, 0);

    // Count the occurrences of each element in the input array
    for (int i = 0; i < n; i++) {
        count[arr[i]]++;
    }

    // Modify the counting array to store the cumulative count
    for (int i = 1; i <= maxElement; i++) {
        count[i] += count[i - 1];
    }

    // Create a temporary array to store the sorted output
    vector<int> output(n);

    // Build the sorted output array
    for (int i = n - 1; i >= 0; i--) {
        output[count[arr[i]] - 1] = arr[i];
        count[arr[i]]--;
    }

    // Copy the sorted elements back to the original array
    for (int i = 0; i < n; i++) {
        arr[i] = output[i];
    }
}

int main() {
    vector<int> arr;
    arr.push_back(4);
    arr.push_back(2);
    arr.push_back(2);
    arr.push_back(8);
    arr.push_back(3);
    arr.push_back(3);
    arr.push_back(1);
    int n = arr.size();

    countingSort(arr);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
