#include <iostream>
#include <vector>

using namespace std;

// Template to perform linear search on a vector.
template<typename T>
int linear_search(const vector<T>& arr, T target) {
    
    // Iterate through all elements in the vector.
    for(int i = 0; i < arr.size(); ++i) {
        // Check if the current element matches the target.
        if(arr[i] == target)
            // Return the index of the element if found.
            return i; 
    }
    // Return -1 if the target is not found.
    return -1; 
}

int main() {
    // Initialize a vector of integers 
    // And set the target to search for.
    vector<int> nums {9, 10, 5, 8, 7, 4, 11, 6, 15, 3};
    int target = 4; 
    
    // Call the linear search to find the target in the vector.
    int idx = linear_search(nums, target);
    
    // Output the result of the search.
    if(idx == -1) 
        cout << "Element " << target << " is not found in the vector.\n";
    else 
        cout << "Element " << target << " is found at index " << idx << '\n';
    return 0;
}