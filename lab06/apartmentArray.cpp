//PROGRAMMER: KELSEY MARICIC        DATE:9/28/11
//PROGRAM: apartmentArray.cpp
//PURPOSE: To ask the usr to input apartment info and then find the cheapest apartment within the given distance
//SECTION: 3D

#include<iostream>
using namespace std;

struct Apartment  //constructs an apartment with the data of distance from work, price of the apartment, and its phone number
{
  float distance, price;
  long phoneNum;
};
        

int main()
{
  const short MAX_APARTMENTS = 10;
  short numApartments, finalApartmentIndex = 0;  //finalApartmentIndex is the index of the apartment in the array that is within the given distance and is the cheapest. numApartments is how many apartments are available
  float maxDistance; //how far the user is willing to travel
  
  Apartment apartmentArray[MAX_APARTMENTS];
  
  cout<<"How many apartments are available? (Must be less than 10)"<<endl;
  cin>>numApartments;
  
  while(numApartments > MAX_APARTMENTS || numApartments < 0) //makes sure input is valid
  {
    cout<<"That is not a valid input. Please enter a number between 0 and 10 for the number of available apartments."<<endl;
    cin>>numApartments;
  }
  
  for(int i = 0; i < numApartments;i++) //gathers and inputs the data of each apartment into the array
  {
    cout<<endl;
    cout<<"Please input the distance apartment "<<i+1<<" is from the place of work or school"<<endl;
    cin>>apartmentArray[i].distance;
    
    while(apartmentArray[i].distance < 0) //makes user enter valid input
    {
      cout<<"That is not a valid input. Please enter a distance greater than 0."<<endl;
      cin>>apartmentArray[i].distance;
    }
    
    cout<<"Please input the price of apartment "<<i+1<<endl;
    cin>>apartmentArray[i].price;
    
    while(apartmentArray[i].price < 0) //makes user enter valid input
    {
      cout<<"That is not a valid input. Please enter a price greater than 0."<<endl;
      cin>>apartmentArray[i].price;
    }
    
    cout<<"Please enter the phone number of apartment "<<i+1<<" (ex:4557682)"<<endl;
    cin>>apartmentArray[i].phoneNum;
    
    while(apartmentArray[i].phoneNum < 0)  //makes user enter valid input
    {
      cout<<"That is not a valid input. Please enter a phone number greater than 0."<<endl;
      cin>>apartmentArray[i].phoneNum;
    }      
  }
  
  cout<<"What is the maximum distance you are willing to travel for the apartment"<<endl;
  cin>>maxDistance;
  cout<<endl;
  
  while((finalApartmentIndex < numApartments) && (apartmentArray[finalApartmentIndex].distance > maxDistance)) //finds the index of the first apartment to fit the distance requirement
  {
    finalApartmentIndex++;
  }
  
  if(finalApartmentIndex < numApartments) //if there is an apartment that fits the distance requirement
  { 
    for(int j = finalApartmentIndex;j < numApartments-1; j++) //finds the index of the cheapest apartment that meets the distance requirement
    {
      if((apartmentArray[finalApartmentIndex].price > apartmentArray[j+1].price) && (apartmentArray[j+1].distance <= maxDistance))
        finalApartmentIndex = j+1;
    }
  
    cout<<"The price of the cheapest apartment within your travel distance is: $"<<apartmentArray[finalApartmentIndex].price<<" per month"<<endl;
    cout<<"The phone number of the cheapest apartment within your travel distance is: "<<apartmentArray[finalApartmentIndex].phoneNum<<endl;
  }
  else  //none of the apartments meet the distance requirement
    cout<<"Error: there are no listed apartments within your travel distance."<<endl;
  
  return 0;  
}
