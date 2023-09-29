#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    /* string str;
    getline(cin , str);
    cout<<str;

    string str1, str2;
    str1= "fam";
    str2= "ily";
    str1.append(str2);
    cout<<str1<<endl;
    cout<<str2[1];*/
    string s1 ="nincompoop";
    s1.erase(3,3);
    cout<<s1;
    cout<<s1.find("oop")<<endl;
    cout<<s1.insert(2 , "tit");
    cout<<s1.length();
    int i;
    for(i=0; i<s1.length(); i++)
    {
        cout<<s1[i]<<endl;
    }
    string a = "gyukfgcxzawwerrtyubxsertyu";
    sort(a.begin(), a.end());
    
        cout<<a<<endl;
        string w ="auubeuwhegrbeggshfhsfwryfwuhwrufherbfifyrgywfwsbs";
        for(i=0; i<w.size(); i++)
        {
            if(w[i]>='a' && w[i]<='z')
            {
                w[i] -=32;
            }
        }
        cout<<w; 
        string s = "ASDFGYTGHJ";

        transform(begin.s() , end.s() , begin.s(), ::tolower);
        cout<<s;
    

}