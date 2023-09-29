#include<iostream>
using namespace std;
/*int power(int n , int p)
{
    if(p==0)
    {
        return 1;
    }
  int  prevpower = power(n ,p-1);
  return n*prevpower;

}
int main()
{
    int n, p; 
    cin>>n>>p;
   cout<< power(n , p);
}
*/
int fib(int n)
{
    if(n==0 || n==1)
    {
        return n;
    }
    return fib(n-1) + fib(n-2);
}
int main()
{
    int n;
    cin>>n;
   cout<< fib(n);
}