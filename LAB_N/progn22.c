#include <stdio.h>
#include <math.h>

int main() {
    int i = 5;
    int sum = 0;

    do {
        sum += i;
        i += 5;
    } while (i < 25);

    int result = pow(sum, 3);
    printf("Результат (куб суми): %d\n", result);

    return 0;
}
