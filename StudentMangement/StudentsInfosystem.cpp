#include "Header.h"
using namespace std;

float percentage(const Student &info)
{ // Function For Calculating Percentage and Marks

    int totalmarks = info.marks1 + info.marks2 + info.marks3 + info.marks4 + info.marks5 + info.marks6; // Total Marks
    float calculatepercentage = static_cast<float>(totalmarks) / 450.0 * 100.0;                         // Percentage
    return calculatepercentage;
}

void displayMenu(Student &info)
{ // sub Menu For Selection of Stream

    int choice;
    system("color 5f");
    cout << "---------------------------------------------------------------------------------------------------------------------------------" << endl;
    cout << "Select Stream" << endl;
    cout << "---------------------------------------------------------------------------------------------------------------------------------" << endl;
    cout << "1. Science " << endl;
    cout << "2. Back To menu " << endl;
    cout << "---------------------------------------------------------------------------------------------------------------------------------" << endl;
    cout << "\nEnter Your choice 1/2: ";

    if (!(cin >> choice))
    {
        // If input is not an integer
        cin.clear();                                         // Clear error flags
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard input buffer
        system("cls");
        cout << "Invalid input. Please enter a valid choice." << endl;
    }

    switch (choice)
    {
    case 1:
        system("cls");
        // entryCode(info);
        Beep(950, 300);
        int code;

        cout << "Enter Four digit Stream Code To Entry (For Back to Previous Menu Enter Code 0000): ";
        cin >> code;

        if (code == 7005)
        {
            system("cls");
            Beep(950, 300);
            cout << "User Granted " << endl;
            scienceStream(info);
        }
        else if (code == 0000)
        {
            system("cls");
            Beep(950, 300);
            displayMenu(info);
        }

        else
        {
            system("cls");
            Beep(950, 900);
            cout << "Invalid Code, Try Again " << endl;

            displayMenu(info);
        }
        break;

    case 2:
        system("cls");
        Beep(950, 300);
        return;
        break;

    default:
        system("cls");
        cout << "Invalid Choice:\n " << endl;
        Beep(900, 600);
        displayMenu(info);
        break;
    }
}

void scienceStream(Student &info)
{ // Menu For Science Stream

    int userselect;
    system("color 6f");
    cout << "---------------------------------------------------------------------------------------------------------------------------------" << endl;
    cout << "Select Combination " << endl;
    cout << "---------------------------------------------------------------------------------------------------------------------------------" << endl;
    cout << "1.PCM/Biology " << endl;
    cout << "2.PCM/Computer Science " << endl;
    cout << "3.PCM/Statistics " << endl;
    cout << "4.Back " << endl;
    cout << "---------------------------------------------------------------------------------------------------------------------------------" << endl;
    cout << "Enter Your choice 1/2/3/4: ";

    if (!(cin >> userselect))
    {
        // If input is not an integer
        cin.clear();                                         // Clear error flags
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard input buffer
        system("cls");
        cout << "Invalid input. Please enter a valid choice." << endl;
        scienceStream(info);
    }

    switch (userselect)
    {
    case 1:
    {
        system("cls");
        //; // Biology
        Beep(950, 300);

        enterPCMDetails(info);

        int maxMarksBio = 70;

        bool validMarks = false;

        while (!validMarks)
        {
            cout << "Enter Marks of Biology: Out of " << maxMarksBio << endl;
            cin >> info.marks4;

            if (info.marks4 > maxMarksBio)
            {
                cout << "Invalid Entered Marks" << endl;
            }
            else
            {
                validMarks = true;
            }
        }
        // languages(info);
        system("cls");
        savePCM(info, "Biology");
    }

    break;

    case 2:
    {
        system("cls");
        Beep(950, 300);
        // Computer Science
        enterPCMDetails(info);

        int maxMarksCS = 70;

        bool valid = false;

        while (!valid)
        {
            cout << "Enter Marks of Computer Science: Out of " << maxMarksCS << endl;
            cin >> info.marks4;

            if (info.marks4 > maxMarksCS)
            {
                cout << "Invalid Entered Marks" << endl;
            }
            else
            {
                valid = true;
            }
        }
        // languages(info);
        system("cls");
        savePCM(info, "Computer Science");
    }
    break;

    case 3:
    {
        system("cls");
        Beep(950, 300);
        // e // Statistics
        enterPCMDetails(info);
        int maxMarksStat = 70;

        bool validenteredMarks = false;

        while (!validenteredMarks)
        {
            cout << "Enter Marks of Statistics: Out of " << maxMarksStat << endl;
            cin >> info.marks4;

            if (info.marks4 > maxMarksStat)
            {
                cout << "Invalid Entered Marks" << endl;
            }
            else
            {
                validenteredMarks = true;
            }
        }

        // languages(info);
        system("cls");
        savePCM(info, "Statistics");
    }
    break;

    case 4:
    case 5:
        system("cls");
        Beep(950, 300);
        displayMenu(info); // Back to sub Menu
        break;

    default:
        system("cls");
        cout << "Invalid choice" << endl;
        scienceStream(info);
        break;
    }
}

