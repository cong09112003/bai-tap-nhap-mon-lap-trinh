//nhap n xuat ra n so, xuat ra n so dau tien trong day Fibonacci
#include<iostream>
using namespace std;
void xuat(long long n);
long long  timSo(int x);
void nhap(int &n);
int main()
{
	int n;
	nhap(n);
	long long x=timSo(n);
	xuat(x);
	return 0;
}
void nhap(int &n)
{
	cin>>n;
}
long long timSo(int n)
{
	long long i=1;           
	long long a0=0;
	long long a1=1;
	long long a=0;	 
	while(i <= n )  
	{   
		    a0=a1;    
		    a1=a;    
		    a=a0+a1; 
		    i++;            
 	}
	return a; 
}	
void xuat(long long x)
{
	cout<<x;
}		
