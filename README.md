# Money ADT Project 💰

[![C++](https://img.shields.io/badge/Language-C++-blue.svg)](https://isocpp.org/)  
[![License](https://img.shields.io/badge/License-MIT-green.svg)](LICENSE)  

A C++ **Money Abstract Data Type (ADT)** demonstrating separate compilation, operator overloading, and percentage calculation.

---

## Table of Contents
- [Overview](#overview)  
- [File Structure](#file-structure)  
- [Features](#features)  
- [Compilation Instructions](#compilation-instructions)  
- [Example Output](#example-output)  
- [Usage](#usage)  
- [Author](#author)  

---

## Overview
This project implements a **Money ADT** with:

- Separate **interface (`Money.h`)** and **implementation (`Money.cpp`)**.  
- Arithmetic operators: `+`, `-`, `*`, `/`.  
- A `percent(int)` function to calculate a portion of the money.  
- Overloaded `<<` operator for friendly console output.

The `main.cpp` file demonstrates the class with practical examples.

---

## File Structure

MoneyProject/
│
├── Money.h ← Header file (interface)
├── Money.cpp ← Implementation file
├── main.cpp ← Application/testing program
└── README.md ← Project documentation


---

## Features
1. **Money Class**
   - Stores dollars and cents.
   - Ensures cents are always in the 0–99 range using `normalize()`.

2. **Arithmetic Operators**
   - `+` : Add two Money objects.  
   - `-` : Subtract two Money objects.  
   - `*` : Multiply by a numeric factor.  
   - `/` : Divide by a numeric divisor.  

3. **Percent Function**
```cpp
Money percent(int percentFigure) const;

Returns a Money object representing a percentage of the calling object.

Example:

Money purse(100, 10);
Money tenPercent = purse.percent(10); // $10.01


Output Operator

Overloaded << prints Money objects in $dollars.cents format.
