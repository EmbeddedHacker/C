// Probleam : Convert a string into an integer (atoi)
// Description : Convert a string to a signed integer, handling spaces, signs, and overflow.
// e.g. "-123" return -123

#include<stdio.h>
#include<limits.h>

int myAtoi(const char* str) {
    if(str == NULL) 
        return 0;

    int i = 0;
    while(str[i] == ' ')
        i++;

    int sign = 1;

    if(str[i] == '-') {
        sign = -1;
        i++;
    }
    else if (str[i] == '+') { 
        i++;
    }
    
    long result = 0;

    while( str[i] >= '0' && str[i] <='9') {
        result = result * 10 + (str[i++] - '0');
        if(result * sign > INT_MAX) 
            return INT_MAX;
        if(result * sign < INT_MIN) 
            return INT_MIN;
    }

    return (int)(result * sign);
}

// Unit test helper
void assertIntEquals(int expected, int actual, const char* testName) {
    printf("%s: %s\n", testName, expected == actual ? "TEST_PASSED" : "TEST_FAILED");
}

// Unit tests for myAtoi
void testMyAtoi() {
    assertIntEquals(123, myAtoi("123"), "Test 5.1 - Positive nummber");
    assertIntEquals(-123, myAtoi("-123"), "Test 5.2 - Negative number");
}

int main(void) {
    // testing myAtoi
    testMyAtoi();

    return (0);
}