#include <stdio.h>
 int main()
{
    int cases, caseno = 0, a, b;
    scanf("%d", &cases);
    while( cases-- ) {
        scanf("%d %d", &a, &b);
        printf("Case %d: %d\n", ++caseno, a + b);
    }
    return 0;
}
