#include<iostream>
#include<math.h>
using namespace std;
void nhap(float &a,float &b,float &c);
int timNghiem(float a,float b,float c,float &x1,float &x2);
void xuat(int kt,float x1,float x2);
int main()
{
	float a,b,c;
	nhap(a,b,c);
	float x1,x2;
	int kt= timNghiem(a,b,c,x1,x2);
	xuat(kt,x1,x2);
	return 0;
}
void nhap(float &a,float &b,float &c)
{
	cout<<"nhap a:""\n";
	cout<<"nhap b:""\n";
	cout<<"nhap c:""\n";
	cin>>a>>b>>c;
}
int timNghiem(float a,float b,float c,float &x1,float &x2)
{		
	if (a==0)
	{
		if (b==0)
		{
			if (c==0)
			    return 1;
			else 
			    return 2;
		}
		else
		{
			x1 = -(float)c/b;
			return 3;
		}
	}
	else
	{
	int denta;
	denta= b*b - 4*a*c;
	    if (denta < 0)
	        return 2;
	    else
	    {
		    if (denta == 0)
		    {
			    x1 = - (float)b/(2*a);
			    return 5;
		    }	
		    else
		    {
			    x1= (-b+sqrt(denta))/(2*a);
			    x2= (-b-sqrt(denta))/(2*a);
			    return 6;
		    }
	    }
	}
}
void xuat(int kt,float x1,float x2)
{
	if (kt==1)
	cout<<"phuong trinh vo so nghiem";
	if (kt==2)
	cout<<"phuong trinh vo nghiem";
	if (kt==3)
	cout<<"nghiem cua phuong trinh la:"<< x1 << endl;
	if (kt==5)
	cout<<"phuong trinh co nghiem kep x1 = x2 la:"<< x1 <<endl;
	if (kt==6)
	cout<<"phuong trinh co 2 nghiem phan biet lan luot la:"<< x1 << "va" << x2 << endl;
}	
	
	
	
	
				
			
			
