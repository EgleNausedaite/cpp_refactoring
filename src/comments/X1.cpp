#include "comments/X1.h"

namespace refactoring::comments {

int Maths::sumSquaresOverRange(int lowerBound, int upperBound) {
    int sum = 0;

    for (int number = lowerBound; number <= upperBound; number++) {
        sum += square(number);
    }

    return sum;
}

int Maths::square(int number) {
    return number * number;
}

} // namespace refactoring::comments
