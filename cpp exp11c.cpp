//Aryaman Pathak EntcA2 o31 exp11b class/object

#include <iostream>

using namespace std;

class Student
{
	public:
	void studentyear();
};
void Student::studentyear()
{
	cout<<"I got 8.3 gpa last year!"<<endl;
}
int main()
{
	Student info;
	info.studentyear();
}

/*output
I got 8.3 gpa last year! */