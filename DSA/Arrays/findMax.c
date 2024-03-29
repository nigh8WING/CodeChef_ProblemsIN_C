#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T;
    scanf("%d", &T);

    while (T--)
    {
        int N, heightOfm = 0;
        scanf("%d", &N);

        int A[N];

        for (int i = 0; i < N; i++)
        {
            scanf("%d", &A[i]);
        }

        for (int i = 0; i < N; i++)
        {
            if (A[i] > A[heightOfm])
            {
                heightOfm = i;
            }
        }
        printf("%d\n", A[heightOfm]);
    }
    return 0;
}