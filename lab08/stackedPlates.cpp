//PROGRAMMER: KELSEY MARICIC    DATE: 10/12/11
//PROGRAM: stackedPlates.cpp
//SECTION: 3D
//PURPOSE: The user can add to, remove from, and view info on a stack of plates

#include<iostream>
using namespace std;
#include "stackedPlates.h"

int main()
{
  char option;
  int currentSize = 0, plateNum;
  bool quit = false;
  int plateArray[MAX_SIZE];
  
  do
  {
    cout<<endl<<endl;
    cout<<"Hello! This program is designed to allow you to edit or view the numbers of the plates in a stack."<<endl;
    cout<<"Please choose one of the following options"<<endl;
  
    cout<<"Menu"<<endl;
    cout<<"----"<<endl;
    cout<<"1. Print the numbers of the plates in the stack"<<endl;
    cout<<"2. Add a plate to the stack"<<endl;
    cout<<"3. Remove the top plate from the stack"<<endl;
    cout<<"4. Exit"<<endl<<endl;;
    cin>>option;
    cout<<endl<<endl;
  
    switch(option)
    {
      //prints the number of the plates in the stack in the order from top to bottom
      case '1':
      case 'p':
      case 'P':
        printStack(plateArray, currentSize);
        
        break;
      
      //adds a plate with the user defined number
      case '2':
      case 'a':
      case 'A':
        cout<<"What is the number of the plate you want to add?"<<endl;
        cin>>plateNum;
        
        if(!addToStack(plateArray, plateNum, currentSize, MAX_SIZE))  //if there isn't enough space to add a plate, it exits out of the program
        {
          cout<<"There isn't enough space to add a plate."<<endl<<endl;
          quit = true;
        }
         
        break;
      
      //removes the top plate from the stack
      case '3':
      case 'r':
      case 'R':
        if(!removeFromStack(plateArray, currentSize))  //if there are no plates to remove, it exits the program
        {
          cout<<"There are no plates to remove"<<endl<<endl;
          quit = true;
        }
        break;
      
      default:
        quit = true;
    }
        
  }while(quit == false); 
  
  cout<<"Thank you for using this program. Good bye!"<<endl; 
       
  return 0;
}
