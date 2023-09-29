#include<iostream>
using namespace std;
int main()

/*{
    int n, i, j, temp;
    cin>>n;
    int array[n];
    for(i=0; i<n; i++)
    {
        cin>>array[i];
    }
    for(i=0; i<n-1; i++)
    {
        for(j=i+1; j<n; j++)
        {

    
       if(array[i]>array[j])
       {
    temp = array[j];
    array[j] = array[i];
    array[i] = temp;
       }
       
    }

}
for(i=0; i<n; i++)
{
    cout<<array[i]<<" ";
}
return 0;
}*/
{

    int n, i, j, temp;
    cin>>n;
    int ar[n];
    for(i=0; i<n; i++)
    {
        cin>>ar[i];

    }
    for(i=0; i<n-1; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(ar[i]>ar[j])
            {
                temp=ar[j];
                ar[j]=ar[i];
                ar[i]=temp;
            }
        }
    }
     for(i=0; i<n; i++)
    {
        cout<<ar[i]<<" ";

    }
    return 0;
}