void loadStudentData(const Student &info)
{

    ifstream infile;
    string fileName;
    cout << "Enter the Your Roll No: ";
    string rollno;
    cin >> rollno;

    const string path = "Saves\\data\\";

    fileName = path + "student_" + rollno + ".txt";

    system("cls");

    infile.open(fileName.c_str());

    if (!infile)
    {
        cout << "Error. Invalid Roll No." << endl;
        Beep(900, 600);
        cout << "Press Any Key to Continue" << endl;
        getch();
        system("cls");
        return;
    }

    string line;
    while (getline(infile, line))
    {
        cout << line << endl;
    }

    infile.close();
    cin.ignore();

    infile.close();
    cout << "Press Any Key to Continue" << endl;
    getch();
    system("cls");
    return;
}

void enterMarks(const string &subjects, int &marks, int maxMarks)
{
    bool enteredMarks = false;

    while (!enteredMarks)
    {
        cout << "Enter Marks of " << subjects << ": Out of " << maxMarks << endl;
        cin >> marks;

        if (marks > maxMarks)
        {

            cout << "\nInvalid Entered Marks" << endl;
        }
        else
        {
            enteredMarks = true;
        }
    }
}

void enterPCMDetails(Student &info)
{

    enterDetails(info);
    int maxMarksPhysics = 70;
    int maxMarksChemistry = 70;
    int maxMarksMaths = 80;
    int maxMarkskannada = 80;
    int maxMarksEnglish = 80;

    cout << "---------------------------------------------------------------------------------------------------------------------------------" << endl;
    cout << "Enter Marks of " << info.name << endl;
    cout << "---------------------------------------------------------------------------------------------------------------------------------" << endl;

    enterMarks("Physics", info.marks1, maxMarksPhysics);
    enterMarks("Chemistry", info.marks2, maxMarksChemistry);
    enterMarks("Maths", info.marks3, maxMarksMaths);
    enterMarks("kannada", info.marks5, maxMarkskannada);
    enterMarks("English", info.marks6, maxMarksEnglish);

    // system("cls");
}

void savePCM(const Student &info, const string &subject)
{
    string grade;
    const string path = "Saves\\data\\";
    string filename = path + "student_" + to_string(info.rollno) + ".txt";
    ofstream outfile(filename);

    if (!outfile.is_open())
    {
        cerr << "Error Opening File, Make Sure The Path is Correct and Try Again!" << endl;
        return;
    }

    if (outfile.is_open())
    {
        const string subjects[] = {"Physics", "Chemistry", "Maths", subject, "Kannada", "English"};
        const int marks[] = {info.marks1, info.marks2, info.marks3, info.marks4, info.marks5, info.marks6};

        cout << info.name << "'s"
             << " Marks Card: " << endl;
        outfile << info.name << "'s"
                << " Marks Card " << endl;
        outfile << "--------------------------------------------------------" << endl;
        cout << "--------------------------------------------------------" << endl;
        cout << info.exam << ":" << endl;
        outfile << info.exam << ":" << endl;
        cout << "------------------------------------------------------------" << endl;
        outfile << "--------------------------------------------------------" << endl;
        cout << "--------------------------------------------------------" << endl;
        outfile << "\nStudent Name: " << info.name << endl;
        cout << "\nStudent Name: " << info.name << endl;
        outfile << "Student Rollno: " << info.rollno << endl;
        cout << "Student Rollno: " << info.rollno << endl;
        outfile << "Student School/college Name: " << info.school << endl;
        cout << "Student School/college Name: " << info.school << endl;
        outfile << "--------------------------------------------------------" << endl;
        cout << "--------------------------------------------------------" << endl;

        for (int i = 0; i < 6; i++)
        {
            outfile << "Student Marks in " << subjects[i] << ": " << marks[i] << " / " << (i == 2 ? "80" : "70") << endl;
            cout << "Student Marks in " << subjects[i] << ": " << marks[i] << " / " << (i == 2 ? "80" : "70") << endl;
        }

        int totalmarks = info.marks1 + info.marks2 + info.marks3 + info.marks4 + info.marks5 + info.marks6;
        float calculatepercentage = static_cast<float>(totalmarks) / 450.0 * 100.0;

        outfile << "--------------------------------------------------------" << endl;
        cout << "--------------------------------------------------------" << endl;
        outfile << "Total Marks: " << totalmarks << " / 450" << endl;
        cout << "Total Marks: " << totalmarks << " / 450" << endl;
        outfile << "Percentage: " << calculatepercentage << "%" << endl;
        cout << "Percentage: " << calculatepercentage << "%" << endl;
        outfile << "--------------------------------------------------------" << endl;
        cout << "--------------------------------------------------------" << endl;

        grade = (calculatepercentage > 88) ? "A+" : (calculatepercentage >= 80) ? "A" // Using Ternary Operator For Grading System And Result
                                                : (calculatepercentage >= 75)   ? "B+"
                                                : (calculatepercentage >= 60)   ? "B"
                                                : (calculatepercentage >= 45)   ? "C+"
                                                : (calculatepercentage >= 35)   ? "C"
                                                                                : "F";

        outfile << "Grade: " << grade << endl;
        cout << "Grade: " << grade << endl;

        calculatepercentage >= 35 ? (outfile << "Result: Pass" << endl, cout)
                                  : (outfile << "Result: Fail" << endl, cout);

        outfile << "--------------------------------------------------------" << endl;
        cout << "--------------------------------------------------------" << endl;

        cout << "\nFile Saved " << endl; // Displaying A Message That File Has Sucessfully Saved
        outfile << "\n";

        system("pause"); // Pause the program until a key is pressed
        system("cls");
        Student nonConstInfo = info; // Create a non-const copy of info
        PopMenu(nonConstInfo);

        outfile.close();

        if (outfile.fail())
        {
            cerr << "Error Closing File, Try Again!" << endl; // Perform any necessary cleanup or error handling here
            return;
        }
    }
}

