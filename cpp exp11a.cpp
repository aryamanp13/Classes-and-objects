//Aryaman Pathak EntcA2 o31 exp11a class/object

#include <iostream>

using namespace std;

class Student{
	public:
	string name;
	string branch;
	string division;
	string year;
	float result;
};
int main()
{
	Student s1,s2;
	s1.name = "Aryaman Pathak";
	s1.branch ="EnTC";
	s1.division = "A";
	s1.year = "Second";
	s1.result = 8.3;
	
	cout<<"Student information: "<<endl;
	cout<<s1.name<<endl;
	cout<<s1.branch<<endl;
	cout<<s1.division<<endl;
	cout<<s1.year<<endl;
	cout<<s1.result<<endl;
	
	s2.name = "Siya Dhoot";
	s2.branch ="AIML";
	s2.division = "B";
	s2.year = "first";
	s2.result = 8.5;
	
	cout<<"Student information: "<<endl;
	cout<<s2.name<<endl;
	cout<<s2.branch<<endl;
	cout<<s2.division<<endl;
	cout<<s2.year<<endl;
	cout<<s2.result<<endl;
	
}
/*output
Student information:
Aryaman Pathak
EnTC
A
Second
8.3
Student information:
Siya Dhoot
AIML
B
first
8.5 */