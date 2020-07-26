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


int main()
{
	int number;
	int temp;
	cout<<"Enter Number: ";
	cin>>number;
	temp=number;
	vector<int> prime_factors;
	
	bool checkthis, checkend;
	
	for(int i=2; i<number; i++)
	{
		checkthis=prime_(i);
	
		if(checkthis)
		{
			if(temp%i==0 && i!= 1)
			{
				prime_factors.push_back(i); 
				temp=temp/i;
				
				checkend = prime_(temp);
				if(checkend){
					prime_factors.push_back(temp);
					break;
					}
				while(temp%i==0 && i != 1) 
				{
				    prime_factors.push_back(i); 
				    temp=temp/i; 
				}
				
			}
		}
		
		
	}
	
	
	int len;
	len=prime_factors.size();
	
	if(len==0)
	{
		cout<<"\nThis number is a prime number.";
		return 1;
	}
	
	cout<<"\nFactors: ";
	int factor;
	
	for(int i=0; i<len; i++)
	{
		factor= prime_factors[i];
		if(factor!=1)
	    {
		     cout<<prime_factors[i];
		     cout<<"\n";
		} 
	
	}
	
	
	return 0;
}
