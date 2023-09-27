//nhap n xuat ra n so, xuat ra n so dau tien trong day Fibonacci
#include<iostream>
using namespace std;
void xuat(int n);
void nhap(int &n);
int main()
{
	int n;
	nhap(n);
	xuat(n);
	return 0;
}
void nhap(int &n)
{
	cout<<"nhap so n la"; 
	cin>>n;
}
void xuat(int n)
{
	int i=1;           
	int a0=0;
	int a1=1;
	int a=0;
	if ( n > 0)
	{	 
	    while(i <= n )  
	    {   
		    a0=a1;    
		    a1=a;    
		    a=a0+a1;
		    cout<<a<<" ";  
		    i++;            
 	    }
	}        
	else
	    cout<<"khong hop le";    
}			
