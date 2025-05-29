#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));

    for (int i = 0; i < 5; i++) {
        int randomNumber = rand() % 100 + 1;
        printf("%d\n", randomNumber);
    }

    return 0;
}