#include "crt.h"
#include <iostream>

using namespace std;


int main()
{
    Crt crt;
    int result = crt.chinese_remainder_theorem({2, 3, 2}, {3, 5, 7});
    cout << "Result: " << result << endl;

    result = crt.chinese_remainder_theorem({2, 7, 9}, {9, 11, 15});
    cout << "Result: " << result << endl;

    result = crt.chinese_remainder_theorem({2, 3, 6}, {9, 10, 11});
    cout << "Result: " << result << endl;

    result = crt.chinese_remainder_theorem({2, 5, 6}, {9, 10, 11});
    cout << "Result: " << result << endl;

    result = crt.chinese_remainder_theorem({2, 5, 8}, {9, 10, 13});
    cout << "Result: " << result << endl;

    result = crt.chinese_remainder_theorem({49, 76, 65}, {99, 97, 95});
    cout << "Result: " << result << endl;

    result = crt.chinese_remainder_theorem({31, 76, 65}, {99, 97, 95});
    cout << "Result: " << result << endl;

    result = crt.chinese_remainder_theorem({1, 2, 3, 4, 5, 6, 7, 8}, {2, 3, 5, 7, 11, 13, 17, 19});
    cout << "Result: " << result << endl;

    cout << "=============================== modInverse - extendedEuclidean ===============================" << endl;

    int x, y;
    cout << crt.modInverse(56, 98) << " - " << crt.extendedEuclidean(56, 98, x, y) << endl;
    cout << crt.modInverse(56, 17) << " - " << crt.extendedEuclidean(56, 17, x, y) << endl;
    cout << crt.modInverse(56, 9)  << " - " << crt.extendedEuclidean(56, 9, x, y) << endl;

    cout << "Finished" << endl;

    return 0;
}
