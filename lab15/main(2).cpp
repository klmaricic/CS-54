// Programmer: Brian Goldman Date: 12/06/2011
// File: main.cpp Class: CS 54
// Description: This is a test driver for the queue class

#include <iostream>
#include "queue.h"
using namespace std;

int main()
{
  // create a queue to hold numbers
  queue<int> numbers;

  // put the numbers 2, 4, and 6 into the queue
  for(int i=2; i < 8; i+=2)
  {
    cout<<"Adding: "<<i<<endl;
    numbers.enqueue(i);
  }

  // remove all of the numbers from the queue
  while(numbers.size() > 0)
  {
    cout<<"Removing: "<<numbers.front()<<endl;
    numbers.dequeue();
  }

  return 0;
}
