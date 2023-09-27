#include<iostream>
#include<math.h>
using namespace std;
int tinhThue(int x);
void xuat(int x);
void nhap(int &x);
int main()
{
	int x;
	nhap(x);
	int thue=tinhThue(x);
	xuat(thue);
	return 0;
}
void nhap(int &x)
{
	cin>>x;
}
int tinhThue(int x)
{
	int thue=0;
		if(x<=5000000)
			thue=250000;
		if(x>5000000 && x<=10000000)
			thue=thue+500000;
		if(x>10000000 && x<= 18000000)
		    thue=thue+1200000;	 
		if(x>18000000 && x<=32000000)
		    thue=thue+2800000; 
		if(x>32000000 && x<=52000000)
		    thue=thue+50000000;	   
		if(x>52000000 && x<= 65400000)  
		    thue=thue+6540000;  
	return thue;	    
}
void xuat(int x)
{
	cout<<x;
}
