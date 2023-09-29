#include<iostream>
using namespace std;
int i, j;
void primesieve(int n)
{
    int prime[100] = {0}; 
    for(i=2; i<=n; i++)
    {
        if(prime[j]==0)
        {
        for(j=i*i; j<=n; j+=i)
        {
            prime[i]=1;
        }
        }
    }
    for(i=2; i<=n; i++)
    {
        if(prime[i]==0)
        {
            cout<<i<<" ";
        }
    }
    cout<<endl;
}
int main()
{
    int n;
    cin>>n;
    primesieve(n);
    return 0;
}