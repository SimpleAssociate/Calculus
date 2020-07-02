#include <iostream>
#include <string>
using namespace std;


bool righttriangle(double hype, double s1, double s2)
{
    double ab = s1*s1 + s2*s2;
    double  c = hype*hype;
    
    if(ab == c)
    {
        return true;
    }
    else
    { 
        return false;
    }
    
}



int main()
{
  double s1, s2, s3; 
  
  cout<<"Side 1: "; 
  cin>> s1; 
  cout<<"Side 2: ";
  cin>>s2; 
  cout<<"Side 3: ";
  cin>>s3; 
  
  bool right; 
  
  
  if(s1 > s2 && s1> s3)
  {
      right = righttriangle(s1,s2,s3);
  }
  
  else if(s2 > s1 && s2>s3)
  {
     right = righttriangle(s2,s1,s3);
  }
  
  else if(s3>s1 && s3 > s2)
  {
      right = righttriangle(s3,s1,s2);
  }
  
  else{
        cout<<"Triange is Equilateral";   
  }
  
  
  if(right){
      cout<<"Triangle is right";
  }
  else{
      cout<<"Triangle is not right";
  }
  
  cout<<"\nJob Done";
  
  return 0;
}
