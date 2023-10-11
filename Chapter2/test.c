void inplace_swap(int *x, int *y)
{
    *y = *x ^ *y; // Step 1
    *x = *x ^ *y; // Step 2
    *y = *x ^ *y; // Step 3
}

void reverse_array(int a[], int cnt)
{
    int first, last;
    for (first = 0, last = cnt - 1; first < last; first++, last--)
        inplace_swap(&a[first], &a[last]);
}