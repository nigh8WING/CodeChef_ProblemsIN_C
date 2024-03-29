#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T;
    scanf("%d", &T);

    while(T--)
    {
        int N, X;
        scanf("%d%d", &N, &X);
        int A[N];
        int B[N];

        for(int i = 0; i < N; i++){
            scanf("%d", &A[i]);
        }

        for(int i = 0; i < N; i++){
            scanf("%d", &B[i]);
        }

        int total = 0;

        for(int i = 0; i < N; i++){
            if(A[i] < X){
                B[i] = 0;
            }
            else if(A[i] >= X){
                total += B[i];
            }
        }
        printf("%d\n", total);
    }

    return 0;
}