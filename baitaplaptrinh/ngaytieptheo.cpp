// Ngay tiep theo 
#include<iostream>
#include<string.h>
using namespace std;
int A[13]={31,31,28,31,30,31,30,31,31,30,31,30,31};
bool kiemTraNamNhuan(int year);
int hopLe(int day,int month,int year);
void tinhNgayTiepTheo(int &day,int &month,int &year);
void nhap(int &day,int &month,int &year);
void xuat(int day);
int main()
{
	int day,month,year;
	nhap(day,month,year);
	if(hopLe(day,month,year))
	{
	    tinhNgayTiepTheo(day,month,year);
	    xuat(day);
	}
	else
	cout<<"0"; 
}
bool kiemTraNamNhuan(int year)
{
	if(year%4==0 && year%100!=0 || year%400==0)
	    return true;
	return false;
}
int hopLe(int day,int month,int year)
{
    if(kiemTraNamNhuan(year)==true)
	    A[2]++;
	if(year <= 0 || month < 1 || month > 12 || day < 1 || day > A[month] )
	    return 0;
	return 1;
}
void tinhNgayTiepTheo(int &day,int &month,int &year)
{
	if(day<A[month])
	    day++;
	else                 // day = ngay cuoi cua thang 
	{
		day=1;          // day = ngay 1
		if(month==12)     // day=ngay cuoi cung cua nam
		{
			month=1; // thang =1
			year++;   // nam them 1
		}
		else
		month++;    //  thang khong bang thang 12 thi chi cong nam thoi
	}    
}
void nhap(int &day,int &month,int &year)
{
    cout<<"nhap ngay:";
	cin>>day;
	cout<<"nhap thang";
	cin>>month;
	cout<<"nhap nam:";
	cin>>year;
}
void xuat(int day)
{
    cout<<day;
}			

