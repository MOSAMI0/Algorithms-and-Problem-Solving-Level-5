#include <iostream>
#include "clsDblLinkedList.h" // Assuming the class is saved in this header file

using namespace std;

int main() {
    clsDblLinkedList<int> list;

    // Test InsertAtBeginning
    list.InsertAtBeginning(10);
    list.InsertAtBeginning(20);
    list.InsertAtBeginning(30);
    cout << "List after InsertAtBeginning: ";
    list.PrintList();

    // Test InsertAtEnd
    list.InsertAtEnd(40);
    list.InsertAtEnd(50);
    cout << "List after InsertAtEnd: ";
    list.PrintList();

    // Test InsertAfter using Node*
    clsDblLinkedList<int>::Node* node = list.Find(20);
    if (node) {
        list.InsertAfter(node, 25);
    }
    cout << "List after InsertAfter(Node*): ";
    list.PrintList();

    // Test InsertAfter using Index
    list.InsertAfter(0, 35); // Insert after index 0
    cout << "List after InsertAfter(Index): ";
    list.PrintList();

    // Test Find
    node = list.Find(25);
    if (node) {
        cout << "Node with value 25 found: " << node->value << endl;
    }
    else {
        cout << "Node with value 25 not found" << endl;
    }

    // Test DeleteNode
    node = list.Find(20);
    if (node) {
        list.DeleteNode(node);
    }
    cout << "List after DeleteNode(20): ";
    list.PrintList();

    // Test DeleteFirstNode
    list.DeleteFirstNode();
    cout << "List after DeleteFirstNode: ";
    list.PrintList();

    // Test DeleteLastNode
    list.DeleteLastNode();
    cout << "List after DeleteLastNode: ";
    list.PrintList();

    // Test UpdateItem
    if (list.UpdateItem(1, 55)) {
        cout << "List after UpdateItem at index 1: ";
        list.PrintList();
    }
    else {
        cout << "UpdateItem failed at index 1" << endl;
    }

    // Test GetItem
    int value = list.GetItem(1);
    cout << "Item at index 1: " << value << endl;

    // Test Size
    cout << "Size of the list: " << list.Size() << endl;

    // Test IsEmpty
    cout << "Is the list empty? " << (list.IsEmpty() ? "Yes" : "No") << endl;

    // Test Clear
    list.Clear();
    cout << "List after Clear: ";
    list.PrintList();

    // Test Reverse
    list.InsertAtBeginning(60);
    list.InsertAtBeginning(70);
    list.InsertAtBeginning(80);
    cout << "List before Reverse: ";
    list.PrintList();
    list.Reverce();
    cout << "List after Reverse: ";
    list.PrintList();

    return 0;
}
