//PROGRAMMER: KELSEY MARICIC   DATE: 11/30/11
//PROGRAM: queue.hpp
//SECTION: 3D
//PURPOSE: Create a queue that you can add and remove items from

#include <iostream>
using namespace std;

//adds an item to the end of the queue
//pre:the queue is not full
//post: increases the number of objects and adds a value to the first free space in the array
template <class T>
void Queue<T>:: enqueue(const T& enq)
{ 
  if(m_numObj < 20)
  {
    m_arr[m_numObj] = enq;
    m_numObj++;
  }
  else
    cout<<"The queue is already full"<<endl;
          
  return;
}

//removes the first object in the queue
//pre:the queue is not empty
//post:reduces the number of objects by removing the first one, shifts all objects one over towards the start of the queue
template <class T>
void Queue<T>:: dequeue()
{ 
  if(m_numObj > 0)
  {
    shiftQueue();
    m_numObj--;
  }
  else
    cout<<"The queue is already empty"<<endl;
      
  return;
}

//returns the value contained in the first place of the queue
//pre: there is at least one object in the queue
//post: return the value of the first object in the queue
template <class T>
const T& Queue<T>:: front() const
{
    return m_arr[0];
}

//returns the size of the queue
//pre: none
//post: returns the number of objects in the queue
template <class T>
int Queue<T>:: size() const
{
  return m_numObj;
}

//shifts everything in the queue one space towards the front
//pre: there are at least 2 objects in the array
//post: each objet in the queue is shifted one towards the start, erasing the original first object
template <class T>
void Queue<T>:: shiftQueue()
{
  if(m_numObj > 1)
  {
    for(int i = 0; i < m_numObj-1; i++)
      m_arr[i] = m_arr[i+1];
  }
      
  return;
}

