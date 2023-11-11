#include <stdio.h>
#include <string.h>
int main()
{
    char s[20];
    int n, count = 0;
    scanf("%d", &n);
    while (n--)
    {
        scanf("%s", &s);
        char T[] = "Tetrahedron";
        char C[] = "Cube";
        char O[] = "Octahedron";
        char D[] = "Dodecahedron";
        char I[] = "Icosahedron";
        if (strcmp(s, T) == 0)
        {
            count += 4;
        }
        else if (strcmp(s, C) == 0)
        {
            count += 6;
        }
        else if (strcmp(s, O) == 0)
        {
            count += 8;
        }
        else if (strcmp(s, D) == 0)
        {
            count += 12;
        }
        else if (strcmp(s, I) == 0)
        {
            count += 20;
        }
    }
    printf("%d\n", count);
    return 0;
}