// kiem Tra Tam giac
#include<iostream>
using namespace std;
void nhap(int &a,int &b,int &c);
void xuat(int x);
int kiemTraTamGiac(int a,int b,int c);
int main()
{
	int a,b,c;
	nhap(a,b,c);
	int x=kiemTraTamGiac(a,b,c);
	xuat(x);
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
int kiemTraTamGiac(int a,int b,int c)
{
	if(a+b>c && a+c>b && b+c>a && a>0 && b>0 && c>0)
	{
		if(a==b && b==c)
		    return 0;
		else 
		{
		    if(a==b || b==c || a==c )
		        return 1;
		    else 
			    if(a*a==b*b+c*c || b*b==a*a+c*c || c*c==a*a+b*b )
		            return 2;  
				else
				    return 3;	  
	    }
	}
	else 
	    return 4;		
}	
