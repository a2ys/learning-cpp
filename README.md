# C/C++ Questions

This is the repository where I track what I learn in C++. Syntax is the same in C and C++ unless in specific scenarios such as Header Files, Function Overloading, or Object-Oriented Programming.

> Some questions remain untouched because I can't understand how to solve them at my current level. If you know how to solve them in a beginner-friendly way, please lend a helping hand. Your contributions will help a lot of people.

## Fundamentals

### Variables and Data Types

- Declare an integer variable named `counter` and initialize it to 5.

### Operators

- Write a C expression using the modulus operator (%) to find the remainder when 15 is divided by 4.

### Control Structures

- Implement a C program that checks if a given number is even or odd and prints the result.
- Write a C program that uses a `switch` statement to display the name of a day based on the user's input (1 for Sunday, 2 for Monday, etc.).
- Write a C program that generates the Fibonacci sequence up to the 10th term using a loop.

## Arrays

### One-Dimensional Array

- Declare an array of integers named `scores` with a size of 3 and initialize it with values 85, 90, and 78.

### Array Operations

- Write a C program that initializes an array of integers with values 1 to 5 and prints each element.

### Array Search

- Write a C program that searches for a specific value in an array of integers. Print the index if found; otherwise, print a message indicating its absence.

### Multi-Dimensional Array

- Declare a 2D array named `matrix` with 3 rows and 4 columns, and initialize it with some values.

- Implement a C program that uses a loop to find and print the maximum value in a matrix.

## Functions

### Basics of Functions

- Write a C function called `calculateAverage` that takes an array of integers and its size as parameters and returns the average of the elements.

- Create a function `calculateSum` that takes an array of integers and its size as parameters and returns the sum of the elements.

- Create a C program that uses the function `calculateSum` to calculate the average of an array.

- Write a C function to check if a given number is prime or not.

- **_(Unsolved_)** Implement a C function called `mergeArrays` that takes two arrays of integers and their sizes as parameters. Merge the arrays into a new array and return the result.

### Function Overloading

- In C, there is no direct support for function overloading. Discuss why function overloading is not available in C, unlike in C++.

### Recursive Function

- Implement a recursive C function to calculate the factorial of a given positive integer.

## Pointers

### Declaration

- Declare an integer variable `num` and a pointer `ptr` to an integer. Initialize `ptr` to point to the address of `num`. Change the value of `num` through the pointer to `42`.
- Create a pointer `p` and initialize it to point to the middle element of the array.

### Dynamic Memory Allocation

- Allocate memory dynamically for an array of 10 integers using `malloc` in C or `new` in C++. Free the dynamically allocated memory using `free` in C or `delete` in C++.

### Swapping

- Write a C function called `swap` that takes two integer pointers as parameters and swaps the values they point to.

### Array Traversal

- Declare an array of integers and a pointer to the array. Use pointer arithmetic to print the elements of the array in reverse order.
- Create a function that accepts a string (character array) and returns the length of the string using pointers.

## Structures

### Declaration and Initialization of Structures

- Declare a structure named `Book` with members `title`, `author`, and `price`. Create and initialize a structure variable for a book of your choice.

### Access of Structure Variables

- Create a structure named `Date` with members `day`, `month`, and `year`. Write a function to print the date in the format "dd-mm-yyyy."

### Arrays of Structure

- Declare a structure named `Student` with members `name`, `rollNumber`, and `marks`. Create an array of structures to store information for five students.

### Arrays within Structure

- Extend the `Student` structure to include an array of grades for each student. Initialize the grades for a couple of students.

### Structure within Structures

- Declare a structure named `Department` with members `name` and `location`. Include this structure as a member of the `College` structure, which also has members for `name` and `yearEstablished`.

### Structures and Functions

- **_(Unsolved_)** Write a function that accepts an array of `Book` structures and prints the details of the book with the highest price.

### Pointers to Structure

- Write a program that uses a pointer to a structure to dynamically allocate memory for a single `Person` structure. Allow the user to input the person's details.

## Unions

### Declaration and Initialization of Unions

- Declare a union named `Value` with members `integer`, `decimal`, and `character`. Write a program to demonstrate the use of the union to store and print different types of values.

### Union with Arrays

- Extend the `Value` union to include an array of integers. Write a program to initialize and print the values of the union members.

### Union in a Structure

- Create a structure named `Employee` with members `name` and a union named `Salary` containing members for `monthlySalary` (float) and `hourlyRate` (float). The structure should indicate whether the salary is monthly or hourly.

## Challenges

- **_(Unsolved_)** Modify the `calculateAverage` function from a previous example to also return the sum of the elements. Update the main function to print both average and sum.

- Create a function that sorts an array of integers in ascending order.

- **_(Unsolved_)** Research and implement a C function that takes a variable number of arguments and calculates their sum.
