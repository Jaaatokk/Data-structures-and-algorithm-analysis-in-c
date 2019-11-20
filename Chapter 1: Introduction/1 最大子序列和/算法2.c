// O( N^2 )

int MaxSubsequenceSum( const int A[], int N )
{
    int ThisSum, MaxSum, i, j;

    MaxSum = 0;
    for ( i = 0; i < N; i++ ) // Base
    {
        ThisSum = 0;
        for ( j = i; j< N; j++ ) // From A[i] to A[j]
        {
            ThisSum += A[j];
            
            if ( ThisSum > MaxSum )
                MaxSum = ThisSum;
        }
    }

    return MaxSum;
}