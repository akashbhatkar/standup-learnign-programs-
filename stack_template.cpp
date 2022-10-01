#include <iostream>

using namespace std;

template<class T>

class stack
{
private: T top;
    T value[10];
public:stack()
    {
        top=-1;
    }

    void push()
    {
     if(top>10)
     {
         cout<<"stack is full"<<endl;

     }
     else
     {
         cout<<"Enter what you want to push"<<endl;
         cin>>value[++top];

     }
    }
   void pop()
   {
       if(top<0)
       {
           cout<<"stack is underflow canot complete operation"<<endl;
       }
       else {
            value[top--];
           }
       }
void display ()
{
    if(top<0)
    {
        cout<<"stack is underflow"<<endl;
    }
    else
    {
        cout<<value[top];

    }

}

};

int main()
{
   stack <int> s;
    s.push();
    s.push();
    s.pop();
    s.display();

    stack <char> c;
    c.push();
    c.push();
    c.pop();
    c.display();
    c.push();
    c.push();
    c.pop();
    c.display();
}

