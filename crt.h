#ifndef CRT_H
#define CRT_H

#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

class Crt
{
public:
    Crt();
    int extendedEuclidean(int a, int b, int &x, int &y);
    int modInverse(int a, int m);
    int chinese_remainder_theorem(const vector<int> &remainders, const vector<int> &moduli);
};

#endif // CRT_H
