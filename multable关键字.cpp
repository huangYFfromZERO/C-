#include<iostream>
using namespace std;
class dd
{
	public:
	mutable int a;
	//int a;
	dd():a(10){} 
};
int main()
{
	const dd a2;
	a2.a++;
	cout<<a2.a<<endl;
} 
