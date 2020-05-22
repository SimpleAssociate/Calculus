#include<iostream>
#include<conio.h>
#include<cmath>
#include<vector> 
using namespace std;


class calculus{
	public: 
	
	double degree; 
	char var; 
	vector<double> coefs; 
	
	vector<double> ans_coefs; 
	vector<double> ans_exponents; 
	
	calculus(); 
	void derivative();
	void print(); 
	
};

void calculus:: print()
{
	for(int i=0; i<=degree;  i++)
	{
		
		if(ans_exponents[i]+1>0)
		
		{
			if(ans_exponents[i]==0)
			{
				cout<<ans_coefs[i]; 
				
			}
			
			else{
				
				
		     cout<<ans_coefs[i];
		     cout<<var;
		     cout<<"^"; 
		     cout<<ans_exponents[i]; 
		     
		    }
		
		}
		
			
		if(ans_coefs[i+1]>0 && i!=degree) 
		{
			
			cout<<"+"; 
		} 
		
		
	} 
	
} 


calculus::calculus()
{
	cout<<"Enter function degree: "; 
	cin>>degree;
	cout<<"\nEnter function variable: ";
	cin>>var; 
	
	double c; 
	
	for(int i=degree; i>=0; i--) 
	{
	    cout<<"\nEnter Coefficient for degree "<<i<<": ";
	    cin>>c;
	    coefs.push_back(c);
	}
}



void calculus:: derivative(){
	
	int size;
	size=coefs.size(); 
	
	double c; 
	double exponent=degree; 
	double ans; 
	
	for(int i=0; i<=degree; i++)
	{
		c=coefs[i]; 
		ans = c*exponent; 
		
		
		
		ans_coefs.push_back(ans); 
		ans_exponents.push_back(exponent-1);
		
		exponent--;
		
	}
	
	
}
int main() 
{
	calculus function; 
	function.derivative(); 
	function.print(); 
	
return 0; 
}
