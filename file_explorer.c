#include <stdio.h>
// Make a txt file 
int main() {
    const char *filename = "log.txt";
    FILE *input = fopen(filename, "a+");

    char buffer[64];

    printf("give me some wisdom: ");
    fgets(buffer, sizeof(buffer), stdin);

    fprintf(input, "%s\n", buffer);

    int myage = 20; 
    printf("%p\n", &myage);
}