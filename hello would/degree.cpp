#include <iostream>
using namespace std; 
int deg(int f)
{
	int c;
	c=(f-32)*5/9;
	return c;
}
int main()
{
	int f;
	cout << "�����뻪�϶� :"<<endl;
	cin >> f;
	cout << deg(f) <<endl;
	return 0;
}