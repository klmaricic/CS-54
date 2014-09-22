//NAME: Kelsey Maricic   DATE: 11/16/11
//PROGRAM: BigInt.h
//DESCRIPTION: Display numbers with scientific notation
//SECTION: 3

#ifndef BIG_INT_H
#define BIG_INT_H
#include<ostream>
using namespace std;

class BigInt
{
  public:
    BigInt();
    BigInt(const int & startValue, const int & startZeros);
    void operator !();
    friend ostream& operator <<(ostream & out, const BigInt & number);
    
  private:
    int value, numberOfZeros;
};

#endif
