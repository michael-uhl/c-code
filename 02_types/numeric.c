#include <stdio.h>
#include <limits.h>
#include <math.h>

int main(void) {
    char minChar = CHAR_MIN;
    char maxChar = CHAR_MAX;

    short minShort = SHRT_MIN;
    short maxShort = SHRT_MAX;

    int minInt = INT_MIN;
    int maxInt = INT_MAX;

    long minLong = LONG_MIN;
    long maxLong = LONG_MAX;

    unsigned char maxUnsignedChar = UCHAR_MAX;
    unsigned short maxUnsignedShort = USHRT_MAX;
    unsigned int maxUnsignedInt = UINT_MAX;
    unsigned long maxUnsignedLong = ULONG_MAX; 

    printf("Signed Values\n");
    printf("Minimum char: %i\n", minChar);
    printf("Maximum char: %i\n", maxChar);
    printf("Minimum short: %i\n", minShort);
    printf("Maximum short: %i\n", maxShort);
    printf("Minimum long: %ld\n", minLong);
    printf("Maximum long: %ld\n", maxLong);

    printf("\nUnsigned Values:\n");
    printf("Maximum unsigned char: %u\n", maxUnsignedChar);
    printf("Maximum unsigned short: %u\n", maxUnsignedShort);
    printf("Maximum unsigned int: %u\n", maxUnsignedInt);
    printf("Maximum unsigned long: %lu\n", maxUnsignedLong);
  
    printf("\nSizes:\n");
    printf("Unsigned char = %f\n", log2(maxUnsignedChar));
    printf("Unsigned short = %f\n", log2(maxUnsignedShort));
    printf("Unsigned int = %f\n", log2(maxUnsignedInt));
    printf("Unsigned = %f\n", log2(maxUnsignedLong));    

    return 0;
}
