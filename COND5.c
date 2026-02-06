#include <stdio.h>
int main() {
    int age, student, price;
    scanf("%d %d", &age, &student);
    if (age < 12) {
        price = 50;
    } else if (age <= 60) {
        if (student == 1) {
            price = 80;
        } else {
            price = 100;
        }
    } else {
        price = 60;
    }
    printf("%d\n", price);
    return 0;
}
