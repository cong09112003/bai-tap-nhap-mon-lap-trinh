#include<iostream>
#include<math.h>
using namespace std;
 struct PS
{
	int ts, ms;
};
void nhap(PS &a);
void xuat(PS a);
void rutGonPS(PS &a);
int  UCLN(int a, int b);
PS hieuHaiPhanSo(PS ps1, PS ps2);

int main()
{
	PS a, b, PSHieu;
	cout<<"nhapPhanSoThuNhat"<<endl;
	nhap(a);
	cout<<"nhapPhanSoThuHai"<<endl;
	nhap(b);
	PSHieu = hieuHaiPhanSo(a,b);
	cout<<"PhanSoA: ";
	xuat(a);
	cout<<"PhanSoB: ";
	xuat(b);
	cout<<"PhanSoHieu: ";
	xuat(PSHieu);

}
PS hieuHaiPhanSo(PS ps1, PS ps2)
{
	PS temp;
	temp.ts = ps1.ts*ps2.ms - ps2.ts*ps1.ms;
	temp.ms = ps1.ms * ps2.ms;
	rutGonPS(temp);
	return temp;
}
int  UCLN(int a, int b)
{
	int ta;
	int tb;
	ta = abs(a);
	tb = abs(b);
	int i =ta;
	if((ta==0)||(tb==0))
	{
		return (ta+tb);
	}
	else
	{
		while((ta%i!=0)||(tb%i!=0))
		{
			i--;
		}
		return i;	
	}

}
void rutGonPS(PS &a)
{
	int ucln;
	ucln = UCLN(a.ts,a.ms);
	a.ts/= ucln;
	a.ms/= ucln;	
	if(a.ms<0)
	{
		a.ms*=-1;
		a.ts*=-1;
	}
}
void nhap(PS &a)
{
	cout << "Nhap tu so:";
	cin >> a.ts;
	do {
		cout << "Nhap mau so (khac 0):";
		cin >> a.ms;
	} while (a.ms==0);
}
void xuat(PS a)
{
	if((a.ts==0)||(a.ms==1))
		cout<<a.ts;
	else
	{
		cout<<"PhanSoLa: ";
		cout<<a.ts<<"/"<<a.ms;
	}
	cout<<endl;
}
