#include <iostream>
#include<vector>
using namespace std;

int primeseive (int n)
{
    vector <long long> prime (n,0);
    int cnt = 0;
    for(long long int i = 2; i < n ; i++)
        {
            if(prime[i] == 0)
            {
                for(long long j = i*i; j<n;j+=i)
                {
                    prime[j] = 1;
                }
            }
        }
        for (long long i = 2 ; i < n ; i++)
        {
            if(prime[i] == 0)
            {
                cnt++;
            }
        }
    return cnt;
}

int main()
{
    int n ;
    cin>> n;
    primeseive(n);
}
