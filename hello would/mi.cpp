#include <iostream>
using namespace std;
int mi(int x,int y)
{
	int result=1;
	if(y>=1)
	{
		result=x*mi(x,y-1);
	}
	return result;
}
int main()
{
	int x,y;
	cout << "please input x and y :"<<endl;
	cin >>x >>y;
	cout << mi(x,y)<< endl;
	return 0 ;
}
