# Fibonacci-Factorial-Repository

The codes are written in C++ to describe algorithm design using Fibonacci and Factorial series.

## Fibonacci Series & Factorial Program

This project contains a C++ implementation of:
- Fibonacci Series
- Factorial Calculation

## Author

**Name:** Jeniffer Muange  
**Reg Number:** EB3/61529/22  

---

## Code Explanation

### Fibonacci Series

The Fibonacci sequence is generated using iteration. Given `n` terms, it prints the series using two variables that store previous values.

#### ✅ What is the Fibonacci Series?
The Fibonacci series is a sequence where each number is the sum of the previous two numbers. The first two terms are always `0` and `1`.

Mathematically:  
- **F(n) = F(n−1) + F(n−2)**  
- Where:  
  - **F(0) = 0**  
  - **F(1) = 1**  
  - **F(2) = 0 + 1 = 1**  
  - **F(3) = 1 + 1 = 2**  
  - **F(4) = 1 + 2 = 3**, and so on.

#### ✅ Code Breakdown
- **Input Handling:** The user enters how many terms they want.  
- **Loop Execution:** A `for` loop runs `n` times, printing each Fibonacci number.  
- **Efficient Calculation:** Each Fibonacci number is calculated without recursion, making it efficient.  
- **Runtime Measurement:** The execution time of the Fibonacci function is measured in microseconds.  

#### 🛠 How to Compile & Run:
```sh
g++ fibonacci.cpp -o fibonacci
./fibonacci
