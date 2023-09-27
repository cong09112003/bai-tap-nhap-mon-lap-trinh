// tim chu so lon nhat cua n
#include<iostream>
using namespace std;
int timChuSoMax(int n);
void nhap(int &n);
void xuat(int max);
int main()
{
	int n;
	nhap(n);
	int Max=timChuSoMax(n);
	xuat(Max);
}
int timChuSoMax(int n)
{
	int Max=0;
	while(n>0)
	{
		int x=n%10;
		n/=10;
		if (x > Max)
		    Max=x;		
	}
	return Max;	
}
void nhap(int &n)
{
	cout<<"nhap so nguyen n la:";
	cin>>n;
}
void xuat(int max)
{
	cout<<"so lon nhat cua chu so n la:"<< max << endl;
}
	    
	    

	
	
	

