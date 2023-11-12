#pragma once

class Rectangle 
{
	private:
		int w_, h_;
		static int nTotalArea;
		static int nTotalNumber;

	public:
		Rectangle(int w, int h);
		Rectangle(Rectangle &rec);
		~Rectangle();
		static void PrintTotal();
};
