#include <iostream>
#include <vector>

using namespace std;

// Template to perform insertion sort on a vector.
template<typename T>
void insertion_sort(vector<T>& arr) {
    for(int i = 1; i < arr.size(); ++i) {
        // Start with the second element and 
        // insert it where it belongs in the sorted left part.
        T key = arr[i];
        int j = i - 1;
        
        // Move elements greater than key 
        // one position ahead of their current position
        while(j >= 0 && key < arr[j]) {
            // Shift element rightward 
            arr[j + 1] = arr[j]; 
            --j;
        }
        // Place key in its correct position
        arr[j + 1] = key; 
    }
}

// Template function to print elements of a vector.
template<typename T>
void print_vector(const vector<T>& arr) {
    for(const auto& elem: arr) {
        cout << elem << ' ';
    }
    cout << '\n'; 
}

int main() {
    // Initialize an unsorted vector and print it
    vector<int> nums {7, 4, 1, 3, 2}; 
    cout << "Unsorted Vector: ";
    print_vector(nums); 
    
    // Sort the vector using insertion sort.
    insertion_sort(nums); 
    cout << "Sorted Vector: ";
    
    // Print the sorted vector.
    print_vector(nums); 
    return 0;
}