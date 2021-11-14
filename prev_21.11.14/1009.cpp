#include <stdio.h>

int main(){
    int num;
    scanf("%d", &num);
    int result[num];
    for(int i = 0; i < num; i++){
        int a, b;
        scanf("%d%d", &a, &b);
        int r = 1;
        for(int j = 0; j < b; j++){
            r = r * a;
            r = r % 10;
            if(r == 0){
                r = 10;
            }
        }
        result[i] = r;
    }
    for(int k = 0; k < num; k++)
        printf("%d \n", result[k]);
    return 0;
}
