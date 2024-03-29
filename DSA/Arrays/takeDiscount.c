#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T;
    scanf("%d", &T);

    while(T--)
    {
        int N, X, Y;
        scanf("%d%d%d", &N, &X, &Y);
        int A[N];

        for(int i = 0; i < N; i++)
        {
            scanf("%d", &A[i]);
        }

        int dtotal = 0, total = 0;

        for(int i = 0; i < N; i++)
        {

            total += A[i];

            if(A[i] <= Y)
            {
                A[i] = 0;
                dtotal += A[i];
            }
            else
            {
                dtotal += A[i] - Y;
            }
        }

        if((dtotal + X) < total)
        {
            printf("COUPON\n");
        }
        else
        {
            printf("NO COUPON\n");
        }
    }
    return 0;
}