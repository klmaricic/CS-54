//PROGRAMMER: KELSEY MARICIC  DATE: 11/2/11
//FILE: CipherMain.cpp   Class: CS 54
//DESCRIPTION: Either encryptes or decryptes some text from a file

#include<iostream>
#include<fstream>
#include "Cipher.h"
using namespace std;

int main()
{
  ifstream fin;
  ofstream fout;
  char fileNameF[1000], fileNameO[1000], dataLine[1000], processedData[1000];
  int encryptFlag, numLines = 0;
  
  cout<<"Hello! This program either encryptes or decryptes data"<<endl;
  
  do
  {
    cout<<"What is the name of the file you wan to get the data from?"<<endl;
    cin>>fileNameF;
  
    fin.clear();
    fin.open(fileNameF);
    
    if(!fin)
      cout<<"That is not a valid file name. Please try again."<<endl;
      
  }while(!fin);
  
  cout<<"What is the name of the file you want to save the data to?"<<endl;
  cin>>fileNameO;
  
  fout.open(fileNameO);
  
  fin>>encryptFlag;
  
  if(encryptFlag == 0)
  {
    fin>>numLines;
    fout<<1<<endl;
    fout<<numLines<<endl;
    
    fin.ignore(500, '\n');
    
    for(int i = 0; i < numLines; i++)
    {
      fin.getline(dataLine, 1000, '\n');
      encrypt(dataLine, processedData);
      fout<<processedData<<endl;
    }
  }
  else
  {
    fin>>numLines;
    fout<<0<<endl;
    fout<<numLines<<endl;
    
    fin.ignore(500, '\n');
    
    for(int i = 0; i < numLines; i++)
    {
      fin.getline(dataLine, 1000, '\n');
      decrypt(dataLine, processedData);
      fout<<processedData<<endl;
    }
  }
  
  fin.close();
  fout.close();
         
  return 0;
}
