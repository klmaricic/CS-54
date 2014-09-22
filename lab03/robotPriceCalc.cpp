/*Kelsey Maricic
Student number: 12354344
Class section: 3D
Purpose: To calculate the profit each company would make if each company evenly divided the share of robot sales profits.
It also calculates the profit you can make by selling the remaining profit.
*/

#include <iostream>
using namespace std;

int main()
{
  //Declarations of variables
  float  price, share, profit;
  short numSold, leftOver;
  const short NUMCOMPANIES = 5;

  //Sets the price of robots to what the user inputs
  cout<<"What is the current price of robots?(ex 13.24): "<<endl;
  cin>>price;

  //Sets the number of robots sold to what the user inputs
  cout<<"What is the total amount of robots to be sold?: "<<endl;
  cin>>numSold;

  share = (numSold/NUMCOMPANIES)*price;//calculates each company's profit
  leftOver = (numSold)%NUMCOMPANIES;//calculates amount of robot sales left over
  profit = leftOver*price;//calculates your profit
   
  //Display the value of each company's profit and your profit
  cout<<"Each company makes $"<<share<<endl;
  cout<<"You can make a profit of $"<<profit<<" by selling the remaining robot sales"<<endl;
}
