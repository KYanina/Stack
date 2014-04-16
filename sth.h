#ifndef STH_H_INCLUDED
#define STH_H_INCLUDED
#include <iostream>
using namespace std;
struct D
{
  int value;
  D *next;
};
class Stack
{
protected:
    D *top;
public:
    Stack();
    ~Stack();
    void push(int a) noexcept;
    void pop() noexcept;
    void show();
    int size();
    int onTop() const;
    bool isEmpty() noexcept;
    void clear() noexcept;

};



#endif // STH_H_INCLUDED
