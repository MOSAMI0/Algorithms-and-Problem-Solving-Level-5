#include <iostream>
#include "clsDynamicArray.h" // Assuming the class is saved in this header file

using namespace std;

int main() {
    clsDynamicArray<int> dynamicArray(5);

    // Initialize array with values
    for (int i = 0; i < dynamicArray.Size(); i++) {
        dynamicArray.SetItem(i, (i + 1) * 10);
    }

    cout << "Initial array: ";
    dynamicArray.PrintList();

    // Test InsertAt
    dynamicArray.InsertAt(2, 25);
    cout << "After InsertAt(2, 25): ";
    dynamicArray.PrintList();

    // Test InsertAtBeginning
    dynamicArray.InsertAtBeginning(5);
    cout << "After InsertAtBeginning(5): ";
    dynamicArray.PrintList();

    // Test InsertAtEnd
    dynamicArray.InsertAtEnd(60);
    cout << "After InsertAtEnd(60): ";
    dynamicArray.PrintList();

    // Test InsertAfter
    dynamicArray.InsertAfter(3, 35);
    cout << "After InsertAfter(3, 35): ";
    dynamicArray.PrintList();

    // Test InsertBefore
    dynamicArray.InsertBefore(3, 15);
    cout << "After InsertBefore(3, 15): ";
    dynamicArray.PrintList();

    // Test Find
    int index = dynamicArray.Find(25);
    cout << "Index of value 25: " << index << endl;

    // Test GetItem
    int value = dynamicArray.GetItem(4);
    cout << "Value at index 4: " << value << endl;

    // Test DeleteItemAt
    dynamicArray.DeleteItemAt(2);
    cout << "After DeleteItemAt(2): ";
    dynamicArray.PrintList();

    // Test DeleteFirstItem
    dynamicArray.DeleteFirstItem();
    cout << "After DeleteFirstItem: ";
    dynamicArray.PrintList();

    // Test DeleteLastItem
    dynamicArray.DeleteLastItem();
    cout << "After DeleteLastItem: ";
    dynamicArray.PrintList();

    // Test DeleteItem
    dynamicArray.DeleteItem(35);
    cout << "After DeleteItem(35): ";
    dynamicArray.PrintList();

    // Test Resize
    dynamicArray.Resize(7);
    cout << "After Resize(7): ";
    dynamicArray.PrintList();

    // Test Reverse
    dynamicArray.Reverse();
    cout << "After Reverse: ";
    dynamicArray.PrintList();

    // Test Clear
    dynamicArray.Clear();
    cout << "After Clear: ";
    dynamicArray.PrintList();
    cout << "Is the array empty? " << (dynamicArray.IsEmpty() ? "Yes" : "No") << endl;

    return 0;
}