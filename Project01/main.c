#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#define time (unsigned long)300
void printSlowly(char* str, int size) {
    for (int i = 0; size > i; ++i) {
        printf("%c", str[i]);
        _sleep(time);
        if (strcmp(str[i], '\0') == 0) {
            break;
        }
    }
}
int main() {
    puts("Please input the sentence you want to show.");
    char input[500] = { '\0' };
    scanf("%s", input);
    system("cls");
    getch();
    printSlowly(input, 500);
    getchar();
    return 0;
}
