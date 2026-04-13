#include <iostream>
#include <string>
#include "Account.h"
#include "123.h"
using namespace std;


int main()
{
    LinkedList Account = { NULL };
    system("cls");
    do {
        cout << "-----------------Account MANAGEMENT-----------" << endl;
        cout << "1. Show all Account" << endl;
        cout << "2. Add an Account" << endl;
        cout << "3. Delete an Account" << endl;
        cout << "4. Update an Account" << endl;
        cout << "5. Find Account" << endl;
        cout << "6.Export to file" << endl;
        cout << "7. Import to file" << endl;
        cout << "0.Exit" << endl;
        cout << "--------------------------" << endl;
        cout << "Enter your choice:";
        int choice;
        cin >> choice;
        switch (choice) {
        case 1: {
            //books.Show();
            break;
        }
        case 2: {
            //Book b;
            //cin >> b;
            //Node* newNode = new Node;
            //newNode->Create(b);
            //books.AddFirst(newNode);

            break;
        }
        case 3: {
            //int removeId;
            //cout << "Enter book`s id to remove:";
            //cin >> removeId;
            //bool res = books.Remove(removeId);
           // if (res)
                //cout << "Remove book successfully" << endl;
            //else
               // cout << "Invalid book id" << endl;
            break;
        }
        case 4: {
            //int updateId;
            //cout << "Enter book`s id to update:";
            //cin >> updateId;
            //books.Update(updateId);
            break;
        }
        case 5: {
            /*string bookName;
            cout << "Enter book`s name to find:";
            cin.ignore();
            getline(cin, bookName);
            Book* res = books.Find(bookName);
            if (res != NULL) {
                cout << *res;
            }
            else {
                cout << "No book with name:" << bookName << endl;
            }*/
            break;
        }
        case 6: {
            //books.Export("25TH1.dla");
            //cout << "Export successsfully" << endl;
            break;
        }
        case 7: {
            //books.Import("25TH1.dla");
            // cout << "Import successsfully" << endl;
            break;
        }
        case 0: {
            return 0;
        default:
            //cout << "Invavalid choice,try again" << endl;
            break;
        }
        }
        //system("pause");
        //cout << "Press any key to comtinue....";
    } while (true);
    return 0;
}
