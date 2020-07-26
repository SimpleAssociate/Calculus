#include<vector> 
#include<iostream>
#include<cmath> 
using namespace std;

bool prime_(int n)
{
    bool prime = true; 
    for(int i = 2; i < n; i++)
    {
        if(n%i == 0){
            prime = false;
        }   
    }
    return prime;
}



int factorthis(int number)
{
    int factor = 0; 

    for(int i = 2; i< number; i++)
    {
        if(number % i ==0)
        {
            factor = i;
            return factor;
            break;
        }
    }
}

int main()
{
    std::vector<int> factor1; 
    std::vector<int> factor2; 
    
    int number; 
    std::cout<<"Enter Number :";
    cin>>number; 
    bool prime = true;
    
    
    for(int i = 1; i<=number; i++)
    
    {   
        
        int f1 = 0; 
        int f2 = 0; 
        
        if(number % i == 0){
            
            f1 = number / i; 
            f2 = i; 
            
            if(prime_(f1) && prime_(f2))
            {
                factor1.push_back(f1);
                factor2.push_back(f2);
            }
            
            prime = false;
        }
    }
    
    
    
    
    int len = factor1.size();
    
    if(prime)
    {
        std::cout<<"\nThis number is Prime";
    }
    else{
        std::cout<<"\nThe Prime Factors are:  ";
        for(int i = 0; i< len; i++)
        {
            cout<<"\nPrime Factor 1: " <<factor1[i];
            cout<<"\nPrime Factor 2: " <<factor2[i];
        }
    }
    
    return 0;
}
