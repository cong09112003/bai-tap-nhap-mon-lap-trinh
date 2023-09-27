#include<iostream>
#include<math.h>
#include<bits/stdc++.h> 
using namespace std;
bool kiemTraQuaMon(float x,float y,int k);
double tinhDiemTrungBinh(float x,float y);
void xuat(bool check);
void nhap(int &k,float &x,float &y);
int main()
{
	float x,y;
	int k;
	nhap(k,x,y);
	bool kq=kiemTraQuaMon(x,y,k);
	xuat(kq);
	return 0;
}
void nhap(int &k,float &x,float &y)	
{
	cin>>k;
	cin>>x>>y;
}	
void xuat(bool check)
{
	if(check==true)
	cout<<"Pass";
	else
	cout<<"Fail";
}
double tinhDiemTrungBinh(float x,float y)
{
	float DTB;
	DTB=(x+y)/2;
	return DTB;
}	
bool kiemTraQuaMon(float x,float y,int k)
{
	float DTB=tinhDiemTrungBinh(x,y)+0.05;
	if(0<=k && k<21)
	{
		if(DTB>=5.0)
		    return true;
		return false;    
	}
	else	
	{
		if(DTB>=4.0)
		    return true;
		return false;    
	}	
}	
