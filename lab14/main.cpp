//PROGRAMMER: KELSEY MARICIC   DATE: 11/30/11
//PROGRAM: queue.cpp
//SECTION: 3D
//PURPOSE: Create a queue that you can add and remove items from

#include "queue.h"
#include <iostream>
using namespace std;

int main()
{
  Queue<int> line1;
  Queue<string> line2;
  int num;
  string words;
  
  cout<<"Hello this program creates queues of different items."<<endl<<endl;
  
  //fills the int queue
  for(int i = 0; i < 4; i++)
  {
    cout<<"Please enter an int"<<endl;
    cin>>num;
  
    line1.enqueue(num);
  }
  
  //fills the string queue
  for(int i = 0; i < 3; i++)
  {
    cout<<"Please enter a string"<<endl;
    cin>>words;
    
    line2.enqueue(words);
  }
  
  cout<<"The size of the int queue is "<<line1.size()<<endl;
  cout<<"The size of the string queue is "<<line2.size()<<endl;
  
  cout<<"The int queue will now be printed and emptied:"<<endl;
  for(int i = 0; i < 4; i ++)
  {
    cout<<line1.front()<<endl;
    line1.dequeue();
  }
  
  cout<<"The string queue will now be printed and emptied:"<<endl;
  for(int i = 0; i < 3; i++)
  {
    cout<<line2.front()<<endl;
    line2.dequeue();
  } 
    
  return 0;
}
