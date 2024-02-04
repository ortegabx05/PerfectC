#include <stdio.h>

int main() {
    int number, div, counter = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    for (div = 1; div < number; div++) {
      if (number % div == 0) {
        counter += div;
      }
    }

    if (counter == number) {
      printf("Perfect Number\n");
    } else {
      printf("Not A Perfect Number\n");
    }

    return 0;
}
