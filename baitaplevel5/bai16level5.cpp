// Tinh tien phai tra
#include<iostream>
#include<math.h>
using namespace std;
void xuat(int sotien,int namtram,int haitram,int motTram,int namMuoi,int haiMuoi,int muoi);
void nhap(int &sotien);
int main ()
{
	int sotien;
	nhap(sotien);
	int motTram;
	int namMuoi;
	int haiMuoi;
	int muoi;
	int namtram;
	int haitram;
	xuat(sotien,namtram,haitram,motTram, namMuoi, haiMuoi, muoi);
	return 0;
}
void nhap(int &sotien)
{
    do{
    	cout<<"nhap so tien muon rut:";
    	cin>>sotien;
	}
	while(sotien<10000);
}
void xuat(int sotien,int namtram,int haitram,int motTram,int namMuoi,int haiMuoi,int muoi)
{
	if (sotien%10000==0)
	{
	namtram=sotien/500000;
	sotien=sotien%500000;
	haitram=sotien/200000;
	sotien=sotien%200000;
    motTram = sotien/100000;
    sotien = sotien % 100000;
    namMuoi = sotien/50000;
    sotien = sotien % 50000;
    haiMuoi = sotien/20000;
    sotien = sotien % 20000;
    muoi = sotien/10000; 
    cout<<"so tien mot tram dong"<<namtram<<endl;
    cout<<"so tien nam muoi dong"<<haitram<<endl;
    cout<<"so tien mot tram dong"<<motTram<<endl;
    cout<<"so tien nam muoi dong"<<namMuoi<<endl;
    cout<<"so tien hai muoi dong"<<haiMuoi<<endl;
    cout<<"so tien muoi dong"<<muoi<<endl;  
    }
    else 
    {
    	cout<<"nhap lai";
    }	
}
    		
