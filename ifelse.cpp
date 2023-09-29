#include<iostream>
using namespace std;
int main()
{
  int number;
  cin>>number;
  if(number>10)
  {
    if(number<20)
    {
        cout<<"mango\n";
    }
    else
    {
    cout<<"apple\n";
    }
  } 
  else
  if(number>5)
  {
    cout<<"guava\n";
  } 
  else
  {
    cout<<"grapes\n";
  }
  

int a, b, c;
cin>>a>>b;
c= a>b?a-b:b-a;
cout<<c;
return 0;
}
