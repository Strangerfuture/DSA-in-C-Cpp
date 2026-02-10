#include <iostream>
#include <vector>

using namespace std;

// Template to perform bubble sort on a vector
template<typename T>
void bubble_sort(vector<T>& arr) {
    
    // Flag to detect if any swapping happened in the current pass
    bool modified = false; 
    
    for(int i = 0; i < arr.size() - 1; ++i) {
        // Reset modified to false at the start of each pass
        modified = false; 

        // Stop at arr.size()-1-i to avoid checking sorted elements
        for(int j = 0; j < arr.size() - 1 - i; ++j) {
            // Swap adjacent elements if they are in the wrong order
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]); 
                // Set modified to true indicating a swap occurred
                modified = true; 
            }
        }
        
        // If no elements were swapped, 
        // the arr is sorted and we can break early
        if(!modified)
            break;
    }
}

// Template to print elements of a vector
template<typename T>
void print_vector(const vector<T>& arr) {
    for(const auto& elem: arr) {
        cout << elem << ' ';
    }
    cout << '\n'; 
}

int main() {
    // Initialize an unsorted vector and print it
    vector<int> nums {15, 16, 6, 8, 5}; 
    cout << "Unsorted Vector: ";
    print_vector(nums); 
    
    // Sort the vector using bubble sort and print it  
    bubble_sort(nums); 
    cout << "Sorted Vector: ";
    print_vector(nums); 
    return 0;
}