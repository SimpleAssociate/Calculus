#include<iostream>
#include<algorithm>
using namespace std; 


class A
{
    private: 
        int m; 
    public: 
        A(int n =  10) : m(n)
        {
            cout<< "d";
        }
        
        A(const A& a) : m(a.m)
        { 
            
            cout<<"c"; 
            
        } 
        
        
}; 

void f(const A &a1, const A &a2 = A()) {}



int main()
{
    A a(100), b; 
    cout<<"****\n";     

    const A c(a), &d = c, e =b; 
    
    cout<<"****\n"; 
    
    b = d;
    
    cout<<"*****\n"; 
    
    A *p = new A(c), *q = &a; 
    
    cout<<"*****\n";
    
    static_cast<void>(q); 
    
    cout<<"*****\n"; 
    
    delete p; 
    
    cout<<"*****\n"; 
    
    f(3); 
    
    
    
    
    
    
        
    return 0;   
} 

//ddcccdd
