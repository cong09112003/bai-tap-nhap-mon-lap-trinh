#include<iostream>
using namespace std;
void xuat(int a,int b);
int main()
{
    int a = 6;
    int b = a++;
    xuat(a,b);
    return 0;
}
void xuat(int a,int b)
{
	cout<<a<<b;
}
	
