#include <stdio.h>


int main()
{
    int num;
    while (1) {
        scanf("%d", &num);
        if (num > 99)
            continue;
        if (num == 42)
            break;
        printf("%d\n", num);
    }
    return 0;
}
