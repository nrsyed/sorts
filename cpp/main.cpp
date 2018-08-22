#include <algorithm>
#include <iostream>
#include <cstdlib>
#include "sort.hpp"

void printArray(int* A, int N) {
	for (int i = 0; i < N; i++) {
		std::cout << A[i] << " ";
	}
	std::cout << std::endl;
}

void linearArray(int* A, int N) {
	// Generate an array of linearly increasing values, starting with 1.
	for (int i = 0; i < N; i++) {
		A[i] = i + 1;
	}
}

int main(int argc, char* argv[]) {
	int N, method;
	std::cout << "Enter number of integers: ";
	std:: cin >> N;
	std::string sortMsg = "Enter sort method (0=bubble, 1=insertion, 2=merge,"
		" 3=quick, 4=selection): ";
	std::cout << sortMsg;
	std::cin >> method;

	// Initialize, then randomize an array of integers.
	int* A = new int[N];
	linearArray(A, N);
	srand(time(0));
	std::random_shuffle(&A[0], &A[N-1]);

	printArray(A, N);

	switch (method) {
		case 0: bubblesort(A, N); break;
		case 1: insertionsort(A, N); break;
		case 2: mergesort(A, N); break;
		case 3: quicksort(A, N); break;
		case 4: selectionsort(A, N); break;
	}
	printArray(A, N);

	delete[] A;
	return 0;
}
