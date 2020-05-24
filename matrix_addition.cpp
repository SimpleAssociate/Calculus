#include<iostream> 
#include<algorithm> 
using namespace std; 


class matrix
{
    int rows, col;
    void matrix(int num_rows, int num_col);
     
    int m1[rows][col]; 
    int m2[rows][col]; 

    void initialize(); 

    int m3[rows][col];
    
    void add(); 
    void display_results(); 
}; 

void matrix::add()
{
    for(int i=0; i<rows; i++)
        for(int j=0; j<col; j++)
            m3[i][j]=m1[i][j]+m2[i][j];
}

void matrix:: display_results()
{
   cout<<"Matrix 1\n\n"; 

   for(int i=0; i<rows; i++)
   {
      cout<<"[";
      for(int j=0; j<col; j++)
      {
          cout<<m1[i][j]<<" , "; 
      }

      cout<<"]\n";

   }



   cout<<"Matrix 2\n\n";
   for(int i=0; i<rows; i++)
   {
     cout<<"[";
     for(int j=0; j<col; j++)
     {
         cout<<m2[i][j]<<" , ";
     }
     cout<<"]\n";
  }


   
cout<<"Sum Matrix\n\n";
   for(int i=0; i<rows; i++)
   {
     cout<<"[";
     for(int j=0; j< col; j++)
     {

         cout<<m3[i][j]<<" , ";
     }
   cout<<"]\n"; 
  } 
    
}

void matrix::initialize()
{
double val= 2;

for(int i=0; i<rows; i++)
   for(int j=0; j<col; j++)
          m1[i][j]=val*2;

val=3;

for(int i=0; i<rows; i++)
   for(int j=0; j<col; j++)
         m2[i][j]=val*3; 


}




matrix::matrix(int rows, int columns); 
{
   rows=num_rows;
   col=num_col;

}

int main()
{



return 0; 

}
