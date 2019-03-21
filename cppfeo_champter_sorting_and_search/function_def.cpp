#include<iostream>
using namespace std;

void print_array(const int array[],const int size) {
	cout << "		Start printing array" << endl;
	for (int i = 0; i < size; ++i) {
		cout << array[i] << '\t';
	}
	cout << "		Finish printing array" << endl << endl;
}
void swap(int& a,int& b) {
	int c;
	c = a;
	a = b;
	b = c;
}
int find_min(const int array[],const int from, const int to) {
	int min_position = from;
	for (int i = from+1; i <= to; ++i) {
		if (array[i] < array[min_position]) { min_position = i;}
	}
	return min_position;
}
void selection_sort(int input_array[], const int size) {
	int next;
	for (next = 0; next < size - 1; ++next) {
		int min_position = find_min(input_array, next, size-1);
		swap(input_array[min_position], input_array[next]);
	}
}
void bubble_sort(int a[], const int size) {
	for (int i = 0; i < size; ++i) {
		for (int j = i + 1; j < size; ++j) {
			if (a[j] < a[i]) { swap(a[i], a[j]);}
		}
	} 
} 
void merge(int a[], int from, int mid, int to) {
	int n = to - from + 1; // size of the range to merged
	// merge both halves into a temporary array b 
	// we allocate the array dynamically because its size is only
	// known at run time
	int* b = new int[n];
	int i1 = from; // next element to consider in the first half
	int i2 = mid + 1; // next element to consider in the second half
	int j = 0; // next open position in b
	// as long as neither i1 or i2 is past the end
	// move the smaller element into b
	while (i1 <= mid && i2 <= to) {
		if (a[i1] < a[i2]) { b[j] = a[i1]; i1++; }
		else { b[j] = a[i2]; i2++; }
		j++;
	}
	// note that only one of the two while loops below is executed
	// copying any remaining entries of the first hall
	while (i1<=mid) {
		b[j] = a[i1];
		i1++;
		j++;
	}
	// copying any remainding entries of the second half
	while (i2 <= to) {
		b[j] = a[i2];
		i2++;
		j++;
	}
	// copying back from the temporary array
	for (j = 0; j < n; ++j) {
		a[from + j] = b[j];
	}
	// the temporary array is no longer needed
	delete [] b;
}

void merge_sort(int a[], int from, int to) {
	if (from == to) { return; }
	int mid = (from + to) / 2;
	// sort the first and the second half
	merge_sort(a, from, mid);
	merge_sort(a, mid + 1, to);
	merge(a, from, mid, to);
}
int binary_search(int a[], int from, int to, int value) {
	if (from >= to) { return -1; }
	int mid = (from + to) / 2;
	if (a[mid] == value) {
		return mid;
	}
	else if (a[mid] < value) {
		return binary_search(a, mid + 1, to, value);
	}
	else {
		return binary_search(a, from, mid-1, value);
	}
}