#ifndef SEQUENTIAL_LIST
#define SEQUENTIAL_LIST

#include <iostream>
#define SIZE 3 // Maximum size of the element array

using std::cout;
using std::endl;

class SequentialList {

    int elements[SIZE]; // Array to store the elements
    int current_size;
public:
    SequentialList(); // List creation

    bool isEmpty(); // Check if the list is empty
    bool isFull(); // Check if the list is full
    int size(); // Return the current size
    int get(int pos); // Return the value at a given position (if the position is valid)
    void set(int value, int pos); // Change the value at a given position (if the position is valid)
    void add(int value, int pos); // Add a value at a given position (if the position is valid)
    void remove(int pos); // Remove the value at a given position (if the position is valid)
    void display(); // Display the list
};

#endif
