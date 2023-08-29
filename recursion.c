// Write a recursive function to print 10-1

#include <stdio.h>
// Recursive function to print numbers from start to end
void printNumbers(int start, int end) {
    if (start < end) {
        return; // Base case: stop recursion when start > end
    }

    printf("%d ", start); // Print the current number
    printNumbers(start - 1, end); // Recursive call for the next number
}
int main() {
    int start = 10;
    int end = 1;

    printf("Numbers from %d to %d:\n", start, end);
    printNumbers(start, end);

    return 0;
}
