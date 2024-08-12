#include <stdio.h>

int main() {
    int num1, num2, choice;

    while (1) {
        printf("\nChoose an equation:\n"
               "1. adição (+)\n"
               "2. Subitração (-)\n"
               "3. Multiplicação (*)\n"
               "4. Divisão (/)\n"
               "5. sair\n");

        scanf("%d", &choice);

        if (choice == 5) {
            break;
        }

        printf("Digite um numero : ");
        scanf("%d %d", &num1, &num2);

        switch (choice) {
            case 1:
                printf("%d + %d = %d\n", num1, num2, num1 + num2);
                break;
            case 2:
                printf("%d - %d = %d\n", num1, num2, num1 - num2);
                break;
            case 3:
                printf("%d * %d = %d\n", num1, num2, num1 * num2);
                break;
            case 4:
                if (num2 == 0) {
                    printf("Error: Division by zero is not allowed.\n");
                } else {
                    printf("%d / %d = %.2f\n", num1, num2, (float)num1 / num2);
                }
                break;
            default:
                printf("Error: Invalid choice.\n");
                break;
        }
    }

    return 0;
}