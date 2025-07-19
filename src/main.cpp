#include "sequential_list.h"

int main(void) {
    // Create the list
    SequentialList list;

    // Check if the list is empty or full
    cout << "Is the list empty? " << (list.isEmpty() ? "Yes." : "No.") << endl; 
    cout << "Is the list full? " << (list.isFull() ? "Yes." : "No.") << endl;
    
    // Add items to the list
    list.add(1, 1);
    cout << "List:" << endl;
    list.display();

    list.add(2, 1);
    cout << "List:" << endl;
    list.display();

    list.add(3, 1); 
    cout << "List:" << endl;
    list.display();

    // Print the current size of the list
    cout << "List size: " << list.size() << endl;

    // Check again if the list is empty or full
    cout << "Is the list empty? " << (list.isEmpty() ? "Yes." : "No.") << endl; 
    cout << "Is the list full? " << (list.isFull() ? "Yes." : "No.") << endl;    
    
    // Remove the first element from the list and display the list and its current size
    list.remove(1);
    cout << "List after removing the first element:" << endl;
    list.display();
    cout << "List size: " << list.size() << endl;
    
    // Return the element at the second position
    cout << "Element at second position: " << list.get(2) << endl;
    
    // Change the value of the second element and display the list
    list.set(10, 2);
    cout << "List after modifying the second element:" << endl;
    list.display();

    return 0;
}
