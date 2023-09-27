#include <iostream>
#include<math.h>
#include<stdio.h>
using namespace std;
int timSoNgay(int m,int y,int &day);
void nhap(int &m,int &y );
void xuat(int kt, int day);
int main()
{
	int m,y;
	nhap(m,y);
	int day;
	int kt= timSoNgay(m,y,day);
	xuat(kt,day);
}
void nhap(int &m,int &y)	
{
	cout<<"nhap thang :"<<"\n";
	cout<<"nhap nam :"<<"\n";	
	cin>>m>>y;
}
int timSoNgay(int m,int y,int &day)
{
	if (m==2)
	{
		if( ( (y%100!=0)&&(y%4==0) )||(y%400==0) )
			day=29;
		else 
			day=28;
    }
    else 
    {
    	if(m<8)
    	{
    		if (m%2!=0)
    			day=31;
			else
				day=30;
		}
		else
		{
			if (m%2==0)
				day=31;
			else
				day=30;
		}
    }
    return day; 
}
void xuat(int kt, int day)
{
	cout << "so ngay trong thang la:" << day << endl;
}
	
	
