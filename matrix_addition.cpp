#include<iostream> 
#include<algorithm> 
#include<vector>
using namespace std; 


class matrix
{
	public:
    int rows, col;
    
    matrix(int num_rows, int num_col);
     
    vector<vector<int>> m1; 
    vector<vector<int>> m2; 

    void initialize(); 

    vector<vector<int>> m3;
    
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
   cout<<"\nMatrix 1\n\n"; 

   for(int i=0; i<rows; i++)
   {
      cout<<"[  ";
      for(int j=0; j<col; j++)
      {
          cout<<m1[i][j]<<"  "; 
      }

      cout<<"]\n";

   }



   cout<<"\nMatrix 2\n\n";
   for(int i=0; i<rows; i++)
   {
     cout<<"[  ";
     for(int j=0; j<col; j++)
     {
         cout<<m2[i][j]<<"  ";
     }
     cout<<"]\n";
  }


   
cout<<"\nSum Matrix\n\n";
   for(int i=0; i<rows; i++)
   {
     cout<<"[  ";
     for(int j=0; j< col; j++)
     {

         cout<<m3[i][j]<<"  ";
     }
   cout<<"]\n"; 
  } 
    
}

void matrix::initialize()
{
double val= 2;
	vector<int> vec; 

for(int i=0; i<rows; i++)
{
   vec.clear(); 
   
   for(int j=0; j<col; j++)
   {
   	     val*=2; 
         vec.push_back(val); 
   }
   m1.push_back(vec); 
} 

val=3;

for(int i=0; i<rows; i++)
{
	vec.clear(); 
   for(int j=0; j<col; j++)
   {
   	val*=3;
    vec.push_back(val); 
   }
   
   
   m2.push_back(vec); 
}


val=0; 
for(int i=0; i<rows; i++)
{
	vec.clear(); 
	for(int j=0; j<col; j++)
	{
		vec.push_back(val); 
	} 
	
   m3.push_back(vec); 
  } 

}




matrix::matrix(int num_rows, int num_col)
{
   rows=num_rows;
   col=num_col;

}

int main()
{
	
matrix mtx(2,2); 
	
mtx.initialize(); 
mtx.add(); 
mtx.display_results();
	
return 0; 

}
