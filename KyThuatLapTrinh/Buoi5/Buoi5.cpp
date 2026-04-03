#include <iostream>
using namespace std;
 
struct Author {
    int id;
    string name;
};

struct Book {
    int id;
    string name;
    Author author;
};
struct Node {
    Book data;
    Node* next;
};

struct LinkedList {
    Node* head;
};

int main()
{
    LinkedList books = { NULL };
    do {
        system("cls");
        cout << "_________ BOOK MANAGEMANT__________";
        cout << "1. Show all book" << endl;
        cout << "2. Add a book " << endl;
        cout << "3. Delete book" << endl;
        cout << "4. Update book" << endl;
        cout << "5. Find book " << endl;
        cout << "6. Export to file" << endl;
        cout << "7. Import from file" << endl;
        cout << "0. Exit " << endl;
        int choice;
        cin >> choice;
        switch (choice) {
        case 1: {
            break;
        }
        case 2: {
            break;
        }
        case 3: {
            break;
        }
        case 4: {
            break;
        }
        case 5: {
            break;
        }
        case 6: {
            break;
        }
        case 0: {
            return 0;
        default:
            cout << "Invalid choice, try again" << endl;
            break;
        }
        }
        cout << " Press any ket to continue...";
        cin.ignore();
        cin.get();
    } while (true);
    return 0;

}
