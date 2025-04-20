#include <stdio.h>
main()
{
    int value[50], i, size, count = 0, key;
    printf("enter the size of the array\n");
    scanf("%d", &size);
    printf("enter the %d elements\n", size);
    for (i = 0; i < size; i = i + 1)
    {
        scanf("%d", &value[i]);
    }
    printf("enter the key to be found\n");
    scanf("%d", &key);
    for (i = 0; i < size; i = i + 1)
    {
        if (key == value[i])
        {
            count = 1;
            break;
        }
    }
    if (count == 1)
    {
        printf("the search is successful\nthe key element %d is found at position no.%d", key, i + 1);
    }
    else
    {
        printf("the search is unsuccessful\nthe key element is not found in the given array of elements\n");
    }
}
