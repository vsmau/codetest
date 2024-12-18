#include <string.h>
#include <stdio.h>

char *ft_strchr(const char *s, int c)
{
    while (*s != '\0')
    {
        if (*s == (char)c)
        {
            return ((char *)s);
        }
        s++;
    }
    if (c == '\0')
    {
        return ((char *)s);
    }
    return (NULL);

}

int main() {
    const char *str = "Hello, world!";
    char ch = 'o';
    
    char *result = ft_strchr(str, ch);
    printf("%s\n", result);

    return 0;
}