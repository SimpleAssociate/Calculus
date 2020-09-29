#include <iostream> 
#include <algorithm>
#include <cmath>

using namespace std; 


double add(double x, double y)
{
    return x+y;
}

double sub(double x, double y)
{
    return x-y;
}

double multiply(double x, double y)
{
    return x*y;
}

double divide(double x, double y)
{
    return x/y;
}



int menu()
{
    int choice; 
    cout<<"1: Add\n"; 
    cout<<"2: Subtract\n";
    cout<<"3: Multiply\n";
    cout<<"4: Divide\n\n"; 
    cout<<"5: Exit\n"; 
    cin>>choice; 
    return choice; 
}; 


double get_number()
{
    double number; 
    cout<<"Enter Number: ";
    cin>> number; 
    return number;
} 

int main()
{
    
    double var1;
    double var2;
    double answer; 
    
    int choice = 0;
    
    while(choice != 5)
    { 
        choice = menu();
        
        if(choice == 5)
        {
            break;
        } 
        
        var1 = get_number(); 
        var2 = get_number(); 
        
        if (choice == 1)
        {
            answer = add(var1, var2); 
        } 
        else if(choice == 2)
        { 
            answer = sub(var1, var2); 
        } 
        
        else if(choice == 3) 
        { 
            answer = multiply(var1, var2); 
        } 
        else if(choice == 4) 
        { 
            answer = divide(var1, var2); 
        } 
        
        else if(choice == 5)
        {
            break; 
        } 
        
        else{
            cout<<"\nUnresponsive Input:: Try Again"; 
            answer = 0; 
        } 
        
        cout<<"\nAnswer: "<<answer;
        
    }
    
    cout<<"\nThanks Bye"; 
    
    
    
    return 0;
}
