
#include <iostream>
#include <vector>

using namespace std;

// Template to perform binary search on a sorted array.
template<typename T>
int binary_search(const vector<T>& arr, T target) {
    int low = 0; // Starting index of the search range
    int high = arr.size() - 1; // Ending index of the search range
    
    while(low <= high) {
        // Calculate the middle index to divide the search range.
        int mid = low + (high - low) / 2;
        
        // Check if the target is present at mid.
        if(target == arr[mid])
            return mid;
        
        // If target is smaller than mid, 
        // reduce the search range to the left half.
        else if(target < arr[mid]) 
            high = mid - 1;
        
        // If target is larger, 
        // adjust the search range to the right half.
        else 
            low = mid + 1;
    }
    // Target was not found in the array.
    return -1;
}

int main() {
    // Initialize a vector of integers and specify the target value.
    vector<int> nums {4, 5, 6, 7, 8, 9, 10};
    int target = 7;
    // Call binary_search function and capture the index result.
    int idx = binary_search(nums, target);
    
    // Output the result of the search.
    if(idx == -1) 
        cout << "Element " << target << " is not found in the vector.\n";
    else 
        cout << "Element " << target << " is found at index " << idx << '\n';
    return 0;
}