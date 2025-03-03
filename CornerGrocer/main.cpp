// Everett De Bree
// CS-210
// A program for tracking the purchase frequency of produce items from Corner Grocer 

#include <iostream>
#include "ItemTracker.h"
using namespace std;

int main() {
    ItemTracker tracker;
    tracker.Load();
    int option = 0;

    while (option != 4) {
        cout << "\nMenu:\n";
        cout << "1 - Search for item amount\n";
        cout << "2 - Display all item amounts\n";
        cout << "3 - View histogram of items\n";
        cout << "4 - Exit\n";
        cout << "Select a menu option: ";
        cin >> option;
        
        if (option == 1) {
            string item;
            cout << "Item: ";
            cin >> item;
            cout << item << ": " << tracker.GetFrequency(item) << endl;
        }
        else if (option == 2) {
            tracker.PrintAll();
        }
        else if (option == 3) {
            tracker.PrintHistogram();
        }
        else if (option == 4) {
            cout << "End Program" << endl;
        }
        else {
            cout << "Invalid Input" << endl;
        }
    }
    return 0;
}