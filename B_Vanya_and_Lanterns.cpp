scanf("%d%d", &n, &l);
for (i = 0; i < n; i++)
    scanf("%d", &a[i]);
sort(a, a + n);
rez = 2 * max(a[0], l - a[n - 1]);
for (i = 0; i < n - 1; i++)
    rez = max(rez, a[i + 1] - a[i]);
printf("%.10f\n", rez / 2.);