#include <stdio.h>
int main()
{
    int N, i ,A = 1;

    scanf("%d",&N);

    for(i = N; i >= 1; i--){
        A = A * i;
    }
    printf("%d\n",A);

    return 0;
}
