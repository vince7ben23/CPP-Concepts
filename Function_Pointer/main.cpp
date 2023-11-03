#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "func_ptr.hpp"


int main() {
	int arr[] = { 10, 15, -1, 3, 8, 30, -1 };
	int (*fp_arr[]) (const void* elem1, const void* elem2) = { Compare, ReverseCompare };

	/*for (int i = 0; i < std::size(fp_arr); i++) {
		qsort(arr, std::size(arr), sizeof(int), fp_arr[i]);
		func_pass_arr_ref(arr);
		std::cout << std::endl;
	}*/

	for (int (*fp)(const void* elem1, const void* elem2) : fp_arr) {
		qsort(arr, std::size(arr), sizeof(int), fp);
		func_pass_arr_ref(arr);
		std::cout << std::endl;
	}

	return 0;
}