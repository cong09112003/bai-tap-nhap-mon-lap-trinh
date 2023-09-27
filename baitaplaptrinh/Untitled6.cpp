//kiem tra ngay trong thang
#include<iostream>
#include<math.h>
using namespace std;
bool kiemTraNamNhuan(int year);
int tinhSoNgayTrongThang(int month,int year);
void nhap(int &month,int &year);
void xuat(int dayofmonth);
int main()
{
	int month,year;
	nhap(month,year);
	int dayofmonth=tinhSoNgayTrongThang(month,year);
	xuat(dayofmonth);
	return 0;
}
bool kiemTraNamNhuan(int year)
{
	if(year%4==0 && year%100!=0 ||(year % 400==0))
	{
	    return true;
	}
	return false;    
}
int tinhSoNgayTrongThang(int month,int year)
{
// 	int dayofmonth;
//    switch (month)
//	{
//	    case 1:
//	    case 3:
//	    case 5:
//	    case 7:
//	    case 8:
//	    case 10:
//	    case 12: 
//		dayofmonth = 31;
//	break;
//	    case 4:
//	    case 6:
//	    case 9:
//	    case 11: 
//		dayofmonth = 30;
//	break;
//	    case 2:
//		    if (kiemTraNamNhuan(year))
//		    {
//			    dayofmonth = 29;
//		    }
//		    else
//		    {
//			    dayofmonth = 28;
//		    }
//	break;
//	}
//	return dayofmonth;
//	                                                                                                                                   
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
void nhap(int &month,int &year)
{
	do{
	cout<<"nhap thang:";
	cin>>month;
	cout<<"nhap nam:";
	cin>>year;
    }while(month < 1 || month > 12);
}
void xuat(int dayofmonth)
{
	cout<<"so ngay trong thang la:"<<dayofmonth<<endl;
}

