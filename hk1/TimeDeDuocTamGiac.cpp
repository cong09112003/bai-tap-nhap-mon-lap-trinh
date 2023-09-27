// Bai cho a,b,c tim Max trong 3 so roi so 
#include<iostream>
#include<cmath>
using namespace std;
void nhap(int &a, int &b, int &c);
void xuat(int kq);
int time(int a, int b, int c);
int main()
{
	int a,b,c;
	nhap(a,b,c);
	int kq = time(a,b,c);
	xuat(kq);
	return 0;
}

int time(int a, int b, int c)
{
	int dem =0;
	int LN = max(max(a,b),c);
	if( a + b > c && a + c > b && b + c > a)
		return 0;
	if(LN == c)
		while(a + b <= c || a + c <= b || b + c <= a)
		{
			c--;
			dem++;
		}
	if(LN == b)
		while(a + b <= c || a + c <= b || b + c <= a)
		{
			b--;
			dem++;
		}
	if(LN == a)
		while(a + b <= c || a + c <= b || b + c <= a)
		{
			a--;
			dem++;
		}
	return dem;
}
void nhap(int &a, int &b, int &c)
{
	cin>>a>>b>>c;
}
void xuat(int kq)
{
	cout<<kq;
}
