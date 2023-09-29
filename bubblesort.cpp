#include<iostream>
using namespace std;
int main()
{
    int n; 
    cin>>n;
    
    int array[n];
    for(int i=0; i<n; i++)
    {
        cin>>array[i];
    }
    int temp ,i, k=1;
    while(k<n)
    {
        for(i=0; i<n-k; i++)
        {
            if(array[i]>array[i+1])
            {
                temp = array[i];
                array[i] = array[i+1];
                array[i+1] = temp;


            }
            
        }
        k++;
    }
    for(int i=0; i<n; i++)
    {
        cout<<array[i]<<" ";
      
    }
      cout<<endl;

}