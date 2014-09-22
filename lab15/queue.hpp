// Programmer: Brian Goldman Date: 12/06/2011
// File: queue.hpp Class: CS 54
// Description: A queue is a first in, first out, data structure

template <class T>
void queue<T>::enqueue(const T& enq)
{
  data[end] = enq;
  end++;
}

template <class T>
void queue<T>::dequeue()
{
  end--;
  for(int i=0; i<end; i++)
  {
    data[i] = data[i+1];
  }
}

template <class T>
const T& queue<T>::front() const
{
  return data[0];
}

template <class T>
int queue<T>::size() const
{
  return end;
}
