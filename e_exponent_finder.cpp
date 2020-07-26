#include <iostream> 
#include<cmath> 
#include<algorithm> 

using namespace std; 


int main()
{
    double e_ = 0;  
    double e_next = 0;
    double i_prev = 0; 
    bool exp_found = false; 
    
    
    for(int i = 0; i<100; i++)
    {
      double change = 0; 
      i_prev = i; 
      exp_found = false; 
      
      
      while(!exp_found)
      {
          
           e_ = exp(i);
           
           e_next = exp(i_prev + 1);
           
           change = (e_next - e_)/e_;   
           
           //cout<<change<<"\n";
           
           
           if(change>.0205)
           {
               i_prev-=.002; 
          
           }
           else if(change < .0195){
               i_prev+=.002; 
           }
           else{
               exp_found = true; 
           }
           
      }
      
      cout<<"power for e = "<< i << " Exponenet for next e: "<<i_prev;
      cout<<"\n"; 
      
    }               
    return 0;   
            
}       

