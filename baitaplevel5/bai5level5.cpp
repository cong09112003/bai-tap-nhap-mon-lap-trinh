// liet ke cac so hoan hao nho hon n
#include<iostream>
#include<math.h>
using namespace std;
int kiemTraSoHoanHao(int x);
void nhap(int &n);
void xuat(int n);
int main()
{
	int n;
	nhap(n);
	xuat(n);
}
int kiemTraSoHoanHao(int x)
{
	int sum=0;
    for(int i=1; i < x; i++){
        if( x%i==0 )
            sum += i;
    }
    if ( sum==x )
        return 1; 
    else    
        return 0; 
}		
void nhap(int &n)
{
	do{
	cout<<"nhap so nguyen n la:";
	cin>>n;
    }
    while(n<6);
}
void xuat(int n)
{
	cout<<"liet ke cac so hoan hao nho hon n la:";
	for(int i=1; i < n ; i++){
	    if (kiemTraSoHoanHao(i)==1)
	        cout<<i<<" ";
	}
}
