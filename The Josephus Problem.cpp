/*


This classic problem dates back to Roman times. There are 41 soldiers arranged in a circle. 
Every third soldier is to be killed by their captors, continuing around the circle until only one soldier remains.
He is to be freed. Assuming you would like to stay alive, at what position in the circle would you stand?

Generalize this problem by creating a function that accepts the number of soldiers n and the interval at which they are killed i, 
and returns the position of the fortunate survivor.

Examples
josephus(41, 3) ➞ 31

josephus(35, 11) ➞ 18

josephus(11, 1) ➞ 11

josephus(2, 2) ➞ 1





*/





#include<iostream>
#include<vector>
#include<algorithm>
using namespace std; 

bool check_killed(vector<int> s)
{
    int size = 0; 
    size = s.size(); 
    
    int numalive = 0; 
    int person = 0; 
    
    for(int i = 0; i<size; i++)
    {
        if(s[i] > 0)
        {
            numalive++;    
            person = s[i]; 
        }

    }
    
    if(numalive == 1)
    {
        cout<<"\nPerson: "<<person;
        return true; 
    }
    
    else{
        return false;
    }
    
} 
int main()
{
    int n = 0; 
    int i = 0; 
    cout<<"Soldiers: ";
    cin>>n; 
    cout<<"Interval: ";
    cin>>i; 
    vector<int> s; 
    for(int k = 1; k <= n; k++)
    {
        s.push_back(k);
    }
    
    
    bool all_killed = false; 
    
    int ticker = 1; 
    
    int s_ = 0; 
    
    bool on = true; 
    while(!all_killed)
    {
        if(s[s_] > 0){
            
            on = true;   
        }
        else{
            on = false;
        }
        
        if(ticker % i == 0 && s[s_] > 0)
        {
            
            s[s_] = -1;
                
        }
        
        if(on)
        {
            ticker++;
        }
        
           
        s_++;     
           
        
        if(s_ == n) 
        {
            s_ = 0;
        }
        
        all_killed = check_killed(s);
        
     
    }
    
    return 0;   
}
