#include "crt.h"

Crt::Crt()
{

}

// Extended Euclidean algorithm to find GCD and coefficients for Bézout's identity
int Crt::extendedEuclidean(int a, int b, int &x, int &y)
{
    int prev_x = 1, prev_y = 0;
    int curr_x = 0, curr_y = 1;
    int temp_a, temp_b, quotient;

    while (b != 0)
    {
        quotient = a / b;

        // Update a and b
        temp_a = a;
        temp_b = b;
        a = temp_b;
        b = temp_a % temp_b;

        // Update x and y
        temp_a = prev_x;
        prev_x = curr_x;
        curr_x = temp_a - quotient * curr_x;

        temp_b = prev_y;
        prev_y = curr_y;
        curr_y = temp_b - quotient * curr_y;
    }

    x = prev_x;
    y = prev_y;

    return a;
}

// Function to find the modular inverse of a under modulo m using the extended Euclidean algorithm
int Crt::modInverse(int a, int m)
{
    int x, y;
    int gcd = extendedEuclidean(a, m, x, y);

    // Modular inverse doesn't exist
    if (gcd != 1)
    {
        return -1;
    }

    // Make x positive
    return (x % m + m) % m;
}

int Crt::chinese_remainder_theorem(const vector<int> &remainders, const vector<int> &moduli)
{
    // Validations
    if (moduli.size() != remainders.size() || moduli.empty())
    {
        return -1; // No solution if vectors are invalid
    }

    // Ensure all moduli are positive
    if (any_of(moduli.begin(), moduli.end(), [](int modulus)
               { return modulus <= 0; }))
    {
        return -1; // No solution if any modulus is non-positive
    }

    // Product of all moduli
    int product = accumulate(moduli.begin(), moduli.end(), 1, std::multiplies<int>());
    int total_sum = 0;

    for (size_t i = 0; i < moduli.size(); i++)
    {
        int modulus = moduli[i];
        int remainder = remainders[i];
        int partial_product = product / modulus;

        int mod_inv = modInverse(partial_product, modulus);
        if (mod_inv == -1)
        {
            return -1;
        }

        total_sum += remainder * partial_product * mod_inv;
    }

    total_sum %= product;

    return (total_sum < 0) ? total_sum + product : total_sum;
}
