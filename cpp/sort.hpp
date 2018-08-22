#ifndef SORT_HPP
#define SORT_HPP
//! @file

//! @brief Swap two elements of an array.
//! @param A Pointer to array.
//! @param i First element to swap.
//! @param j Second element to swap.
void swap(int* A, int i, int j);

//! @brief In-place bubble sort.
//! @param A Pointer to array.
//! @param length Length of array.
void bubblesort(int* A, int length);

//! @param A Pointer to array.
//! @param length Length of array.
void insertionsort(int* A, int length);

//! @brief Wrapper function for calling recursive @function mergesort(int*, int, int).
//! @param A Pointer to array.
//! @param length Length of array.
void mergesort(int* A, int length);

//! @brief Merge sort.
//! @param A Pointer to array.
//! @param start First index of sub-array to sort.
//! @param end Last index of sub-array to sort.
void mergesort(int* A, int start, int end);

//! @brief Helper function for @function mergesort(int*, int, int).
//! @param A Pointer to array.
//! @param start First index of sub-array.
//! @param mid Index that separates sub-array into left and right sub-arrays.
//! @param end Last index of sub-array.
void merge(int* A, int start, int mid, int end);

//! @brief Wrapper function for calling recursive @function quicksort(int*, int, int).
//! @param A Pointer to array.
//! @param length Length of array.
void quicksort(int* A, int length);

//! @brief Quicksort.
//! @param A Pointer to array.
//! @param start First index of sub-array to sort.
//! @param end Last index of sub-array to sort.
void quicksort(int* A, int start, int end);

//! @brief Selection sort.
//! @param A Pointer to array.
//! @param length Length of array.
void selectionsort(int* A, int length);

#endif
