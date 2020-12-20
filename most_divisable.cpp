#include <vector>
#include <iostream> 
using namespace std; 


int main()
{
    
    bool found = false; 
    
    int testthis = 1; 

    int f = 0; 
    
    while(!found)
    {
        f = 1; 
        
        for(int i = 1; i <= 20; i++)
        {
            if(testthis % i != 0)
            {
                f = 0;    
                break;
            }
        }
        
        if(f == 1)
        {
            break;
        }
        else{
            
            testthis++; 
        }
    } 
    
    cout<<testthis;
    
    return 0; 
    
}
