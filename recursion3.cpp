#include<iostream>
using namespace std;
/*
void reverse(string s)
{
   if(s.size()==0)
   {
    return;
   }
    string ros = s.substr(1);

    reverse(ros);
    cout<<s[0]; 
}
int main()
{
    string s;
    cin>>s;
    reverse(s);
    return 0;
}*/

string remove(string s)

{
    if(s.length()==0)
    {
        return "";
    }
    char ch =s[0];
    string ans = remove(s.substr(1));

    if(ch==ans[0])
    {
        return ans;
    }
    return (ch+ans);
}
int main()
{
    cout<<remove("aabbccdde");
}

