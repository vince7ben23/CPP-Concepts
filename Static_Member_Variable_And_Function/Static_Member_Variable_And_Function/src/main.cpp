#include "rectangle/rectangle.hpp"

Rectangle intendCallCopyConstructor()
{
	Rectangle local_rec(10, 10);
	return local_rec;
}

int main() 
{
	Rectangle rec1(2, 5), rec2(1, 5);
	Rectangle rec3 = rec1; // call copy constructor
	intendCallCopyConstructor(); // call copy constructor implicitly
	Rectangle::PrintTotal();

	return 0;
}
