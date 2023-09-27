// kiem tra n co phai la so hoan hao khong
#include<iostream>
using namespace std;
int kiemTraSoHoanHao(int n);
void nhap(int &n);
void xuat(int kt);
int main()
{
	int n;
	nhap(n);
	int kt=kiemTraSoHoanHao(n);
	xuat(kt);
}
int kiemTraSoHoanHao(int n)
{
	int sum=0;
    for(int i=1;i<=n/2;i++) 
	{
        if(n%i==0) 
            sum+=i;
    }
    if(sum==n) 
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
	    cout<<"n la so hoan hao";
	else
	    cout<<"n khong la so hoan hao";
}
	    
	    

	
	
	

