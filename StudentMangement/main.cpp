#include "Header.h"
#include "studentsinfosystem.cpp"
using namespace std;

int main()
{
    Student info; // Declearing Structure Student has info
    int userchoice;
    system("color 7e"); // Using System function for color Change of Console
    sleep(1);
    // cout << "\n\n\t\t\t\t\tWelcome ^_^";
    animateText("\n\n\n\t\t\t\t\tWelcome ^_^", 100); // Welcome TExt With Animation
    // Beep(950, 1250);
    sleep(1);
    system("cls");
    // Beep(950, 300);
    while (true)
    {
        system("color 8e");
        cout << "---------------------------------------------------------------------------------------------------------------------------------" << endl;
        cout << "\nWelcome To Student Info System App, Stay Happy to Use. A StudentManagement System Developed By Akshay RH ^_^ v1.14w" << endl; // Displaying Menu
        cout << "---------------------------------------------------------------------------------------------------------------------------------" << endl;
        cout << "\n1.Upload/Generate Student Marks Card: " << endl;
        cout << "2.Load Student Marks Card: " << endl;
        cout << "3.About/Updates" << endl;
        cout << "4.Delete Student Record" << endl;
        cout << "5.Exit:" << endl;
        cout << "---------------------------------------------------------------------------------------------------------------------------------" << endl;
        cout << "\nEnter Your choice 1/2/3/4/5: ";
        if (!(cin >> userchoice))
        {
            // If input is not an integer
            cin.clear();                                         // Clear error flags
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard input buffer
            system("cls");
            cout << "Invalid input. Please enter a valid choice." << endl;
        }
        system("cls");

        switch (userchoice)
        {
        case 1:
            Beep(950, 300);
            displayMenu(info); // calls DisplayMenu Function
            break;

        case 2:
            Beep(950, 300);
            loadStudentData(info); // Calls The stored Data
            system("cls");
            break;

        case 3:
            Beep(950, 300);
            aboutSection(); // About App
            break;

        case 4: // TO delete an student record
        {
            Beep(950, 300);
            string rollToDelete;
            cout << "Enter Student Roll No ";
            cin >> rollToDelete;
            deleteStudentRecord(rollToDelete);
            break;
        }

        case 5:
        case 6:
            // Beep(950, 600);
            // Beep(950, 300);
            animateText("\n\n\t\t\t\tThank YOu ^_^", 100);
            sleep(1);
            return 1; // Exits The Program
            break;

        default:
            system("cls");
            cout << "Invalid input. Please enter a valid choice." << endl;
            Beep(900, 600);
            break;
        }
    }

    return 0;
}