// nhap 2 so tim uoc chung lon nhat
#include <iostream>
using namespace std;
void nhap(int &a,int &b);
void xuat(int x,int y);
int UocChungMax(int a,int b);
int BoiChungMax(int a,int b);
int main()
{
	int a,b;
	nhap(a,b);
	int ucln=UocChungMax(a,b);
	int bcln=BoiChungMax(a,b);
	xuat(ucln,bcln);
	return 0;
}
void nhap(int &a,int &b)
{
	cin>>a>>b;
}
void xuat(int x,int y)
{
	cout<<x;
	cout<<y;
}
int UocChungMax(int a,int b)
{
	if(a==b)
	    return a;
    while ( a != b)
    {
        if (a > b)
            a = a - b;
        else
            b = b - a;
    }
    return a; 
}
int BoiChungMax(int a,int b)	
{
	int ucln=UocChungMax(a,b);
	int bcln=(a*b)/ucln;
	return bcln;
}
