// Programmer: Brian Goldman Date: 10/26/2011
// File: Cipher.h Class: CS 54
// Description: The definitions for the cipher functions

#include "cipher.h"

#include<iostream>
using namespace std;

void swap(char & x, char & y)
{
  char temp = x;
  x = y;
  y = temp;
  return;
}

void reverseAll(char data[])
{
  int length = 0;
  while(data[length] != NULL)
    length++;
    
  length++;
    
  for(int i = 0; i < (length)/2; i++)
    swap(data[i], data[length - 1 - i]);
       
  return;
}

void swapAll(char data[])
{
  int index = 0;
  while(data[index+1] != NULL)
  {
    swap(data[index], data[index+1]);
    data +=2;
  }  
  return;
}

void invertAll(char data[])
{
  int index = 0, distanceIntoAlphabet;
  
  while(data[index] != NULL)
  {
    if(data[index] > 'Z' && data[index] <= 'z') 
    { 
      distanceIntoAlphabet = data[index] - 'a';
      data[index] = 'z' - distanceIntoAlphabet;
    }   
    else if(data[index] <= 'Z' && data[index] < 'a')
    {
      distanceIntoAlphabet = data[index] - 'A';
      data[index] = 'Z' - distanceIntoAlphabet;
    }
    
    index++;
  }
  return;
}

void encrypt(const char input[], char output[])
{
  int index = 0;
  while(input[index] != NULL)
  {
    output[index] = input[index];
    index++;
  }
  
  output[index] = NULL;
  
  reverseAll(output);
  swapAll(output);
  invertAll(output);
     
  return;
}

void decrypt(const char input[], char output[])
{
  int index = 0;
  
  while(input[index] != NULL)
  {
    output[index] = input[index];
    index++;
  }
   
  output[index] = NULL;
    
  invertAll(output);
  swapAll(output);
  reverseAll(output);
  
  return;
}
