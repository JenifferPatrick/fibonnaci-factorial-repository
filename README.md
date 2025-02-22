Fibonacci-Factorial-Repository
The codes are written in C++ to describe algorithm design using Fibonacci and Factorial series.

Fibonacci Series & Factorial Program
This project contains a C++ implementation of:

Fibonacci Series
Factorial Calculation
Author
Name: Jeniffer Muange
Reg Number: EB3/61529/22

Code Explanation
Fibonacci Series
The Fibonacci sequence is generated using iteration. Given n terms, it prints the series using two variables that store previous values.

✅ What is the Fibonacci Series?
The Fibonacci series is a sequence where each number is the sum of the previous two numbers. The first two terms are always 0 and 1.

Mathematically:

F(n) = F(n−1) + F(n−2)
Where:
F(0) = 0
F(1) = 1
F(2) = 0 + 1 = 1
F(3) = 1 + 1 = 2
F(4) = 1 + 2 = 3, and so on.
✅ Code Breakdown
Input Handling: The user enters how many terms they want.
Loop Execution: A for loop runs n times, printing each Fibonacci number.
Efficient Calculation: Each Fibonacci number is calculated without recursion, making it efficient.
Runtime Measurement: The execution time of the Fibonacci function is measured in microseconds.
🛠 How to Compile & Run:
sh
Copy
Edit
g++ fibonacci.cpp -o fibonacci
./fibonacci
Factorial Calculation
The factorial of a number n is computed iteratively. The factorial of n is given by:
n! = n × (n-1) × (n-2) × ... × 1

✅ Code Breakdown
Input Handling: The user is prompted to enter a number.
Factorial Calculation:
If the number is 0 or 1, the function immediately returns 1.
Otherwise, a for loop runs from 2 to n, multiplying all numbers.
Efficiency Considerations:
Uses an iterative approach (instead of recursion) to avoid stack overflow for large numbers.
Uses a long long variable to handle large factorial values.
Runtime Measurement: The execution time of the factorial function is measured in microseconds.
🛠 How to Compile & Run:
sh
Copy
Edit
g++ factorial.cpp -o factorial
./factorial
Design of Algorithms
Fibonacci Series:
Time Complexity: O(n) — We calculate each Fibonacci number once.
Space Complexity: O(1) — The space usage is constant because we only use a fixed number of variables for storing the previous two terms.
Factorial Calculation:
Time Complexity: O(n) — The loop iterates n times to compute the factorial.
Space Complexity: O(1) — Since we use a single variable for the result, the space complexity remains constant.
