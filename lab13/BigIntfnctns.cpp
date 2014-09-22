//NAME: Kelsey Maricic   DATE: 11/16/11
//PROGRAM: BigIntFnctns.cpp
//DESCRIPTION: Display numbers with scientific notation
//SECTION: 3

#include<ostream>
#include "BigInt.h"
using namespace std;

//constructs a new BigInt object 
//pre: none
///post: assigns the value and numberOfZeros member valus to a default value of 0
BigInt:: BigInt()
{
  value = 0;
  numberOfZeros = 0;
}

//constructs a new BigInt object and defines it with the specified values
//pre: none
//post: assigns the member values of the BigInt object to the correspoindig parameters
BigInt:: BigInt(const int & startValue, const int & startZeros)
{
  value = startValue;
  
  if(startZeros < 0)
    numberOfZeros = 0;
  else
    numberOfZeros = startZeros;
}

//makes the calling object larger by an order of magnitude
//pre: none
//post: increments th numberOfZeros value of the calling object
void BigInt:: operator !()
{
  numberOfZeros++;    
}

//outputs the big int 
//pre: out needs to be open
//post: outputs to the stream the scientific notation of the BigInt number
ostream & operator <<(ostream & out, const BigInt & number)
{
  out<<number.value;
  for(int i = 0; i < number.numberOfZeros; i++)
    out<<0;
    
  return out;
}
