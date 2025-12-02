#include <stdio.h>
void printNumbers();
int main() {
    printNumbers();
    return 0;
}
void printNumbers() {
    for(int i = 1; i <= 5; i++) {
        printf("%d\n", i);
    }
}

