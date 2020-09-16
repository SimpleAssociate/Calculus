#include <iostream>
#include <string>
#include <algorithm> 
#include <vector> 
using namespace std;

vector<int> getnums(int i){
    vector<int> numbers; 
    for(int j = 0; j<i; j++)
        numbers.push_back(j); 
        
    return numbers; 
} 
        

vector<int> get_multiples(vector<int> numbers, int f)
{
  int n = numbers.size(); 
  vector<int> multiples; 
  for(int i = 0; i<n; i++)
  {
      if(numbers[i] % f == 0)
      {
          multiples.push_back(numbers[i]); 
      }
  }
  
  return multiples;   
} 

int main()
{
    vector<int> ten;
    vector<int> hundred;
    
    ten  = getnums(10); 
    hundred = getnums(100); 
    
    
    return 0;
}
