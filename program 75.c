#include <stdio.h>
int main() {
  int salary;
    scanf("%d", &salary);

    if (salary >= 50000)
        printf("%d", salary - (salary * 10 / 100));
    else
        printf("%d", salary);

    return 0;
}