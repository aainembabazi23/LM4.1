# Learning Module 4.1
Class: CS172 - Computer Science 2

Last Modified: 2/28/2022

Scott Griffith, Kent Jones, Pete Tucker, Qian Mao, and other CS faculty

Due time: 3/8/2022 11:59PM

---

# LM4.1 Array of Rectangles (50 pts)

You will be graded on **proper coding style**. The aspect that you should care about most is **good comments and readable code**. Each program should have a proper comment header and each line of code should be explained in some way by a comment. Variable names should make sense, function names should be descriptive. Each `if`/`else`, `while`, `for` loop and function statement should be properly indented, at least one tab (or 4 spaces) after a `{`.

Additionally you will be graded on proper **code re-use and functionalization**. You should be using as few variables as possible, and you should never have to use your copy/paste commands. **Functionalization** is your friend! The more you can functionalize, the better! You main function should be less than 20 lines of code.

Functions should have ***documentation**! Each function should have a set of documentation that outlines the purpose of the function, what the inputs are, their scope and what the return value is.

## LM4.1 Arrays and Functions (50 pts)

By this point you should be comfortable making simple classes. I want to see if you can figure out how to use those classes to solve a problem efficiently.

You are going to write a program that will generate 10 random rectangles and finds different metrics about them.

I would highly suggest understanding the **design** of this before starting to **write** the code.

**(12 points)** Develop and write a class that represents a **rectangle**. You are going to need to determine a rectangle's length, height and area. This should be a well formed class with appropriate interfaces and access control. You will only need **two member variables**. For this particular application, set methods for length and height are appropriate.

Your rectangle should have a method to **print** both the parameters, but also **a graphical representation** of the rectangle.

As an example for a rectangle that is h:3xl:5:
~~~~
  *****
  *   *
  ***** 
  Height: 3, Length: 5, Area: 15
~~~~

Once made a rectangle **cannot be copied**! You are going to have to interact with the rectangles without copying them around your code. Place a **single cout statement in the constructor of your rectangle**. Every time a rectangle is created the constructor will output to the screen. This should only happen 10 times total for your whole piece of code. If it prints more than 10 times, you might be generating a rectangle you don't know about. 

Optionally, you can use static variables to check that only 10 rectangles are made.

**(10 points)** Create an **array of 10 rectangles**. The value 10 should be able to easily change (I suggest a const global variable). After creating this array, assign each rectangle a **random height and length**, each between 1 and 15. This should be a for loop that uses the rectangle's set interfaces.

**(7 pts each)** Write four functions that interact with your array of rectangles:
* One function that finds the **area of all of the rectangles** in the array.
* One function that finds the **longest rectangle** and calls its print method. Deal with ties appropriately.
* One function that finds the **tallest rectangle** and calls its print method. Deal with ties appropriately.
* One function that finds the **rectangle with the largest area** and calls its print method. Deal with ties appropriately.
