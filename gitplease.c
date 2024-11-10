#include "stdio.h"

int main(void)
{
    int ans = 0;
    do{
        int ans = 0;
        printf("Is sandwich good?(1 = yes, 2 = no): ");
        scanf("%d",&ans);

        if (ans == 1){
            printf("yay, you are cool!\n");
            return -1;
        }
        else if (ans == 2){
            printf("boo, you're weird!\n");
            return -1;
        }
    }while(ans != 1 || ans != 2);

    return 0;
}
