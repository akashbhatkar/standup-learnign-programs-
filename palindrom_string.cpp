#include <iostream>
#include<string>
using namespace std;

int main()
{
    string s1,s2;
    int n;
    char temp;

    cout<<"Enter the first string"<<endl;
    getline(cin,s1);

    n=s1.length();

    s2=s1;
    for(int i=0;i<=n;i++,n--)
    {
        temp=s2[i];
        s2[i]=s2[n-1];
        s2[n-1]=temp;
    }

    if(s1.compare(s2))
    {
        cout<<"given string is not palindrome"<<endl;

    }
    else
        cout<<"Given string is palindrome "<<endl;
}
