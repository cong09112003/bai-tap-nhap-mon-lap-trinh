//
#include<iostream>
#include<math.h>
using namespace std;
void nhap(int &a,int &b,int &c);
void xuat(int x);
int soCap(int a,int b,int c);

int main()
{
	int a,b,c;
	nhap(a,b,c);
	int k=soCap(a,b,c);
	xuat(k);
	return 0;
}	
void nhap(int &a,int &b,int &c)
{
	cin>>a>>b>>c;
}	
void xuat(int x)
{
	cout<<x;
}
int soCap(int a,int b,int c)
{
	int x=1;
	int dem=0;
	if(a==0||b==0|| c==0)
	    return -1;
	while(x<c && c>=0)
	{
		double y=(double) (c-a*x)/b;
		if(y == (int) y && y > 0)
		    dem++;
		x++;    
	}
	return dem;
}
