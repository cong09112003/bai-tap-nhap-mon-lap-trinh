#include<iostream>
#include<math.h>
using namespace std;
void nhap(int &d,int &m,int &y);
void xuat(int x);
bool namNhuan(int y);
int dayInMonth(int m,int y);
void NextDay(int &d,int &m,int &y);
bool CheckHL(int d,int m,int y);
int main()
{
	int d,m,y;
	nhap(d,m,y);
	NextDay(d,m,y);
	xuat(d);
	return 0;
}	
void nhap(int &d,int &m,int &y)
{
	cin>>d>>m>>y;
}
void xuat(int x)
{
	cout<<x;
}	
bool namNhuan(int y)
{
	if(y%4==0 && y%100!=0 || y%400==0)
	    return true;
	return false;
}	
int dayInMonth(int m,int y)
{
	if (m==1 || m==3 || m==5|| m==7 || m==8 || m==10 || m==12)
	    return 31;
	else
	{
	    if (m==4 || m==6 || m==9 || m== 11)
            return 30;
	    else
		{
		    if( namNhuan(y)==true )
		        return 29;
		    else
		        return 28;
		}
    }
}
void NextDay(int &d,int &m,int &y)
{
	if(CheckHL(d,m,y)==false)
	    d=0;
	else
	{
		if(d < dayInMonth(m,y))
	        d++;
	    else                 
	    {
		    d=1;          
		    if(m == 12)     
		    {
			    m=1;
			    y++;  
		    }
		    else
		        m++;    
	    }    
	} 
}
bool CheckHL(int d,int m,int y)
{
	if(y <= 0 || m < 1 || m > 12 || d < 1 || d > dayInMonth(m,y) )
	    return false;
	return true;
}	
