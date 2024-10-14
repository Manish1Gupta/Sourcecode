#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

// Function to find duplicates in an array
void findDuplicates(const vector<int>& arr) {
    unordered_map<int, int> freqMap;

    // Count the frequency of each element
    for (int num : arr) {
        freqMap[num]++;
    }

    // Output duplicates (those that appear more than once)
    cout << "Duplicate elements are: ";
    bool hasDuplicates = false;
    for (const auto& entry : freqMap) {
        if (entry.second > 1) {
            cout << entry.first << " ";
            hasDuplicates = true;
        }
    }
    if (!hasDuplicates) {
        cout << "None";
    }
    cout << endl;
}

int main() {
    vector<int> arr = {2, 3, 1, 2, 3, 5, 7, 5, 8};

    cout << "Original Array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    findDuplicates(arr);

    return 0;
}
