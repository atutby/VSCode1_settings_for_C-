#include "header.h"

#include <cmath>
#include <set>

// Tests if argument is prime number
bool isPrime(int x){
    if (x < 2) return false;
    int bound = sqrt(x);
    int delim{2};
    while(delim <= bound && x % delim != 0)
        delim++;
    return delim > bound;
}

std::set<int> Sieve(int upper_bound) {

    std::set<int> out{1, 2};
    std::set<int> complex;
    for(int i = 3; i < upper_bound; i+=2) {
        if (complex.find(i) == complex.end()) {
            out.insert(i);
            for (int k = 2*i; k<upper_bound; k+=i)
                complex.insert(k);
        }
    }
    return out;
}