#include <iostream>  // For Handling c++ Input Ouput Operators
#include <fstream>   // For File Handling
#include <string>    // For String Functions
#include <limits>    // For Error Input handling
#include <unistd.h>  // For Sleep Function
#include <windows.h> // For Windows Functions Like Beep Sounds
#include <conio.h>   // For getch Function

// Header.h

#ifndef HEADER_H
#define HEADER_H

#include <string>

using namespace std;

struct Student // Creating Structure Student
{

    string name;
    string exam;
    int rollno;
    string school;
    int marks1, marks2, marks3, marks4, marks5, marks6;
    int totalmarks;
    float calculatepercentage;
};

// Functions
float percentage(const Student &info);                    // Function For Calculating the percentage and total marks
void displayMenu(Student &info);                          // Function For Displaying the Menu
void scienceStream(Student &info);                        // Function For Displaying Streams
void enterDetails(Student &info);                         // Function For Displaying The details Menu
void enterPCMDetails(Student &info);                      // Function For Entering The subject Information
void savePCM(const Student &info, const string &subject); // Function For Saving The Information
void loadStudentData(const Student &info);                // Function For Loading The Information
void aboutSection();                                      // Function For Application About Section
void PopMenu(Student &info);
void deleteStudentRecord(const string &rollNumber); // Function For Delete The Student Record
void animateText(const string &text, int delay);    // Function For text Animations

#endif // HEADER_H
