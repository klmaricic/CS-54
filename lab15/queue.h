// Programmer: Brian Goldman Date: 12/06/2011
// File: queue.h Class: CS 54
// Description: A queue is a first in, first out, data structure

#ifndef QUEUE_H
#define QUEUE_H

const int MAX_QUEUE_LENGTH = 20;

template <class T>
class queue
{
  public:
    // PRE: None
    // POST: Creates an empty queue
    // Description: Creates an empty queue
    queue():end(0){}
    // PRE: The queue cannot be full
    // POST: Puts enq at the back of the queue
    // Description: Stores the passed in value enq to the end of the queue
    void enqueue(const T& enq);
    // PRE: The queue must contain at least 1 element
    // POST: Removes the front element of the queue
    // Description: Removes the oldest element in the queue
    void dequeue();
    // PRE: The queue must contain at least 1 element
    // POST: None
    // Description: Returns the oldest element in the queue
    const T& front() const;
    // PRE: None
    // POST: None
    // Description: Returns how many elements are in the queue
    int size() const;
  private:
    // keeps track of the size of the queue, and the index of the last element
    int end;
    // array to store the data
    T data[MAX_QUEUE_LENGTH];
};

#include "queue.hpp"
#endif
