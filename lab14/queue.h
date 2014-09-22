//PROGRAMMER: KELSEY MARICIC   DATE: 11/30/11
//PROGRAM: queue.h
//SECTION: 3D
//PURPOSE: Create a queue that you can add and remove items from

#ifndef QUEUE_H
#define QUEUE_H

template<class T>
class Queue
{
  private:
    T m_arr[20];
    int m_numObj;
  public:
    Queue(): m_numObj(0){}
    void enqueue(const T& enq);
    void dequeue();
    const T& front() const;
    int size() const;
    void shiftQueue();
};

#include "queue.hpp"
#endif
    
