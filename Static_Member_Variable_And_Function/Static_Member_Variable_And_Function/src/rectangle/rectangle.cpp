#include <iostream>
#include "rectangle.hpp"

int Rectangle::nTotalNumber = 0;
int Rectangle::nTotalArea = 0;

Rectangle::Rectangle(int w, int h)
{
	std::cout << "constructor called" << std::endl;
	w_ = w;
	h_ = h;
	nTotalNumber++;
	nTotalArea += w * h;
}

Rectangle::Rectangle(Rectangle &rec)
{
	std::cout << "copy constructor called" << std::endl;
	w_ = rec.w_;
	h_ = rec.h_;
	nTotalNumber++;
	nTotalArea += w_ * h_;
}

Rectangle::~Rectangle() 
{
	std::cout << "destructor called" << std::endl;
	nTotalNumber--;
	nTotalArea -= w_ * h_;
}

void Rectangle::PrintTotal() 
{
	std::cout << nTotalNumber << ", " << nTotalArea << std::endl;
}