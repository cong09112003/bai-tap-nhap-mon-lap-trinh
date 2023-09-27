//tim va in ra man hinh trong pham vi tu 10 den 99 sao cho tich hai chu so bang tong hai chu so do
#include<iostream>
using namespace std;
int main()
{
	int a;
	int b;
	for(int i=10;i <=99;i++)
	{
		a=i/10;
		b=i%10;
		int Tich=a*b;
		int Tong=a+b;
	    if((Tich)==2*(Tong))
	    {
            cout << i << " " << endl;
        }
    }
}  

