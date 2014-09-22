//Name: KELSEY MARICIC      Date: 9/14/11
//section:3D 
//program: collatzConjecture
//purpose:Using collatz conjecture, determine the number of steps necesssary to reduce an integer that is greater than 0 to 1

#include <iostream>
using namespace std;

int main()
{
  long  num, numOrig, steps = 0;

  cout<<"Enter an integer greater than 0 to see how many steps it takes using Collatz Conjecture to get the number down to 1: "<<endl;
  cin>>numOrig;

  while(numOrig <= 0)
  {
    cout<<"The number you entered is not valid. Please enter another integer that is greater than 0."<<endl;
    cin>>numOrig;
  }

  num = numOrig;  //assign the user input to a new variable so the original number can be saved

  while(num !=1)
  {
    if(num%2 == 0)  //if the number is even
    {
      num = num/2;
      steps++;
    }
    else  //if the number is odd
    {
      num = 3*num +1;
      steps++;
    }
  }

  cout<<"The number of steps required to get "<<numOrig<<" to 1 is "<<steps<<endl;
}
