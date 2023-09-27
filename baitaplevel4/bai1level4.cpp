// kiem tra n co phai la so chinh phuong khong
#include<iostream>
using namespace std;
int kiemTraSoChinhPhuong(int n);
void nhap(int &n);
void xuat(int kt);
int main()
{
	int n;
	nhap(n);
	int kt=kiemTraSoChinhPhuong(n);
	xuat(kt);
	return 0;
}
int kiemTraSoChinhPhuong(int n)
{
    for(int i=0; i*i <= n ; i++)
        if(i*i == n)
            return 0;
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
	    cout<<"n la so chinh phuong";
	else
	    cout<<"n khong la so chinh phuong";
}
	    
	    

	
	
	

