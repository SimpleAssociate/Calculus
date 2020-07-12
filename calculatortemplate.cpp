#include<iostream> 
#include<vector> 
#include<algorithm> 

using namespace std; 

template <class T> 
class Calculator
{ 
private: 
    T num1, num2; 
public: 
    Calculator(T n1, T n2) { 
        num1 = n1; 
        num2 = n2; 
    } 
    
    void displayResults(){
        cout<<"Numbers are : " << num1 << " & "<<num2; 
        cout<<"\n"; 
        cout<<"Addition is: "<< add() << endl; 
        cout<<"Subtration is: " << sub() << endl; 
        cout<<"Product is: "<< multiply() << endl; 
        cout<<"Division is: " << divide() << endl; 
        cout<<"Square of n1: "<< power(num1) <<endl; 
        cout<<"Square of n2: "<< power(num2) << endl; 
        
        
    } 
    
    T add() { return num1 + num2; }
    T sub() { return num1-  num2; } 
    T multiply() { return num1 * num2; } 
    T divide() { return num1 / num2; }
    T power(T n ) { return n* n; } 
    
    
};

int main {
    
    Calculator<double> c1 (1.45 , 3.2); 
    
    
    c1.displayResults();  
    
    return 0; 
}
    
    
        
    

