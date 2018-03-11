//https://www.jianshu.com/p/fcc3dabefd6e
#include <stdio.h>
#include <ctype.h>
int main()
{
    char line[81], *p = line, *i;
    fgets(line, 81, stdin);
    
    while(*++p);                                        /* go to the end of the string */
    while(p > line)
    {
        while(isspace(*--p)) ;                          /* find the end of a word */
        while(p > line && !isspace(*(p - 1))) p--;      /* find the start of the word */         
        for(i = p; *i && !isspace(*i); putchar(*i++));  /* print the word */
        putchar(p == line ? '\0' : ' ');
    }

    return 0;
}
