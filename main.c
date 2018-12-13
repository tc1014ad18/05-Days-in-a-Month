#include <stdio.h>

int main() {
    int month;
    int year;
    printf("Hullo, mate!\n");
    printf("If you give me a month and a year, I can tell you how many days are on such month.\n\n");

    do {
        printf("Month (1-12): ");
        scanf("%d", &month);
        if (month < 1 || month > 12) {
            printf("Sorry mate! Wrong number.  Try again, would ya?\n");
        }
    } while (month < 1 || month > 12);

    printf("Year: ");
    scanf("%d", &year);

    switch(month) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("That month has/had 31 days.\n");
            break;
        case 2:
            if ( year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {
                printf("That month has/had 29 days.\n");
            } else {
                printf("That month has/had 28 days.\n");
            }
            break;
        default:
            printf("That month has/had 30 days.\n");
    }
    printf("\nSee you around, mate!\n");
    return 0;
}