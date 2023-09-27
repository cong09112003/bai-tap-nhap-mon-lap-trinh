// giai phuong trinh bac hai
#include<iostream>
#include<math.h>


using namespace std;
void nhap(int &a,int &b,int &c);
int XacDinhNghiem(int a,int b,int c);
void xuat(int x);
int main()
{
	int a,b,c;
	nhap(a,b,c);
	int kq=XacDinhNghiem(a,b,c);
	xuat(kq);
	return 0;
}
void nhap(int &a,int &b,int &c)
{
	cin>>a>>b>>c;
}	
int XacDinhNghiem(int a,int b,int c)
{
	if (a==0)
	{
		if (b==0)
		{
			if (c==0)
			    return 4;
			else 
			    return 0;
		}
		else
			return 1;
	}
	else
	{
	int denta;
	denta= b*b - 4*a*c;
	    if (denta < 0)
	        return 0;
	    else
	    {
		    if (denta == 0)
		    {
			    return 3;
		    }	
		    else
		    {
			    return 2;
		    }
	    }
	}
}	
void xuat(int x)
{
	cout<<x;
}	
