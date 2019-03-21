/*
	To measure the running time of a function, get the current time
	immediately before and after the function call
	int now = time(0);
	int before = time(0);
	selection_sort(value,size);
	int after = time(0);
	cout << "Elapsed time = " << after - before << "seconds" << endl;

	The merge sort algorithm sorts an array by cutting the array in half,
	recursively sorting each half, then merging the sorted halves
	it is an easy matter to merge the two sorted arrays into a sorted array,
	simply by taking a new element from either the first or the second subarray and 
	choosing the smaller of the elements each other 

	the quick sort page13 of champter recursion 

	LIBRARY FUNCTION FOR SORTING AND BINARY SEARCH
	#include<algorithm>
	sort(a,a+size);
	here size is the size of the array 
	int a[5] = {60,47,70,39,6};
	sort(a,a+5); // now a contains 6,39,47,60,70
	for a vector 
	sort(v.begin(),v.end());
	v.begin() and v.end() are iterators
	then if you have a sorted array or vector
	you may apply binary search
	binary_search(a,a+size,value); // return bool instead of position
	binary_search(v.begin(),v.end(),value);
*/