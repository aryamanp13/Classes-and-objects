//Aryaman Pathak EntcA2 o31 exp11d class/object

#include <iostream>

using namespace std;

class volcuboid
{
	public:
    int l,b,h,v;
	void input()
	{
		cout<<"Enter length: "<<endl;
		cin>>l;
		cout<<"Enter breadth: "<<endl;
		cin>>b;
		cout<<"Enter height: "<<endl;
		cin>>h;
	}
	void calculate()
	{
		v = l*b*h;
	}
	void output()
	{
		cout<<"The volume of cuboid is: "<<v<<endl;
	}
};

int main()
{
	volcuboid info;
	info.input();
	info.calculate();
	info.output();
}

/*output
Enter length:
5
Enter breadth:
6
Enter height:
7
The volume of cuboid is: 210 */