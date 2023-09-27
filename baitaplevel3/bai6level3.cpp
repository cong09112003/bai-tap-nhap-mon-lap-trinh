// dem so uoc cua n
#include<iostream>
#include<math.h>
using namespace std;
int kiemTraUoc(int n);
void nhap(int &n);
void xuat(int dem);
int main()
{
	int n;
	nhap(n);
	int dem=kiemTraUoc(n);
	xuat(dem);
	return 0;
}
int kiemTraUoc(int n)
{
	int dem=0;
	for ( int i = 1; i <= n; i++ )
	    if (n%i==0) 
	        dem=dem+1;
	return dem;    
} 
void nhap(int &n)
{
	cout<<"nhap so nguyen n :";
	cin>>n;
}
void xuat(int dem)
{
	cout<<"so cac uoc cua n la:"<< dem<< endl;
}
