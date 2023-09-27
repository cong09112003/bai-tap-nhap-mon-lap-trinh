#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;
void nhap(float &x);
float lamtron(float x);
void xuat (int kq);
int main()
{
	float x;
	cout<<"nhap x="<<"\n";
	nhap(x);
	int kq=lamtron(x);
	xuat (kq);
	return 0;
}
void nhap(float &x)
{
	cin>>x;
}
float lamtron(float x)
{
	int d = (int)x;
	float real = x - d ;
	if(real > 0)
	{
		return d;
	}
	else 
	{
	return d=d-1;
	}
}
void xuat (int kq)	
{
	cout<<kq;
}	
	
		
	
	

	
