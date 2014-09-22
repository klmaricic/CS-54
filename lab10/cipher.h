// Programmer: Brian Goldman Date: 10/26/2011
// File: Cipher.h Class: CS 54
// D1escription: The prototypes for the cipher functions

#ifndef CIPHER_H
#define CIPHER_H

//Pre: None
//Post: None
//Description: Swaps the contents pf x and y
void swap(char & x, char & y);

//Pre: data is a null terminated character array
//Post: swaps characters with their neighbor
//Description: Given a null terminated character array, swap the adjacent characters
void swapALL(char data[]);

 //Pre: data is a null terminated character array
 // Post: Reflects each character in the alphabet
 // Description: for all letters in data, invert characters in the alphabet
 //              IE: a becomes z, b becomes y, C becomes X
 void invertAll(char data[]);
 
 // Pre: input is a null terminated character array,output can hold input
 // Post: output contains the encrypted version of input
 // Description: Encrypts the Given a null terminated character array
 void encrypt(const char input[], char output[]);
 
 // Pre: input is a null terminated character array, output can hold input
 // Post: output contains the decrypted version of input
 // Description: Decrypts the Given a null terminated character array
 void decrypt(const char input[], char output[]);
 
 #endif
//if
