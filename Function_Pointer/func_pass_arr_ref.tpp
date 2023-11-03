#include <iostream>

template <size_t N>
void func_pass_arr_ref(int(&arr)[N]) {
	// std::cout << sizeof(arr)/sizeof(arr[0]) << std::endl;
	for (int ele : arr) {
		std::cout << ele << ", ";
	}
}