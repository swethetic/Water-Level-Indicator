#include <stdio.h>

int main() {
    float level;
    printf("Enter tank level: ");
    scanf("%f", &level);
    if(level < 0) {
        printf("Error: Invalid\n");
    }
    else if(level <= 9) {
        printf("LOW+ ALERT!!!+ FILL\n");
    }
    else if(level <= 29) {
        printf("LOW+FILL\n");
    }
    else if(level <= 70) {
        printf("MEDIUM\n");
    }
    else if(level <= 100) {
        printf("HIGH\n");
    }
    else {
        printf("Error: Invalid\n");
    }

    return 0;

}
