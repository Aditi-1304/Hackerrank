#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, i;
    scanf("%d", &num);
    int arr[num];
    for(i = 0; i < num; i++) {
        scanf("%d", &arr[i]);
    }
    int b[num];
    int t=num-1;
    for(i = 0; i < num; i++) {
        b[t]=arr[i];
        t--;
    }

    for(i = 0; i < num; i++)
        printf("%d ", b[i]);
    return 0;
}
