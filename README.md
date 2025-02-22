# Fibonacci-Factorial-Repository
Fibonacci series and factorial codes using C++ to show algorithm design.

# REG NUMBER: EB3/61529/22  
# NAME: Jeniffer Muange  

# Fibonacci.cpp
## Detailed Explanation:
### Function fibonacci(int n):
- The Fibonacci sequence is generated using iteration.
- It prints `n` terms using two variables that store previous values.
- The first two terms are initialized as `F(0) = 0` and `F(1) = 1`.
- Each subsequent term is calculated using `F(n) = F(n−1) + F(n−2)`.
- If `n` is non-positive, an error message is displayed.

### Main Function:
- Asks the user for the number of terms in the Fibonacci series.
- Calls `fibonacci(n)` to compute and display the sequence.
- Measures execution time using `chrono`.

# Factorial.cpp
## Detailed Explanation:
### Function factorial(int n):
- The factorial of `n` is computed iteratively.
- It initializes a variable `result = 1` and multiplies all integers from `1` to `n`.
- If `n` is negative, an error message is displayed.

### Main Function:
- Asks the user to input a non-negative number.
- Calls `factorial(n)` to compute and display the factorial value.
- Measures execution time using `chrono`.

# Design of Algorithms:
### Fibonacci Series:
- **Time Complexity:** O(n) — Since each term is computed only once.
- **Space Complexity:** O(1) — Uses constant space for two variables.

### Factorial:
- **Time Complexity:** O(n) — Iteratively computes each factorial value.
- **Space Complexity:** O(1) — Uses a single variable to store the result.
