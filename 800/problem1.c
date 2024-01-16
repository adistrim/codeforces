#include <stdio.h>
 
int main()
{
    int n;
    scanf("%d", &n);
    
    if (n%2 == 0 && n != 2)
    {
        printf("YES\n");
    }
    if (n == 2)
    {
        printf("NO\n");
    }
    if (n%2 != 0)
    {
        printf("NO\n");
    }
    
    return 0;
}