#include "sequential_list.h"

// Initialize the array
SequentialList::SequentialList() : current_size(0) {
    cout << "List created." << endl;
}

// Check if the list is empty
bool SequentialList::isEmpty() {
    return current_size == 0;
}

// Check if the list is full
bool SequentialList::isFull() {
    return current_size == SIZE;
}

// Return the current size of the list
int SequentialList::size() {
    return current_size;
}

// Return the value at a given position
int SequentialList::get(int pos) {
    // Check if the position is valid
    if (isEmpty() || pos > current_size || pos < 1) {
        return -1;
    }
    return elements[pos - 1];
}

// Change the value at a given position
void SequentialList::set(int value, int pos) {
    // Check if the position is valid
    if (isEmpty() || pos > current_size || pos < 1) {
        return;
    }
    elements[pos - 1] = value;
}

// Add a value at a given position
void SequentialList::add(int value, int pos) {
    // Check if the position is valid
    if (isFull() || pos > current_size + 1 || pos < 1) {
        return;
    }

    for (int i = current_size; i >= pos; i--) {
        elements[i] = elements[i - 1];
    }
    elements[pos - 1] = value;
    cout << "Value " << value << " added at position " << pos << "." << endl;
    current_size++;
}

// Remove a value at a given position
void SequentialList::remove(int pos) {
    // Check if the position is valid
    if (isEmpty() || pos > current_size || pos < 1) {
        return;
    }

    for (int i = pos - 1; i < current_size - 1; i++) {
        elements[i] = elements[i + 1];
    }
    current_size--;
}

// Display the entire list
void SequentialList::display() {
    for (int i = 0; i < current_size; i++) {
        cout << elements[i] << " ";
    }
    cout << endl;
}
