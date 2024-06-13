// C++ Code Challenges, LinkedIn Learning

// Challenge #2: Sorting an Array
// Sort the elements in an array in ascending order.
// Implement the algorithm of your choice.
// Don't use STL vectors.
// Don't use a sorting function from a library.

#include <iostream>
#include <bits/stdc++.h>
// sort_array()
// Summary: This function receives an array of integers and sorts it in ascending order.
// Arguments:
//           arr: A pointer acting as the array to sort.
//           n: The size of the array.
// Returns: A boolean value: True on success, false otherwise.

/*********************************************USING SELECTION SORT****************************************************** */
bool sort_array(int *arr, int n){

if(arr==NULL)
return false;
if(n<2)
return true;
int temp;
bool sorted=false;
// Write your code here
int i, j, minn;
for (i = 0; i < n - 1; i++)
{
    //Set the first index of the array as the minimum element
    minn = i;
    //iterate through the rest of the array
    for (j = i + 1; j < n; j++) 
    {
        if (arr[j] < arr[minn])
            minn = j;
    }

    // Swap the found minimum element
    if (minn != i)
    {
            temp = arr[i];
            arr[i] = arr[minn];
            arr[minn]= temp;
    }

}
return true;;
}

// Main function
int main(){
    // The following array will be treated as an array of length len. 
    const int len = 7; // Don't exceed the length of the array below!
    int array[] = {2, 9, 4, 3, 5, 1, 6, 8, 0, 7};

    // Print the original array
    std::cout << "Original Array: [ ";
    for (int i = 0; i < len; i++)
        std::cout << array[i] << " ";
    std::cout << "]" << std::endl << std::endl << std::flush;

    sort_array(array, len); // Sort the array

    // Print the sorted array
    std::cout << "  Sorted Array: [ ";
    for (int i = 0; i < len; i++)
        std::cout << array[i] << " ";
    std::cout << "]" << std::endl << std::endl << std::flush;

    return 0;
}
