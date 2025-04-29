#include <stdio.h>
#include <stdlib.h>

void apotelesma(float num1, float num2) {
    float apo;

    apo = num1 + num2;
    printf("H prosthesh tou %.2f kai tou %.2f einai %.2f\n", num1, num2, apo);

    apo = num1 - num2;
    printf("H afresh tou %.2f kai tou %.2f einai %.2f\n", num1, num2, apo);

    apo = num1 * num2;
    printf("O polaplasiasmos tou %.2f kai tou %.2f einai %.2f\n", num1, num2, apo);

    apo = num1 / num2;
    printf("H dieresh tou %.2f kai tou %.2f einai %.2f\n", num1, num2, apo);
}

int main() {
    float metavliti1, metavliti2;
    printf("Dwse ton prwto arhthmo: ");
    scanf("%f", &metavliti1);
    printf("Dwse ton deutero arhthmo: ");
    scanf("%f", &metavliti2);
    apotelesma(metavliti1, metavliti2);
    system("PAUSE");
    return 0;
}
