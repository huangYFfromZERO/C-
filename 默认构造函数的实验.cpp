//C++ primer p238
#include<iostream>
using namespace std;
class a
{
	int c;
};
class b
{
	int c;
	public:
	b(int dd):c(dd){}
	b(){}; //= default;
};
int main()
{
	a temp1;
	b temp2;
}
