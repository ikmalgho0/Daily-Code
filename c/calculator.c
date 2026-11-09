#include <stdio.h>

int main(){
    char operator;
    double angka1, angka2;

    printf("Pilih operator (+, -, *, /): ");
    scanf("%c", &operator);

    printf("Masukkan dua angka: ");
    scanf("%lf %lf", &angka1, &angka2);

    switch (operator) {
    case '+':
        printf("%.2lf + %.2lf = %.2lf", angka1, angka2, angka1 + angka2);
        break;
    case '-':
        printf("%.2lf - %.2lf = %.2lf", angka1, angka2, angka1 - angka2);
        break;
    case '*':
        printf("%.2lf * %.2lf = %.2lf", angka1, angka2, angka1 * angka2);
        break;
    case '/':
        if (angka2 != 0.0)
            printf("%.2lf / %.2lf = %.2lf", angka1, angka2, angka1 / angka2);
        else
            printf("ERROR: Pembagian dengan 0 tidak diperbolehkan");
        break;
    default:
        printf("ERROR: Operator yang anda masukkan salah!");
    }

    return 0;
}