#include<iostream>
using namespace std;
int main()
{
int n1, n2; 
cout<<"input two numbers :";
cin>>n1>>n2;
char op;
cout<<"input an op :";
cin>>op;
switch(op)
{
    case '+' :
    cout<<n1+n2;
    break;
    case '-': 
    cout<<n1-n2;
    break;
    case '*': 
    cout<<n1*n2;
    break;
    case '/': 
    cout<<n1/n2;
    break;
    default :
    cout<<"enter a correct operator";
    cout<<endl;
}
return 0;
}