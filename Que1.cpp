#include<iostream>
#include<fstream>
#include<string>

/*
Q.No 1. Bookshop Management System
File handling has been effectively used for each feature of this project
Operations
1. Add Book Records:
2. Show Book Records:
3. Check Availability:
4. Modify Book Records:
5. Delete Book Records:
*/

using namespace std;

class Bookshop{
public:
int b_id;
string b_name;
string authorName;
int b_price;
};
void addBook()
{
    ofstream myfile;
    myfile.open("Bookshop.txt", ios::app);
   
    Bookshop book;
    cout << "\nEnter Book ID: ";
    cin >> book.b_id;
    cout << "\nEnter Book Name: ";
    cin >> book.b_name;
    cout << "\nEnter Book Author Name: ";
    cin >> book.authorName;
    cout << "\nEnter Book Price: ";
    cin>>book.b_price;
   
    myfile << book.b_id << " " << book.b_name << " " <<  book.authorName << " " << book.b_price << endl;
   myfile.close();
   
   cout << "Book Added Successfully.\n";
}
   
   void showBook()
   {
    ifstream myfile;
    myfile.open("Bookshop.txt");
   
    Bookshop book;
    cout << "Book Records: \n";
    while (myfile >> book.b_id >> book.b_name >> book.authorName>> book.b_price) {
        cout << "Book ID: " << book.b_id << ", Book Name: " << book.b_name << ", Author name: " << book.authorName << ", Book price: " << book.b_price << endl;
    }
    myfile.close();
}

int main()
{
int choice;
    do {
        cout << "1. Add Book\n";
        cout << "2.  Show Book Record\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: \n";
        cin >> choice;

        switch (choice) {
            case 1:
                addBook();
                break;
            case 2:
                showBook();
                break;
            case 3:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 3);

    return 0;
}



