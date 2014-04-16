#include "sth.h"
#include <iostream>
using namespace std;
Stack::Stack()
{
    top=0;
}
Stack::~Stack()
{
    clear();
}
void Stack::push(int a) noexcept
{
    D *tmp=new D;
    tmp->next=0;
    tmp->value=a;
    if(top==0)
    {
        top=tmp;
        return;
    }
    tmp->next=top;
    top=tmp;
}
void Stack::pop() noexcept
{
    D *q=top;
    if(top==0)
    {
        return;
    }
    top=q->next;
    delete q;
}
void Stack::show()
{
    D *print=top;
    while (print!=0)
    {
        cout<<print->value<<"  ";
        print=print->next;
    }
    cout<<endl;
}
bool Stack::isEmpty() noexcept
{
    if(top==0)
        return true;
    else return false;
}
void Stack::clear() noexcept
{
    while(top!=0)
    {
        pop();
    }
}
int Stack::size()
{
    D *q=top;
    int k=0;
    while (q!=NULL)
    {
        k++;
        q=q->next;
    }
    return k;
}

int Stack::onTop() const
{
    if (nullptr==top)
        throw -1;
    return top->value;
}
