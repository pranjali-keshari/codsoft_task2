#include<iostream>
using namespace std;
void add(int a,int b)
{
    cout<<"\n\t\tSUM OF TWO NUMBER: "<<a+b;
}
void sub(int a,int b)
{
    cout<<"\n\t\tSUBTRACTION OF TWO NUMBER: "<<a-b;
}
void dive(int a,int b)
{
    cout<<"\n\t\tDIVISION OF TWO NUMBER: "<<a/b;
}
void mul(int a,int b)
{
    cout<<"\n\t\tMULTIPLICATION OF TWO NUMBER: "<<a*b;
}
main()
{
    int choice,a,b;
    do
    {
        cout<<"\n\t\tEnter two number";
         cout<<"\n\t\t";
        cin>>a;
        cout<<"\n\t\t";
        cin>>b;
        cout<<"\n\t\tEnter your choice";
        cout<<"\n\t\t1.ADDITION";
        cout<<"\n\t\t2.SBBTRACTION";
        cout<<"\n\t\t3.DIVISION";
        cout<<"\n\t\t4.MULTIPLICATION";
        cout<<"\n\t\t5.EXIT";
        cout<<"\n\t\t";
        cin>>choice;
       if(choice==1)
              add(a,b);
           else if(choice==2) 
              sub(a,b);
           else  if(choice==3)  
            
              dive(a,b);
            else if(choice==4)
              mul(a,b);
            else if(choice==5)
            exit(1);
            else  
            cout<<"\n\t\tINVALID CHOICE";

    }while(choice!=5);
    
}
