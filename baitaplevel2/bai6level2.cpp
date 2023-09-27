#include<iostream>
#include<math.h>
using namespace std;
void nhap(float &a,float &b,float &c);
int timTamGiac(float a, float b,float c);
void xuat (int kt);
int main ()
{
	float a,b,c;
	nhap(a,b,c);
	int kt= timTamGiac(a,b,c);
	xuat(kt);
	return 0;	
}
void nhap(float &a,float &b,float &c)
{
	cout<<"nhap do dai canh a: ""\n";
	cout<<"nhap do dai cach b: ""\n";
	cout<<"nhap do dai cach c: ""\n";
	cin>>a>>b>>c;
}
int timTamGiac(float a,float b,float c)
{
	if ((a+b > c) && (a+c > b) && (b+c > a) && ( a > 0) && ( b > 0) && ( c > 0 ) )
	{
		if ((a*a + b*b == c*c)||(b*b + c*c == a*a )||(c*c + a*a == b*b))
		{
			if ((a==b)||(a==c)||(b==c))
			    return 1;
			else 
			    return 2;
		}
		if ((a==b)&&(a==c))
			return 3;
		if ((a==b)||(a==c)||(b==c))
			return 4;
		if ((a*a > b*b + c*c)||(b*b > a*a + c*c )||(c*c > a*a + b*b))
		    return 5;
		else
		    return 6;		
	}
	else
	return 0;
}
void xuat (int kt)
{
	if (kt==6)
	cout<<"tam giac nhon";
	if (kt==1)
	cout<<"tam giac vuong can";
	if (kt==2)
	cout<<"tam giac vuong";
	if (kt==3)
	cout<<"tam giac deu";
	if (kt==4)
	cout<<"tam giac can";
	if (kt==5)
	cout<<"tam giac tu";
	if (kt==0)
	cout<<"a b c khong phai la 3 cach cua 1 tam giac";
}	
	
	
