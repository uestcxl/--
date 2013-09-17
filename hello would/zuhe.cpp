#include <iostream>
using namespace std;
int def(int m,int n)
{
	int a=1,b=1;
	for(int i=1;i<=n;i++)
	{
		a=a*m;
		b=b*i;
		m--;
	}
	return a/b;
}
int main()
{
	int m,n;
	cout << "请输入组合Cmn(m>n)中的m和n:" <<endl;
	cin >>m >>n;
	cout << def(m,n);
	return 0;
}