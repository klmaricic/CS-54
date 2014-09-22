//PROGRAMMER: KELSEY MARICIC    DATE: 10/12/11
//PROGRAM: stackedPlates.h
//SECTION: 3D
//PURPOSE: The user can add to, remove from, and view info on a stack of plates

#ifndef STACKED_PLATES_H
#define STACKED_PLATES_H


const int MAX_SIZE = 10; //maz number of plates allowed in the stack

// Pre: The stack contains currentSize number of integers
// Post: Prints all of the integers in the stack to the screen
// Descr: Display the contents of the stack to the screen
void printStack(const int stack[], const int& currentSize);

// Pre: The stack contains currentSize number of integers
// Post: Adds the value of toAdd to the stack if there is room
// Descr: Attempts to add the value of toAdd to the stack, returns
// true if successful
bool addToStack(int stack[], const int& toAdd, int& currentSize, const int& maxSize);

// Pre: The stack contains currentSize number of integers
// Post: Removes most recently added element from the stack,
// overwritting its value with a zero
// Descr: Attempts to remove the most recently added element from the
// stack, returns true if successful
bool removeFromStack(int stack[], int& currentSize);

#endif
