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
	cout << "ÇëÊäÈë»ªÊÏ¶È :"<<endl;
	cin >> f;
	cout << deg(f) <<endl;
	return 0;
}