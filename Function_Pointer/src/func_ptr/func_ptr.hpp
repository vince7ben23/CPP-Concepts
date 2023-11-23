#pragma once
int Compare(const void*, const void*);
int ReverseCompare(const void*, const void*);
template <size_t N> 
void func_pass_arr_ref(int(&arr)[N]);
#include "func_pass_arr_ref.tpp"

