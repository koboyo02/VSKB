#ifndef FN_ARRAY
#define FN_ARRAY

int my_array_len(char **array)
{
    int i = 0;
    while (array[i])
        i++;
    return i;
}

#endif /* !FN_ARRAY */