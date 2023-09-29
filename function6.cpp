#include<iostream>
using namespace std;
int factorial(int n)
{   int fact =1;
    for(int i=1; i<=n; i++)
    {
        fact *= i;
    }
    return fact;
}
int main()
{
    int i ,j ,n;
    cin>>n;
    for(i=0; i<n; i++)
    {
for(j=0; j<=i; j++)
{


    
    
  cout<< factorial(i)/(factorial(j)*factorial(i-j))<< " ";
}
   cout<<endl;
    
    }

    return 0;
}