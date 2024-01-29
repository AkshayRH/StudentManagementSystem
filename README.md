Student Information Management System

About:
A Mini Console Based StudentMarksCard Generator/Reader Project in C++ Made By Akshay RH, Class 11 Student

### Student Record Management Project Documentation

#### Overview:
This C++ program is a Student Record Management System with a console-based user interface. It enables users to input and manage student details, generate marks cards, load saved data, display updates, delete student records, and exit the application.

#### Core Concepts Utilized in C++:
1. **Structures:**
   - A structure named `Student` is defined to encapsulate information about a student, such as name, exam, roll number, school, and marks in different subjects.

2. **File Handling:**
   - File operations are employed for saving and loading student data. Each student's marks card is stored in a text file, and the data is retrieved when needed.

3. **Functions:**
   - The code is organized using several user-defined functions, including `percentage`, `displayMenu`, `scienceStream`, `enterDetails`, `savePCM`, and others, enhancing code readability.

4. **Arrays (Implicit):**
   - Arrays are implicitly used through structures to store multiple data points for each student, such as marks in different subjects.

5. **Control Flow (if-else, switch):**
   - Conditional statements are utilized for decision-making, handling user choices, and validating input.

6. **File I/O Streams (ifstream, ofstream):**
   - Input and output file stream classes (`ifstream` and `ofstream`) are utilized for reading from and writing to text files.

7. **Error Handling:**
   - Error handling is implemented using `cin.clear()` and `cin.ignore()` to manage invalid user input.

8. **String Manipulation:**
   - String operations are used for processing student names, school names, and textual information.

9. **Header Files (`iostream`, `fstream`, `string`, `limits`):**
   - Standard header files are included for input/output operations, file handling, and string manipulation.

10. **ASCII Escape Codes:**
    - ASCII escape codes are used to clear the console screen (`\033[2J\033[H`).

11. **Infinite Loop and Program Flow:**
    - The program employs an infinite loop (`while (true)`) to keep the application running until the user chooses to exit.

12> **Ternary Operators:**
    - Ternary Operators is used for Providing Grade And Result On Based Marks & Percentage

#### Functionality:
1. **Entering Student Details:**
   - Users can input student details like name, roll number, school/college name, and examination name.

2. **Generating Marks Cards:**
   - Marks cards are generated for students, displaying details such as marks in various subjects, total marks, percentage, grade, and result.

3. **Selecting Stream and Subjects:**
   - Students in the science stream can choose from different subject combinations, including PCM/Biology, PCM/Computer Science, and PCM/Statistics.

4. **Saving and Loading Data:**
   - Student data is saved to text files in a specified directory (`Saves/data/`). Users can later load this data using the roll number.

5. **About Section:**
   - Provides information about the project, including updates and version history.

6. **Deleting Student Records:**
   - Users can delete a student's marks card by entering the roll number. The program checks for file existence and deletes it.

#### Additional Features:
- **Sound Feedback:**
  - Beep sounds are used to provide audible feedback during specific events, enhancing the user experience.

- **PopMenu:**
  - After generating a marks card, users are presented with a pop-up menu providing options to continue with the same stream, change streams, or return to the main menu.

#### Usage:
1. **Interaction:**
   - Follow the on-screen prompts to navigate through the menu, enter student details, generate marks cards, and perform other operations.

2. **File Management:**
   - Examine the `Saves/data/` directory to find text files containing saved student data.

#### Conclusion:
This Student Record Management System demonstrates the application of various C++ concepts and features in creating a functional and interactive console application. It provides an efficient way to manage student records, generate marks cards, and perform essential operations.

#### To Compile The Code:

1. **For visual Studio Code / Visual Studio:**
   Use Command:
   g++ main.cpp -o studentinfosystem.exe in "Terminal"

   **MakeSure Mingw32 is installed in your PC**

   Thank You ^_^

