// Programmer: Brian Goldman Date: 10/26/2011
// File: Cipher.cpp Class: CS 54
// Description: The implementations for the cipher functions

#include "Cipher.h"
#include <cstring>
#include <iostream>
using namespace std;

void swap(char & x, char & y)
{
  // stores a in a temporary variable
  char temp=x;
  // put y into x
  x=y;
  // put x's old value into y
  y=temp;
}

void reverseAll(char data[])
{
  // get the length of the string
  int length = strlen(data);
  for(int i=0;i<length/2;i++)
  {
    // swap i with i from the end
    swap(data[i],data[length-i-1]);
  }
}

void swapAll(char data[])
{
  // get the length of the string
  int length = strlen(data);
  for(int i=0;i<length-1; i+=2)
  {
    // swap adjacent characters
    swap(data[i],data[i+1]);
  }
}

void invertAll(char data[])
{
  // loop until the working character is null
  for(int i=0;data[i] !='\0';i++)
  {
    // reflects A-Z and a-z values
    if(isupper(data[i]))
    {
      data[i] = 'Z' - data[i] +'A';
    }
    else if(islower(data[i]))
    {
      data[i] = 'z' - data[i] +'a';
    }
  }
}

void encrypt(const char input[], char output[])
{
  // copy the input into the output
  strcpy(output, input);
  // reverse the characters in output
  reverseAll(output);
  // swap adjacent characters in output
  swapAll(output);
  // invert the letters in output
  invertAll(output);
}

void decrypt(const char input[], char output[])
{
  strcpy(output, input);
  // invert the letters in output
  invertAll(output);
  // swap adjacent characters in output
  swapAll(output);
  // reverse the characters in output
  reverseAll(output);
}
