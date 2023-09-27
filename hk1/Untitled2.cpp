#include<iostream>
#include<cmath>
using namespace std;
 
bool so_nguyen_to(int p)
{
	if(p <2)
		return false;
	for(long long i = 2; i * i <= p; i++)
		if(p % i == 0)
			return false;
	return true;
}
 
bool so_chinh_phuong(int n)
{
	int k = sqrt(n);
	return k * k == n;
}
 
bool check(int n)
{
	if(!so_chinh_phuong(n))
		return false;
	int k = sqrt(n);
	return so_nguyen_to(k);
}
 
int main(){
    int l,n;
    cin >>l>>n;
    int d= 0;
    for (int i =l; i <=n; i++){
        if (check(i)) d++;
    }
    cout <<d;
    return 0;
}
