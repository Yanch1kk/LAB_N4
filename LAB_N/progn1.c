#include <stdio.h>
#include <math.h>

int main() {
    int y, z;
    double t;
    
    while (1) {
        printf("Введіть значення y: ");
        scanf("%d", &y);
        printf("Введіть значення z: ");
        scanf("%d", &z);

        // Перевірка на ділення на нуль
        if (z - 2 * y == 0) {
            printf("Помилка: у виразі виконується ділення на 0. Задайте інші значення.\n\n");
            continue;
        }

        // Обчислення виразу під коренем
        double expr = 3.0 * y / (z - 2 * y) - y * z;

        // Перевірка на від’ємне підкореневе значення
        if (expr < 0) {
            printf("Помилка: підкореневий вираз < 0. Значення t буде невизначеним. Задайте інші значення.\n\n");
            continue;
        }

        // Обчислення функції
        t = sqrt(expr);
        printf("Результат: t = %.3lf\n", t);
        break;
    }

    return 0;
}
