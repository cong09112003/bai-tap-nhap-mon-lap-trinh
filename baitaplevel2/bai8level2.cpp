#include<iostream>
#include<math.h>
using namespace std;
void nhap(int &n);
void xuat(int n);
int main()
{
	int n;
	nhap(n);
	xuat (n);
}
void nhap(int &n)
{
	cout<<"nhap n:""\n";
    cin>>n;
}
void xuat(int n)
{
	switch(n)
	{
	case 1: cout<<"Mot";break;
	case 2: cout<<"Hai";break;
	case 3: cout<<"Ba";break;
	case 4: cout<<"Bon";break;
	case 5: cout<<"Nam";break;
	case 6: cout<<"Sau";break;
	case 7: cout<<"Bay";break;
	case 8: cout<<"Tam";break;
	case 9: cout<<"Chin";break;
	default: cout <<"khong biet doc";
    }
}

	
	
