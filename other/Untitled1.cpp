



#include<iostream>
#include<stdio.h>
using namespace std;
 struct SV {
	char mssv[10];
	char hoten[50];
	int ngsinh;
	int thsinh;
	int somon;
	char tenmon[100];
	float diemQT[100];
	float diemCK[100];

};
void nhapSV(SV& a);
void xuatSV(SV a);


int main()
{
	SV a;
	nhapSV(a);
	xuatSV(a);
}
void nhapSV(SV& a)
{
	cout << "Nhap thong tin SV"<<endl;
	cout << "Nhap ma so sinh vien:";
	cin.getline(a.mssv, 10);
	cout << "nhap ho ten:";
	cin.getline(a.hoten, 50);
	cout << "nhap ngay sinh:";
	cin >> a.ngsinh;
	cout << "nhap thang sinh:";
	cin >> a.thsinh;
	cout << "nhap so mon:";
	cin >> a.somon;
	for (int i = 0; i < a.somon; i++)
	{
		cout << "nhap ten mon hoc thu" << i ;
		cout << "nhap diem Qua Trinh:";
		cin >> a.diemQT[i];
		cout << "nhap diem cuoi ki:";
		cin >> a.diemCK[i];
	}
}
void xuatSV(SV a)
{
	puts(a.mssv);
	puts(a.hoten);
	cout << a.ngsinh << endl;
	cout << a.thsinh << endl;
	for (int i = 0; i < a.somon; i++)
	{
		cout << "Mon thu" << i << endl;
		cout << a.diemQT[i] << endl;
		cout << a.diemCK[i] << endl;
		cout << endl;
	}
}
