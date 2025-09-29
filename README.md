Operators in C++

Aim
This repository contains three C++ programs that demonstrate decision-making using conditional constructs:

- **Positive-Negative Checker**: Determines whether a number is positive, negative, or zero.
- **Grading System**: Assigns a grade based on marks entered by the user.
- **Point Coordinates**: Identifies the quadrant or axis location of a point using its coordinates.

Theory
C++ is a structured, high-performance programming language that supports both procedural and object-oriented paradigms. These programs showcase how decision-making and logical evaluation are implemented using control statements and operators.

Operators Used
- **Relational Operators**: `>`, `<`, `>=`, `<=`, `==`, `!=`  
  Used for comparing values.

- **Logical Operators**: `&&`, `||`, `!`  
  Used for combining multiple conditions.

- **Assignment Operator**: `=`  
  Used for storing values in variables.

- **Arithmetic Operators**: `+`, `-`, `*`, `/`  
  Used for basic calculations (grading logic or coordinate math).

These operators are applied within `if-else` constructs to evaluate conditions and guide program flow. Input is captured using `cin`, and output is displayed using `cout`, both part of the `iostream` library.

Program Overview
Positive-Negative Checker
- Accepts an integer input.
- Uses relational operators to check its sign.
- Displays whether the number is **positive**, **negative**, or **zero**.

Grading System
- Accepts marks from the user.
- Evaluates the input using relational and logical operators.
- Assigns grades based on predefined ranges:
  - `O` for marks ≥ 90
  - `A+` for marks ≥ 80
  - `A` for marks ≥ 70
  - `B+` for marks ≥ 60
  - `B` for marks ≥ 50
  - `F` for marks < 50

Point Coordinates
- Accepts two inputs: `x` and `y`.
- Determines the location of the point:
  - **Origin** if both `x` and `y` are 0
  - **X-axis** if `y` is 0
  - **Y-axis** if `x` is 0
  - **Quadrant I–IV** based on the signs of `x` and `y`

Conclusion
These programs highlight how structured logic in C++ transforms real-world decisions into executable actions. Whether it's evaluating numerical signs, assigning academic grades, or pinpointing coordinates, each task reinforces the power of:

- Conditional constructs
- Relational and logical operators
- Structured programming

Mastering these fundamentals is essential for building intelligent, responsive applications.
