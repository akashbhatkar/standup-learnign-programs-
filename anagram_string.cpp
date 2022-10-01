#include <iostream>
#include<string>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s1;
    string s2;
   cout<<"Enter first string "<<endl;
    getline(cin,s1);
    cout<<"Enter second string "<<endl;
    getline(cin,s2);

    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    if(s1.length()!=s2.length())
    {
         cout<<"String is anagram"<<endl;
         return 0;
    }
    else if((s2.compare(s1)))
    {
        cout<<"string is not anagram "<<endl;

    }
    else
        cout<<"String is anagram"<<endl;

}
