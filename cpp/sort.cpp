#include "sort.hpp"

void swap(int* A, int i, int j) {
	if (i != j) {
		int temp = A[i];
		A[i] = A[j];
		A[j] = temp;
	}
}

void bubblesort(int* A, int length) {
	if (length == 1) {
		return;
	}

	bool swapped = true;
	for (int i = 0; i < length - 1; i++) {
		if (!swapped) {
			break;
		}
		swapped = false;
		for (int j = 0; j < length - 1 - i; j++) {
			if (A[j] > A[j + 1]) {
				swap(A, j, j + 1);
				swapped = true;
			}
		}
	}
}

void insertionsort(int* A, int length) {
	for (int i = 1; i < length; i++) {
		int j = i;
		while (j > 0 && A[j] < A[j - 1]) {
			swap(A, j, j - 1);
			j--;
		}
	}
}

void merge(int* A, int start, int mid, int end) {
	int* merged = new int[end - start + 1];

	int leftIdx = start, rightIdx = mid + 1, mergeIdx = 0;

	while (leftIdx <= mid && rightIdx <= end) {
		if (A[leftIdx] < A[rightIdx]) {
			merged[mergeIdx++] = A[leftIdx++];
		} else {
			merged[mergeIdx++] = A[rightIdx++];
		}
	}

	while (leftIdx <= mid) {
		merged[mergeIdx++] = A[leftIdx++];
	}

	while (rightIdx <= end) {
		merged[mergeIdx++] = A[rightIdx++];
	}

	for (int m = 0; m < (end - start + 1); m++) {
		A[start + m] = merged[m];
	}

	delete[] merged;
}

void mergesort(int* A, int length) {
	mergesort(A, 0, length - 1);
}

void mergesort(int* A, int start, int end) {
	if (end <= start) {
		return;
	}

	int mid = start + ((end - start + 1) / 2) - 1;
	mergesort(A, start, mid);
	mergesort(A, mid + 1, end);
	merge(A, start, mid, end);
}

void quicksort(int* A, int length) {
	quicksort(A, 0, length - 1);
}

void quicksort(int* A, int start, int end) {
	if (start >= end) {
		return;
	}

	int pivot = A[end];
	int pivotIdx = start;

	for (int i = start; i < end; i++) {
		if (A[i] <= pivot) {
			swap(A, i, pivotIdx);
			pivotIdx++;
		}
	}

	swap(A, pivotIdx, end);

	quicksort(A, start, pivotIdx - 1);
	quicksort(A, pivotIdx + 1, end);
}

void selectionsort(int* A, int length) {
	if (length == 1) {
		return;
	}

	for (int i = 0; i < length; i++) {
		// Determine index corresponding to min value in unsorted portion.
		int minIdx = i;
		int minVal = A[i];
		for (int j = i; j < length; j++) {
			if (A[j] < minVal) {
				minIdx = j;
				minVal = A[j];
			}
		}
		swap(A, i, minIdx);
	}
}