void enterDetails(Student &info)
{
    string exitCode = "exit";
    cout << "Disclaimer: Enter Information Of Student Correctly Once the Proccess is done Information Cannot Be Changed or Edited!" << endl;

    cout << "---------------------------------------------------------------------------------------------------------------------------------" << endl;
    cout << "Enter Details" << endl;
    cout << "---------------------------------------------------------------------------------------------------------------------------------" << endl;
    cout << "Enter Student Name: " << endl;
    cin.ignore(); // Clear the input buffer
    getline(cin, info.name);

    // if (info.name == exitCode)
    // {
    //     system("cls");
    //     displayMenu(info);
    //     return;
    // }

    bool validrollno = false;
    while (!validrollno)
    {
        cout << "Enter Roll Number: ";
        if (!(cin >> info.rollno))
        {
            cout << "Error! Enter Numeric Value For RollNo " << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        else
        {
            validrollno = true;
        }
    }
    cout << "Enter School/College: " << endl;
    cin.ignore(); // Clear the input buffer
    getline(cin, info.school);
    cout << "Enter Examination" << endl;
    getline(cin, info.exam);
}

void aboutSection()
{
    cout << "---------------------------------------------------------------------------------------------------------------------------------" << endl;
    // cout << "About: \nA Mini StudentMarksCard Generator/Reader Project Made By Akshay RH, Class 11 Student v1.13" << endl;
    cout << "---------------------------------------------------------------------------------------------------------------------------------" << endl;
    cout << "\nUpdates: \n1. Removed Commerce Stream" << endl;
    cout << "2. Added Some Basic Design to UI" << endl;
    cout << "3. Added Examination Name" << endl;
    cout << "4. Added Student Name in Marks Card Entry Field" << endl;
    cout << "5. Added PopMenu" << endl;
    cout << "6. Added Student Record Deleting Feature" << endl;
    cout << "7. Added Now System will not accept non-numeric Values as Rollno" << endl;
    cout << "6. Added if user Enter Marks More Than limit, Display error Message" << endl;
    cout << "---------------------------------------------------------------------------------------------------------------------------------" << endl;
    cout << "Press Any Key to Continue" << endl;
    getch();

    cout << "\033[2J\033[H"; // ASCi Code for Clearing
    animateText("Loading...", 100);

    string command = "notepad ReadMe.txt";
    system(command.c_str());

    cout << "\033[2J\033[H";

    cout << "Thank You For Reading" << endl;
    cout << "\033[2J\033[H";
    return;
}

void PopMenu(Student &info)
{

    char user;
    cout << "---------------------------------------------------" << endl;
    cout << "Menu";
    cout << "---------------------------------------------------" << endl;
    cout << "Press 'y' to continue with the same stream." << endl;
    cout << "Press 'o' to change streams." << endl;
    cout << "Press 'n' to go back to the main menu." << endl;
    cout << "---------------------------------------------------" << endl;
    cout << "(y/o/n): ";
    cin >> user;

    if (user == 'y')
    {
        /* code */
        system("cls");
        Beep(950, 300);
        enterDetails(info);
    }
    else if (user == 'n')
    {
        /* code */
        system("cls");
        Beep(950, 300);
        return;
    }
    else if (user == 'o')
    {
        /* code */
        system("cls");
        Beep(950, 300);
        displayMenu(info);
    }
    else
    {
        system("cls");
        Beep(950, 900);
        cout << "Invalid choice please select correct option" << endl;
        PopMenu(info);
    }
}

void deleteStudentRecord(const string &rollNumber) // Function to delete student record
{

    const string path = "Saves\\data\\";
    string filename = path + "student_" + rollNumber + ".txt";
    if (remove(filename.c_str()) != 0)
    {
        cout << "Error, Roll No Not Found" << endl;
        Beep(900, 900);
        return;
    }
    else
    {
        cout << "Student " << rollNumber << " Marks Card Deleted " << endl;
        cout << "Press Any Key to Continue" << endl;
        getch();
        system("cls");
        return;
    }
}

void animateText(const string &text, int delay)
{
    for (char c : text)
    {
        cout << c;
        Sleep(delay); // Sleep for 'delay' milliseconds
    }
}