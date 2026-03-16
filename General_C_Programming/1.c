// Probleam 1: Reverse a NULL terminated string in-place
// Description :
// Reverse a null terminated string in place e.g "start" becomes "trats"
// handle edge cases like NULL or empty string

#include<stdio.h>
#include<string.h>

void revString(char* str) {
    if(str == NULL || str[0] == '\0')
        return;             // handle NULL or empty
    int length = 0;
    while(str[length] != '\0') length++; // find length
    for(int i = 0 , j = length - 1 ; i < j ; i++, j--) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }   
}

// Unit test helper
void assertStringEquals(const char* expected, char* actual, const char* testName) {
    printf("%s : %s\n",testName, strcmp(expected,actual) == 0 ? "TEST_PASSED" : "TEST_FAILED");
}

// Unit test for revString
void testrevString() {
    char test_1[] = "hello";
    revString(test_1);
    assertStringEquals("olleh",test_1,"Test 1.1 - Normal NULL terminates string");
    char test_2[] = "";
    revString(test_2);
    assertStringEquals("",test_2,"Test 1.2 - Empty string");
}

int main(void) {
    // testing revString
    testrevString();
    return (0);
}
