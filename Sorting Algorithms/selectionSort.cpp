#include <iostream>
#include <vector>

using namespace std;

// Template to perform selection sort
template<typename T>
void selection_sort(vector<T>& arr) {
    
    for(int i = 0; i < arr.size(); ++i) {
        // Assume the first unsorted element is the minimum
        int min_idx = i;
        
        // Iterate over unsorted elements
        for(int j =  i + 1; j < arr.size(); ++j) {
            // Find index of the smallest element
            if(arr[j] < arr[min_idx])
                min_idx = j;
        }
        
        // Swap the smallest element with 
        // the first element of the unsorted part
        swap(arr[i], arr[min_idx]);
    }
}

// Template to print elements of a vector.
template<typename T>
void print_vector(const vector<T>& arr) {
    for(const auto& elem: arr) {
        cout << elem << ' ';
    }
    cout << '\n';
}

int main() {
    
    // Initialize an unsorted vector and print it.
    vector<int> nums {18, 10, 8, 14, 1};
    cout << "Unsorted Vector: ";
    print_vector(nums);
    
    // Sort the vector using selection sort and print it.   
    selection_sort(nums);
    cout << "Sorted Vector: ";
    print_vector(nums);
    return 0;
} 