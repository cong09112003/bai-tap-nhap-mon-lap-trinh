// nhap ngay thang nam, tinh khoang cach ngay vua nhap voi ngay dau tien cua nam moi
#include<iostream>
#include<math.h>
using namespace std;
bool kiemTraNamNhuan(int year);
int tinhSoNgayTrongThang(int month,int year);
int tinhSTTNgayTrongNam(int day,int month,int year);
int tinhKhoangCachVoiNamMoi(int day,int month,int year);
void nhap(int &day,int &month,int &year);
void xuat(int songayCT);
int main()
{
	int day,month,year;
	nhap(day,month,year);
	int songayCT= tinhKhoangCachVoiNamMoi(day,month,year);
	xuat(songayCT);
	return 0;
}
void nhap(int &day,int &month,int &year)
{
	do{
	cout<<"nhap ngay:";
	cin>>day;
	cout<<"nhap thang:";
	cin>>month;
	cout<<"nhap nam:";
	cin>>year;
	}while(day>31 || day<1 || month>12 || month<1 || year<0 );
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
int tinhSTTNgayTrongNam(int day,int month,int year)
{
	int thutungay=day;
	for(int i=1;i<month;i++)
	{
		thutungay = thutungay + tinhSoNgayTrongThang(i,year); 
	}
	return thutungay;
}
int tinhKhoangCachVoiNamMoi(int day,int month,int year)
{
	int songayCT;
	if (kiemTraNamNhuan(year)==true)
	    songayCT= 367 - tinhSTTNgayTrongNam(day,month,year);
	else
	    songayCT= 366 - tinhSTTNgayTrongNam(day,month,year);
	return songayCT;  
}
void xuat(int songayCT)
{
	cout<<"khoang cach ngay thang nam vua nhap voi ngay dau tien cua nam moi:"<< songayCT <<"ngay"<<endl;
}
	



 
