#include <stdio.h>
int main() {
    int bill;
    scanf("%d", &bill);

    if (bill >= 5000)
        printf("%d", bill - (bill * 10 / 100));
    else
        printf("%d", bill - (bill * 5 / 100));

    return 0;
}