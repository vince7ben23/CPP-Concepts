#include "func_ptr.hpp"

int Compare(const void* elem1, const void* elem2) {
	int *p1, *p2;
	p1 = (int*)elem1;
	p2 = (int*)elem2;
	if (*p1 <= *p2)
		return -1;
	if (*p1 > *p2)
		return 1;
	return 0;
}

int ReverseCompare(const void* elem1, const void* elem2) {
	int* p1, * p2;
	p1 = (int*)elem1;
	p2 = (int*)elem2;
	if (*p1 <= *p2)
		return 1;
	if (*p1 > *p2)
		return -1;
	return 0;
}