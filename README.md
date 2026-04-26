# Overview
This repository contains the implementation of **Assignment 1** for Laboratory Work №2: "Automation of Console Application Development". The program is written in **C** and demonstrates the ability to work with arrays and functions by rearranging digits of numbers to create the maximum possible value (Variant 12).

**Author:** Kurdeko Egor, Group 13.

# Usage
The application receives the size of the array as a command-line argument. After receiving the size, it generates an array of random numbers and processes each one to find the maximum possible permutation of its digits.

The configuration in the `.replit` file is preset to execute the binary with a sample array size.

# Building
The project is built using the **GCC** compiler.
* **Source file:** `src/main.c` 
* **Output binary:** `bin/labrabota2-1`
* **Build command:** `gcc -o bin/labrabota2-1 src/main.c` 

The binary file is excluded from version control via the `.gitignore` file to ensure clean repository management.