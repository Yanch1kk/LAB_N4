#include <stdio.h>
#include <math.h>

int main() {
    int sum = 0;

    for (int i = 5; i < 25; i += 5) {
        sum += i;
    }

    int result = pow(sum, 3);
    printf("Результат (куб суми): %d\n", result);

    return 0;
}
