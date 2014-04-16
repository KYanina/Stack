#include <iostream>
#include "sth.h"
using namespace std;

void menu()

{
    Stack s;
    int option,n,k,i;
    do
    {
        cout<<"   1 -Create & Show stack\n";
        cout<<"   2 - Show top evelent\n";
        cout<<"   3 - Delete stack\n";
        cout<<"   4- Check if stack is empty\n";
        cout<<"   5 - Exit\n";
        cout<<endl;
        cin>>option;


        switch(option)
        {
        case 1:
            cout<<"Enter number of elements:\n";
            cin>>n;
            i=n;
            while (i!=0)
            {
                cout<<"Enter valus\n";
                cin>>k;
                s.push (k);
                i--;
            }
            cout<<endl;
            s.show();
            break;


        case 2:
            cout<<"Enter number of elements:\n";
            cin>>n;
            i=n;
            while (i!=0)
            {
                cout<<"Enter valus\n";
                cin>>k;
                s.push (k);
                i--;
            }
            cout<<endl;
            s.show();
            s.pop();
            s.show();


        case 3:
            cout<<"Enter number of elements:\n";
            cin>>n;
            i=n;
            while (i!=0)
            {
                cout<<"Enter valus\n";
                cin>>k;
                s.push (k);
                i--;
            }
            cout<<endl;
            s.show();
            s.clear();
            s.show();
            break;


        case 4:

            if (s.isEmpty())
            {
                cout<< "Stack is empty\n";
            }
            else
            {
                cout<<" Stack isn't empty, it will be showed next";
                s.show();
            }

            break;


        case 5:
            break;

        default:
            cout<<"\n Enter number between 1 and 5\n";
            break;
        }
        cout<<endl;
    }
    while(option!=5);
}

int main()
{
    menu();
    return 0;
}
