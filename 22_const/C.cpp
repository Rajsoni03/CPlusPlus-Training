#include <iostream>
#include <string>
using namespace std;

class Student{
	public:
		enum class years : short {first = 1, second};
		enum class sem : short {first = 0, second, third, forth};

		string name;
		int age;
		years year;
		sem semester;

		Student(string name, int age) : name(name), age(age){
			year = years::first;
			semester = sem::first;
		}

		void info(){
			cout << this->name << endl;
			cout << this->age << endl;
			// cout << year << endl;
			// cout << semester << endl;
		}
};

int main(){
	Student s1("raj", 20);

	s1.info();

	return 0;
}