// 
#include<iostream>


using namespace std;
bool kiemTra(int d,int m,int y);
void nhap(int &d,int &m,int &y);
int tinhSoNgayTrongThang(int month,int year);
bool kiemTraNamNhuan(int year);
int timQuy(int m);
void xuat(int x);
int ngaytrongthang(int m,int y);
void NextDay(int d,int m,int y);
void xuatHet(int d1,int m1,int y1);
void BeforeDay(int d,int m,int y);
void xuatX(bool k);
int main()
{
	int d,m,y;
	nhap(d,m,y);
	bool check=kiemTra(d,m,y);
	xuatX(check);
	if(kiemTra(d,m,y)==true)
	{
	int quy=timQuy(m);
	xuat(quy);
	int so=ngaytrongthang(m,y);
	xuat(so);
	NextDay(d,m,y);
	BeforeDay(d,m,y);
	}
	return 0;
}	
bool kiemTraNamNhuan(int year)
{
    if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
    {
    	return true;
    }
	return false;
}
int tinhSoNgayTrongThang(int month,int year)
{
	int dayofmonth;
	if (month==1 || month==3 || month==5|| month==7 || month==8 || month==10 || month==12)
	    dayofmonth=31;
	else
	{
	    if (month==4 || month==6 || month==9 || month == 11)
            dayofmonth=30;
	    else
		{
		    if( kiemTraNamNhuan(year)==true )
		        dayofmonth=29;
		    else
		        dayofmonth=28;
		}
    }
	return dayofmonth;
} 
bool kiemTra(int d,int m,int y)
{
	if(y<0 || m<0 || m>12 || d<0 || d>tinhSoNgayTrongThang(m,y))
	    return false;
	else    
	    return true;    
}	
void nhap(int &d,int &m,int &y)
{
	cin>>d>>m>>y;
}
void xuat(int x)
{
	cout<<x<<endl;
}
int timQuy(int m)
{
	if(m==1 || m==2 || m==3)
	return 1;
	if(m==4||m==5||m==6)
	return 2;
	if(m==7||m==8||m==9)
	return 3;
	if(m==10||m==11||m==12)
	return 4;
}	
int ngaytrongthang(int m,int y)
{
	return tinhSoNgayTrongThang(m,y);
}
void NextDay(int d,int m,int y)
{
	int d1=d;
	int m1=m;
	int y1=y;
	if(d1 < tinhSoNgayTrongThang(m1,y1))
	    d1++;
	else                 
	{
	    d1=1;          
		if(m1 == 12)     
		{
			m1=1;
			y1++;  
		}
		else
		    m1++;    
	}
	xuatHet(d1,m1,y1);    
}
void xuatHet(int d1,int m1,int y1)
{
	cout<<d1<<" "<<m1<<" "<<y1<<endl;
}
void BeforeDay(int d,int m,int y)
{
	int d1=d;
	int m1=m;
	int y1=y;
	if(d1 > 1)
	    d1=d1-1;
	else                 
	{
	    d1=tinhSoNgayTrongThang(m,y);          
		if(m1 == 1)     
		{
			m1=12;
			y1--;  
		}
		else
		    m1--;    
	}
	xuatHet(d1,m1,y1);
}	
void xuatX(bool k)
{
	if(k==false)
	cout<<"KHONG HOP LE"<<endl;
	else
	cout<<"HOP LE"<<endl;
}	
