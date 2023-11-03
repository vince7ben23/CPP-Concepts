#include <iostream>
#include <string>
#include <math.h>
#include <sstream>
using namespace std;

class Student 
{
	private:
		string name_; 
		int age_; 
		string num_; 
		const int *grade_;

		int get_avg_score() {
			int sum = 0;
			for (int i = 0; i < 4; i++) {
				sum += grade_[i];
			}
			return sum / 4;
		}

	public:
		
		Student(string name, int age, string num, const int *grade): \
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
	string input_str, token, name, school_num;
	int age;
	int* grade = new int[4];
	stringstream ss;
	cin >> input_str;
	ss << input_str;
	
	getline(ss, token, ',');
	name = token;
	getline(ss, token, ',');
	age = stoi(token);
	getline(ss, token, ',');
	school_num = token;
	for (int i = 0; i < 4; i++) {
		getline(ss, token, ',');
		grade[i] = stoi(token);
	}
	
	
	Student s(name, age, school_num, grade);
	s.print_student_info();
	delete[] grade;
	return 0;
}