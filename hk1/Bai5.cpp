#include <iostream>
#include <string>
 
using namespace std;
int main()
{
    string str;
    int n;
    cin >> n;
    cin.ignore();
    getline(cin, str, '\n');
    int N = str.length();
    int sum = 0;
    for(int i = 0; i < N; i++)
    {
        if('0' <= str[i] && str[i]  <= '9')
        {
            int temp = 0;
            for(i; i < N; i++)
            {
                if('0' <= str[i] && str[i]  <= '9')
                {
                    temp = temp * 10 + (str[i] - '0');
                }
                else break;
            }
            sum += temp;
        }
    }
    cout << sum;
}
