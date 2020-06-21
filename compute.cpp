#include <iostream>
#include <string>


double comput(double x, double y)
{
    return x*y;
}


int main()
{
    double sum[100]; 
    
    for(int i= 0; i<100; i++)
    {
       sum[i] = comput(i, sum);
       cout<<sum[i]<<endl;
    } 
    return 0;
}
