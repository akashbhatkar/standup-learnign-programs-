#include <iostream>

using namespace std;

int main()
{
    string s;
    int n;
    char temp;
    cout<<"Enter the string "<<endl;
    getline(cin,s);

    n=s.length();

    //cout<<n<<endl;

    for(int i=0;i<=n;i++,n--)
    {
        temp=s[i];
        s[i]=s[n-1];
        s[n-1]=temp;
    }
    cout<<s<<endl;
}
