// nhap vao hai bo ngay thang nam. tinh khoang cach hai thoi diem vua nhap
#include<iostream>
#include<math.h>
using namespace std;
bool kiemTraNamNhuan(int year);
int tinhSoNgayTrongThang(int month,int year);
int tinhSTTNgayTrongNam(int day,int month,int year);
int tinhSoNgayQuaNam(int day,int month,int year);
int tinhKhoangCachNgay(int day1,int month1,int year1,int day2,int month2,int year2);
void nhap(int &day,int &month,int &year);
void xuat(int x);
int main()
{
	int day1,month1,year1,day2,month2,year2;
	nhap(day1,month1,year1);
	nhap(day2,month2,year2);
	int songay= tinhKhoangCachNgay(day1,month1,year1,day2,month2,year2);
	xuat(songay);
	return 0;
}
bool kiemTraNamNhuan(int year)
{
	if(year%4==0 && year%100!=0 || year%400==0)
	    return true;
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
		    if(kiemTraNamNhuan(year)==true )
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
int tinhSoNgayQuaNam(int day,int month,int year)
{
	int time = 0;
	for(int i=1;i<year;i++)
	    if (kiemTraNamNhuan(i)==true)
	        time=time + 366;
	    else
		    time=time + 365;
	time=time + tinhSTTNgayTrongNam(day,month,year);
	return time;
}
int tinhKhoangCachNgay(int day1,int month1,int year1,int day2,int month2,int year2)
{    
    int KCngay1 = tinhSoNgayQuaNam(day1,month1,year1);
    int KCngay2 = tinhSoNgayQuaNam(day2,month2,year2);
    int songay = abs(KCngay1 - KCngay2);
    return songay;
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
	}while(day < 1 || day > 31 || month < 1 || month > 12 || year<0);
}
void xuat(int x)
{
	cout<<"khoang cac hai thoi diem nhap la:"<<x<<"ngay"<<endl;
}	
	
	
