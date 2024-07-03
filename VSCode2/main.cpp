
#include <cstdlib>
#include <iostream>
#include <set>
#include <ctime>
#include "header.h"

using namespace std;

size_t checkPrimes(int upperBound) {
    size_t count(0);
    for (int i = 0; i < upperBound; ++i)
        if (isPrime(i))
            count++;
    return count;
}

int main(int argc, char *argv[])
{
    cout << "Hello test proj!\n" << endl;
    for (int arg=0; arg<argc; ++arg)
        cout << "Argument " << arg << " : " << argv[arg] << endl;
    cout << endl;

    for(int x=0; x < 10; ++x) {
        cout << " Checking " << x << " -> " << isPrime(x) << endl;
    }

    // Считаем количество простых чисел до border
    const size_t border(100000);
    cout << "Test run for " << border << " : ";
    clock_t start = clock();
    const size_t count{checkPrimes(border)};
    start = clock() - start;
    cout << count << " time taken : " << double(start)/CLOCKS_PER_SEC << " seconds\n";

    //---------------------
    cout << "Test run for " << border << " : ";
    start = clock();
    const set<int> rez{ Sieve(border)};
    start = clock() - start;
    cout << rez.size() << " time taken : " << double(start)/CLOCKS_PER_SEC << " seconds\n";

    system("pause");
    return 0;
}
