//Given Project code
char* rand_string_alloc(size_t size)
{
     char *s = malloc(size + 1);
     if (s) {
        for(size_t i = 0; i < size; i++) {
            s[i] = randchar();
        }
        s[size] = '\0'
     }
     return s;
}
