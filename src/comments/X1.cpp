#include "comments/X1.h"

namespace refactoring::comments {

int Maths::sumSquaresOverRange(int lowerBound, int upperBound) {
    int sum = 0;

    for (int i = lowerBound; i <= upperBound; i++) {
        sum += square(i);
    }

    return sum;
}

int Maths::square(int number) {
    return number * number;
}

} // namespace refactoring::comments
