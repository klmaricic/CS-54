// Programmer: Brian Goldman Date: 10/26/2011 
//File: Cipher.cpp Class: CS 54
// Description: The prototypes for the cipher functions

#include <iostream>
#include "Cipher.h"
using namespace std;

int main()
{
 // declares the character arrays in use
  const int max = 100;
  
  char plain[max] = "Sooner or later, everyone comes to Babylon 5."; 
  char cipher[max]; 
  char final[max];
  
  char received[max] = "w.lihdw tvvwv-ivgsz h rmtwrzmhgvimwF";
  
  cout<<"Original Message - "<<plain<<endl;
  
  // Encrypt the data
  encrypt(plain, cipher); 
  cout<<"Encrypted Message - "<<cipher<<endl; 
  
  //Decrypt the data 
  decrypt(cipher, final); 
  cout<<"Decrypted Message - "<<final<<endl;
  
  //Decrypt the received message
  decrypt(received, final);
  cout<<"Decrypted Message - "<<final<<endl; 
  
  // Let the OS know all is well
  return 0;
}
