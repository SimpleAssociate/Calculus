#include<iostream> 
#include<vector> 
#include<algorithm> 
#include<cmath> 
using namespace std; 


class Calculator
{
    public:
    
};

class Add: public Calculator
{
    public: 
    double solve(double x, double y) { 
        return x + y;
    }
}; 

class Subtract: public Calculator
{
    public: 
    double solve(double x, double y)   {
        return x - y; 
    }
}; 



int main()
{
    Add ti84; 
    
    cout<< ti84.solve(100.01,100.01);
    
    return 0;
}
