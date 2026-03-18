// Probleam : Implement strlen 
// Description : return the length of a null-terminated string, excluding '\0'
// e.g. "hello" returns 5

#include<stdio.h>

int myStrLen(const char* str) {
    if(str == NULL)
        return 0; 

    size_t length = 0;
    while(str[length] != '\0')  
        length++;

    return length;
}

// Unit test helper
void assertLengthEquals(size_t expected, size_t actual, const char*  testName) {
    printf("%s: %s\n",testName, expected == actual ? "TEST_PASSED" : "TEST_FAILED");
}

// Unit test for myStrLen
void testMyStrLen() {
    assertLengthEquals(5, myStrLen("hello"),"Test 4.1 - Normal string");
    assertLengthEquals(0, myStrLen("") ,"Test 4.2 - Empty string");
}

int main(void) {
    // testing myStrLen
    testMyStrLen();

    return (0);
}