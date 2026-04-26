# Overview
This repository contains the implementation of **Assignment 1** for Laboratory Work №2: "Automation of Console Application Development". The program is written in **C** and demonstrates the ability to work with arrays and functions by rearranging digits of numbers to create the maximum possible value (Variant 12).

**Author:** Kurdeko Egor, Group 13.

# Usage
The application receives the size of the array as a command-line argument. After receiving the size, it generates an array of random numbers and processes each one to find the maximum possible permutation of its digits.

The configuration in the `.replit` file is preset to execute the binary with a sample array size.

# Building
The project is built using the **GCC** compiler.
* **Source file:** `src/main.c`
* **Output binary:** `labrabota2-1`
* **Build command:**
  ```sh
  gcc -o labrabota2-1 src/main.c
  ```

The binary file is excluded from version control via the `.gitignore` file to ensure clean repository management.

# Running
After building, run the program by passing the desired array size as a command-line argument:

```sh
./labrabota2-1 <array_size>
```

Example:

```sh
./labrabota2-1 10
```

This will generate an array of 10 random numbers and print, for each one, the largest value obtainable by rearranging its digits.

## Running on Replit
The `.replit` file is configured to compile and run the program in one step. Simply press the **Run** button, or from the Shell tab execute:

```sh
gcc -o labrabota2-1 src/main.c && ./labrabota2-1 10
```
