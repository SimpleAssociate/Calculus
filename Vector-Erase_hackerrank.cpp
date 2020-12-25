/*

You are provided with a vector of  integers. Then, you are given  queries. For the first query, you are provided with  integer, 
which denotes a position in the vector. The value at this position in the vector needs to be erased. The next query consists of 
integers denoting a range of the positions in the vector. The elements which fall under that range should be removed. The second
query is performed on the updated vector which we get after performing the first query.
The following are some useful vector functions:




*/



#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n; 
    cin>> n; 
    
    int num;
    vector<int> numbers; 
    
    for(int i = 0; i< n; i++)
    {
        cin >> num; 
        numbers.push_back(num);
    }
    
    int q; 
    cin >> q; 
    q = q-1; 
    
    numbers.erase(numbers.begin() + q);
    
    int p; 
    
    cin >> q; 
    cin >> p; 
    
    q = q - 1; 
    p = p-1; 
    
    numbers.erase(numbers.begin()+ q, numbers.begin() + p);
    
    int size; 
    size = numbers.size(); 
    
    cout<<size<<"\n";
    for(int i = 0; i < size; i++)
        cout<<numbers[i] <<" "; 
        
     
    return 0;
}
