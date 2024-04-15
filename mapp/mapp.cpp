// mapp.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <map>
using namespace std;
class Student {
	string name;
	
public:
	Student(string name) {
		this->name = name;
		

	}
	bool operator<(const Student& other) const {
		return name < other.name;
	}
	bool operator==(const Student& other) const {
		return name == other.name;
	}
};
int main()
{
	map<Student, int> st;
	st.insert(make_pair("Andrey", 5));
	st.insert(make_pair("Vanya", 7));
	st.insert(make_pair("Sanya", 9));
	st.insert(make_pair("Kolya", 2));
	st.insert(make_pair("Vasya", 1));
	string name;
	cout << "Enter a name of student: " << endl;
	cin >> name;
	map<Student, int>::iterator it = st.find(name);
	
	cout << "Average mark of this student: " << st.find(name)->second << endl;

}
