#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

// Function to find unique elements in an array
void findUniqueElements(const vector<int>& arr) {
    unordered_map<int, int> freqMap;

    // Count the frequency of each element
    for (int num : arr) {
        freqMap[num]++;
    }

    // Output the unique elements (those that appear exactly once)
    cout << "Unique elements are: ";
    for (const auto& entry : freqMap) {
        if (entry.second == 1) {
            cout << entry.first << " ";
        }
    }
    cout << endl;
}

int main() {
    vector<int> arr = {2, 3, 5, 2, 5, 3, 8, 9};

    cout << "Original Array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    findUniqueElements(arr);

    return 0;
}
