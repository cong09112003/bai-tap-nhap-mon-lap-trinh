// tim so dao nguoc cua n
#include<iostream>
#include<math.h>
using namespace std;
int timSoNguocLai(int n);
void nhap(int &n);
void xuat(int so);
int main()
{
	int n;
	nhap(n);
	int so=timSoNguocLai(n);
	xuat(so);
	return 0;
}
int timSoNguocLai(int n)
{
	int so=0;
	while( n > 0)
	{
		int a=n%10;                       
		n/=10;                        
		so=so*10+a;
    }	 
} 
void nhap(int &n)
{
	cout<<"nhap so nguyen n :";
	cin>>n;
}
void xuat(int so)
{
	cout<<"so nguoc lai cua n la:"<<  so << endl;
}
