#include <limits.h>

int divide(int dividend, int divisor) {
    if (dividend == INT_MIN && divisor == -1)
        return INT_MAX;

    int negative = (dividend < 0) ^ (divisor < 0);
    long dvd = labs((long)dividend);
    long dvs = labs((long)divisor);
    
    long quotient = 0;
    
    while (dvd >= dvs) {
        long temp = dvs;
        long multiple = 1;
        
        while (dvd >= (temp << 1)) {
            temp <<= 1;
            multiple <<= 1;
        }
        
        dvd -= temp;
        quotient += multiple;
    }
    
    if (negative)
        quotient = -quotient;
    
    return (int)quotient;
}
