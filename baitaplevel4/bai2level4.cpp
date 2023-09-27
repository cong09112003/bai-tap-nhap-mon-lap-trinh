// kiem tra n co phai la so nguyen to khong
#include<iostream>
using namespace std;
int kiemTraSoNguyenTo(int n);
void nhap(int &n);
void xuat(int kt);
int main()
{
	int n;
	nhap(n);
	int kt=kiemTraSoNguyenTo(n);
	xuat(kt);
}
int kiemTraSoNguyenTo(int n)
{
	if ( n >= 2 )
	{
	    for(int i = 2; i < n ; i++)
	    {
		    if (n%i==0)
			    return 1;
	    }
		return 0;		 
    }
    else
	    return 1;		    		   	    	
}
void nhap(int &n)
{
	cout<<"nhap so nguyen n la:";
	cin>>n;
}
void xuat(int kt)
{
	if (kt == 0)
	    cout<<"n la so nguyen to";
	if (kt==1)
	    cout<<"n khong la so nguyen to";
}
	    
	    

	
	
	

