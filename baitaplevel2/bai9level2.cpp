#include<iostream>
#include<math.h>
using namespace std;
void nhap(int &a,int &b,int &c);
int kiemTra(int a,int b,int c);
void xuat(int kt);
int main()
{
	int a,b,c;
	nhap(a,b,c);
	int d;
	int kt= kiemTra(a,b,c);
	xuat(kt);
	return 0;
}
void nhap(int &a,int &b,int &c)
{
	cin>>a>>b>>c;
}
int kiemTra(int a,int b,int c)
{
	if(a==b && a==c)
	    return 1;
	if(a==b)
	{
		if(a>c)
		    return c;
		else
		    return a;    
	} 
	if(a==c)
	{
		if(a>b)
		    return b;
		else
		    return a;    
	}
	if(b==c)
	{
		if(c>a)
		    return a;
		else
		    return c;  
	}    
	if (((a>b)&&(a<c))||((a>c)&&(a<b)))
		return a;
	if(((b>a)&&(b<c))||(b>c)&&(b<a))
		    return b;
	    else 
	    	return c;
}		
void xuat(int kt)
{
	if(kt==1)
	    cout<<"khong co so nho nhi";
	else
	    cout<<"So Nho Nhi la:"<< kt << endl;
}
