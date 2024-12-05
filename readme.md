# Chinese Remainder Theorem Project

This project includes an implementation of the Chinese Remainder Theorem and related algorithms. These algorithms include the Extended Euclidean Algorithm and Modular Inverse calculation.

## Files

- `crt.h`: Header file that contains the definition of the `Crt` class and function prototypes.
- `crt.cpp`: Implementation of the functions in the `Crt` class.
- `main.cpp`: The main program that utilizes the `Crt` class and prints the results.
- `crt.pro`: Project file for use in Qt Creator.

## Main Functions

### 1. `extendedEuclidean(int a, int b, int &x, int &y)`

This function uses the Extended Euclidean Algorithm to compute the greatest common divisor (GCD) and the coefficients for Bézout's identity.

### 2. `modInverse(int a, int m)`

This function calculates the modular inverse of the number `a` under modulo `m`. If the inverse does not exist, it returns `-1`.

### 3. `chinese_remainder_theorem(const vector<int> &remainders, const vector<int> &moduli)`

This function implements the Chinese Remainder Theorem and takes a list of remainders and moduli as input. It returns `-1` if the inputs are invalid.

## How to Use

To run the project, use Qt Creator and open the `crt.pro` file. Then build and run the project. The results will be displayed in the console.

## Examples

Several examples of using the functions in the `Crt` class are provided in `main.cpp`. These examples include calculations of the Chinese Remainder Theorem and modular inverses.

## Prerequisites

- Qt 5 or higher
- C++11

## License

This project is licensed under the MIT License.