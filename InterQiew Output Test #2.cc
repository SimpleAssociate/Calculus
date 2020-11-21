#include<iostream>
#include<list>
#include<algorithm>
using namespace std; 



struct P
{
    bool operator() (const int &n) const
    { 
        return n % 3 == 0;    
    } 
};
    
    
int main()
{
    std::list<int> one({5,2,6,1,13,9,19 }); 
    std::cout<< one.size();
    std::remove_if(one.begin(), one.end(), P());
    std::cout<<one.size() << std::endl; 
    
    
    return 0;
    
    
} 

//77
