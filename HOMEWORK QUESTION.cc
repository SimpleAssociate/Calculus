#Question 2
#Suppose that nan=(n−3)an−1+nfor n>2 with a_0=a_1=a_2=0a  What is the value of a_{999}? 

#include <algorithm>
#include<vector> 
#include<cmath> 
#include<iostream> 

using namespace std; 




double function(double n) 
{ 
    double sub = n-1; 
    double an = 0; 
    
    if ( sub == 0 || sub == 1 || sub == 2)
    { 
        return 0;  
    } 
    
    an = (n - 3) * function(n-1) + n; 
    
    return an/n; 
    
} 



int main() 
{ 
    double answer = 0; 
    
    answer = function(999); 
    
    cout<<answer;
    
    return 0;
}



#250
