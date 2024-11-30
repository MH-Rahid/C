#include <stdio.h>

static void counterFunction() {
    static int count = 0;  // Static variable retains its value
    count++;
    printf("Counter: %d\n", count);
}

int main() {
    counterFunction();  // Output: Counter: 1
    counterFunction();  // Output: Counter: 2
    counterFunction();  // Output: Counter: 3
    return 0;
}