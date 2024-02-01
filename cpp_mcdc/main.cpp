#include <stdbool.h>
#include <assert.h>

// Function to be tested
bool example_function(int a, int b, int c) {
    return (a && b) || c;
}

// Test cases for MC/DC coverage
int main() {
    assert(example_function(false, false, false) == false);
    assert(example_function(true, true, false) == true);
    return 0;
}
