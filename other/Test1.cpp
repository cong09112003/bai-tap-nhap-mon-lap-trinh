

#include<iostream>
#include<math.h>

using namespace std;


typedef struct PS {
	int ts;
	int ms;
};
void nhapps(PS& a);
void nhapm(PS m[], int n);
float giatri(PS a);
PS timMax(PS m[], int n);
PS tinhTong(PS m[], int n);
PS tinhTich(PS m[], int n);
void rutgon(PS& a);
int UCLN(int x, int y);
PS tinhThuong(PS m[], int n);
PS tinhHieu(PS m[], int n);
void NghichDao(PS& a);
void xuatmdaonguoc(PS m[], int n);
void xuatm(PS m[], int n);
void nhapps(PS& a)
{
	cout << "Nhap tu so :";    // printf("nhap Tu So:");
	cin >> a.ts;               // scanf("%d",&a.ts);
	do {
		cout << "nhap mau so (khac 0):";
		cin >> a.ms;
	} while (a.ms == 0);
}
void nhapm(PS m[], int n)
{
	// nhap phan so m[0]-->m[n-1]
	for (int i = 0; i < n; i++)
	{
		cout << "nhap phan so" << i << ":" << endl;
		nhapps(m[i]);
	}
}
float giatri(PS a)
{
	float kq = (float)(a.ts) / a.ms;
	return kq;
}
PS timMax(PS m[], int n)
{
	PS max = m[0];
	for (int i = 1; i < n; i++)
	{
		if (giatri(max) < giatri(m[i]))
			max = (m[i]);
	}
	return max;
}
int UCLN(int x, int y)
{
	if (x == y)
		return x;
	while (x != y)
	{
		if (x > y)
			x = x - y;
		else
			y = y - x;
	}
	return x;
}
void rutgon(PS& a)
{
	int so = UCLN(a.ts, a.ms);
	a.ts = a.ts / so;
	a.ms = a.ms / so;
}
PS tinhTong(PS m[], int n)
{
	PS Tong = m[0];
	for (int i = 1; i < n; i++)
	{
		Tong.ts = Tong.ts * m[i].ms + m[i].ts * Tong.ms;
		Tong.ms = Tong.ms * m[i].ms;
	}
	rutgon(Tong);
	return Tong;
}
PS tinhTich(PS m[], int n)
{
	PS Tich = m[0];
	for (int i = 1; i < n; i++)
	{
		Tich.ts = Tich.ts * m[i].ts;
		Tich.ms = Tich.ms * m[i].ms;
	}
	rutgon(Tich);
	return Tich;
}
PS tinhHieu(PS m[], int n)
{
	PS Hieu;
	Hieu.ts = m[0].ts * m[1].ms - m[1].ts * m[0].ms;
	Hieu.ms = m[0].ms * m[1].ms;
	return Hieu;
}
PS tinhThuong(PS m[], int n)
{
	PS Thuong = m[0];
	for (int i = 1; i < n; i++)
	{
		Thuong.ts = Thuong.ts * m[i].ms;
		Thuong.ms = Thuong.ms * m[i].ts;
	}
	rutgon(Thuong);
	return Thuong;
}
void NghichDao(PS& a)
{
	int so = a.ts;
	a.ts = a.ms;
	a.ms = so;
}
void xuatmdaonguoc(PS m[], int n)
{
	for (int i = 0; i < n; i++)
	{
		NghichDao(m[i]);
	}
	for (int i = 0; i < n; i++)
	{
		cout << m[i].ts << " / " << m[i].ms << endl;
	}
}
void xuatm(PS m[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << m[i].ts << " / " << m[i].ms << endl;
	}
}
int main()
{
	PS m[50];
	int n;
	cout << "nhap so luong phan so:";
	cin >> n;
	nhapm(m, n);
	xuatm(m, n);
	PS kq = timMax(m, n);
	cout << "Phan so lon nhat:" << kq.ts << "/" << kq.ms << endl;
	PS Tong = tinhTong(m, n);
	cout << "Tong so cac phan so :" << Tong.ts << "/" << Tong.ms << endl;
	PS Tich = tinhTich(m, n);
	cout << "Tich so cac phan so :" << Tich.ts << "/" << Tich.ms << endl;
	if (n == 2)
	{
		PS Hieu = tinhHieu(m, n);
		cout << "Hieu so 2 phan so:" << Hieu.ts << "/" << Hieu.ms << endl;
		PS Thuong = tinhThuong(m, n);
		cout << "Thuong so 2 phan so:" << Thuong.ts << "/" << Thuong.ms << endl;
	}
	xuatmdaonguoc(m, n);
	return 0;
}

