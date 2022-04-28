#include <iostream>
#include<vector>
#include<chrono>
#include<iomanip>

using std::vector;
using std::swap;
using std::cout;
using std::endl;
using std::setprecision;

bool ascendingCompare(int a, int b) {
	return a < b;
}

bool descendingCompare(int a, int b) {
	return a > b;
}

// Testing performance using function pointer 
void customSort(vector<int>& numbers, bool(*compareFuncPtr)(int, int)) {
	for (int startIndex = 0; startIndex < numbers.size(); startIndex++) {
		int bestIndex = startIndex;
		for (int currentIndex = startIndex + 1; currentIndex < numbers.size(); currentIndex++) {
			if (compareFuncPtr(numbers[currentIndex], numbers[bestIndex]))
				bestIndex = currentIndex;
		}
		swap(numbers[startIndex], numbers[bestIndex]);
	}
}

// Testing performance without function pointer - using reference
void descendingSort(vector<int>& numbers) {
	for (int startIndex = 0; startIndex < numbers.size(); startIndex++) {
		int bestIndex = startIndex;
		for (int currentIndex = startIndex + 1; currentIndex < numbers.size(); currentIndex++) {
			if (descendingCompare(numbers[currentIndex], numbers[bestIndex]))
				bestIndex = currentIndex;
		}
		swap(numbers[startIndex], numbers[bestIndex]);
	}
}

// Testing performance without function pointer without reference
void ascendingSort(vector<int>& numbers) {
	for (int startIndex = 0; startIndex < numbers.size(); startIndex++) {
		int bestIndex = startIndex;
		for (int currentIndex = startIndex + 1; currentIndex < numbers.size(); currentIndex++) {
			if (ascendingCompare(numbers[currentIndex], numbers[bestIndex]))
				bestIndex = currentIndex;
		}
		swap(numbers[startIndex], numbers[bestIndex]);
	}
}

void printNumber(vector<int> &numbers) {
	for (int i = 0; i < numbers.size(); i++) {
		cout << numbers[i] << " ";
	}
}

int main() {
	vector<int> numbers = { 5,2,7,1,3 };

	//Testing with function pointer & reference
	auto start1 = std::chrono::high_resolution_clock::now();
	bool(*funcPtr)(int, int) = ascendingCompare;
	customSort(numbers, funcPtr);
	auto stop1 = std::chrono::high_resolution_clock::now();
	double duration1 = std::chrono::duration_cast<std::chrono::nanoseconds>(stop1 - start1).count();
	duration1 *= 1e-6;
	cout << "Custom sort = ";
	printNumber(numbers);
	cout << endl << "Duration Taken (With function pointer) = " << duration1 << setprecision(7) << " Second" << endl;

	//Testing without function pointer & without reference
	auto start2 = std::chrono::high_resolution_clock::now();
	ascendingSort(numbers);
	auto stop2 = std::chrono::high_resolution_clock::now();
	double duration2 = std::chrono::duration_cast<std::chrono::nanoseconds>(stop2 - start2).count();
	duration2 *= 1e-6;
	cout << endl << "Ascending Sort = ";
	printNumber(numbers);
	cout << endl << "Duration Taken (Without function pointer) = " << duration2 << setprecision(7) << " Second" << endl;
	
}

/*
As conclusion, without function pointer they program will run faster,
but using function pointer will take lower memory, since it's using
heap memory and let the function to point to others
*/
