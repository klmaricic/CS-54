//PROGRAMMER: KELSEY MARICIC   DATE:10/5/11
//SECTION: 3D
//PROGRAM: assgn5.cpp
//PURPOSE:Find the greater slope of two vectors

#include<iostream>
using namespace std;

struct Vector
{
  double x_val;
  double y_val;
};

void promptForVector(string vectorNum);
double getNonZeroInput();
void findGreatestSlope(Vector vector1, Vector vector2);

int main()
{
  Vector vector1, vector2;
 
  cout<<endl<<"Hello! This program finds which vector has the greatest slope."<<endl;
 
  promptForVector("first"); //asks user to input the first vector
  
  cout<<"Please enter the x-value"<<endl;
  vector1.x_val = getNonZeroInput(); //makes sure the user doesn't input a zero value for x of vector 1
  
  cout<<"Please enter the y-value"<<endl;
  cin>>vector1.y_val;
  
  promptForVector("second");
  
  cout<<"Please enter the x-value"<<endl;
  vector2.x_val = getNonZeroInput();  //makes sure the user doesn"t input a zero value for x of vector 2
      
  cout<<"Please enter the y-value"<<endl;
  cin>>vector2.y_val;
  
  findGreatestSlope(vector1, vector2);
  
  cout<<"Thank you for using this program! Good bye!"<<endl;
  
  return 0;          
}

void promptForVector(string vectorNum)
{
  cout<<endl<<"Please enter the "<<vectorNum<<" vector."<<endl;
}

double getNonZeroInput()//makes sure the x value is not equal to zero, so that a run-time error won't occur by dividing by 0
{ 
  double x_value;
  bool exit = true;
  
  do
  {
    cin>>x_value;
    if(x_value == 0)
    {
      cout<<"I'm sorry, that is an invalid input. Please enter a non-zero value for x."<<endl;
      exit = false;
    }
    else
      exit = true;
  }while(!exit);
  
  return x_value;
}

void findGreatestSlope(Vector vector1, Vector vector2) //finds the which vector has the greatest slope and outputs it
{
  cout<<endl;
  
  if(vector1.y_val/vector1.x_val > vector2.y_val/vector2.x_val)
    cout<<"Vector 1 has the greatest slope with the point ("<<vector1.x_val<<","<<vector1.y_val<<")"<<endl;
  else if(vector1.y_val/vector1.x_val < vector2.y_val/vector2.x_val)
    cout<<"Vector 2 has the greatest slope with the point ("<<vector2.x_val<<","<<vector2.y_val<<")"<<endl;
  else
    cout<<"Vector 1 and 2 have the same slope with vector 1 having the point of("<<vector1.x_val<<","<<vector1.y_val<<
          ") and vector 2 having the point of ("<<vector2.x_val<<","<<vector2.y_val<<")"<<endl;
}   
