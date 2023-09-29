#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        for(int j=i; j>=1; j--)
        {
            for(int k=1; k<=n; k++)
            {
                cout<<"A";
            }
            cout<<"/";
        }
        cout<<endl;
    }
}
