#include <iostream>
#include <math.h>

using namespace std;

class Student
{
private:
	char *name_;
	int age_;
	char *num_;
	int *grade_;

	int get_avg_score() {
		int sum = 0;
		for (int i = 0; i < 4; i++) {
			sum += grade_[i];
		}
		return sum / 4;
	}

public:

	Student(char *name, int age, char *num, int* grade) : \
		name_(name), age_(age), num_(num), grade_(grade) \
	{}

	/*
	Student(string name, int age, string num, int* grade) {
		name_ = name;
		age_ = age;
		num_ = num;
		grade_ = grade;
	}
	*/

	void print_student_info() {
		cout << name_ << "," << age_ << "," << num_ << "," << get_avg_score();
	}
};

int main() {
	char *name = new char[20];
	char *school_num = new char[20];
	int age;
	int *grade = new int[4];
	char store_comma;
	
	cin.getline(name, 20, ',');
	cin >> age >> store_comma;
	cin.getline(school_num, 20, ',');
	for (int i = 0; i < 4; i++) {
		if (i == 3) cin >> grade[i];
		else cin >> grade[i] >> store_comma;
	}

	
	Student s(name, age, school_num, grade);
	s.print_student_info();
	delete[] name;
	delete[] school_num;
	delete[] grade;
	
	return 0;
}