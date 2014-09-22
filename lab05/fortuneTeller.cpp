//PROGRAMMER: KELSEY MARICIC    //DATE: 9/21/11
//PROGRAM: fortuneTeller.cpp
//Purpose: Simulate a fortune teller game

#include<iostream>
using namespace std;

int main()
{
  float fold;
  long  num = 0;
  
  cout<<"Hello, this is a fortune teller simulator. Please enter a positive number to begin the game."<<endl;
  cout<<"This number will determine how many times the \"fortune teller\" is \"folded\"."<<endl;
  cin>>fold;
  
  while(fold <= 0)
  {
    cout<<"That is not a valid number. Please input a positive number"<<endl;
    cin>>fold;
  } 
    
  for(int x = fold; x > 0; x--) //repeats for the number of folds that the user inputs
  {
    switch(num) //Changes the current fortune number to the next fortune
    {
      case 0:
        num = 5;
        break;
        
      case 1:
        num = 0;
        break;
          
      case 2:
        num = 6;
        break;
          
      case 3:
        num = 1;
        break;
          
      case 4:
        num = 7;
        break;
          
      case 5:
        num = 2;
        break;
          
      case 6:
        num = 4;
        break;
          
      case 7:
        num = 3;
        break;
          
      default:   //not possible to reach
        break;
    }
  }
    
  cout<<"Your fortune number is "<<num<<endl;
  cout<<"Thank you for using this program!"<<endl;
    
  return 0;
}
