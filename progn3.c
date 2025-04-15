#include <stdio.h>

int main() {
    int n, x;
    double sum = 0;

    // Введення значень
    printf("Введіть натуральне число n: ");
    scanf("%d", &n);

    printf("Введіть ціле число x (x ≠ 0): ");
    scanf("%d", &x);

    // Перевірка, щоб не ділити на 0
    while (x == 0) {
        printf("Помилка: x не може дорівнювати 0. Введіть інше значення x: ");
        scanf("%d", &x);
    }

    // Обчислення суми добутків
    for (int i = 1; i <= n; i++) {
        double product = 1;
        for (int j = 1; j <= i; j++) {
            product *= (double)j / x;
        }
        sum += product;
    }

    // Виведення результату
    printf("Результат: %.5lf\n", sum);

    return 0;
}