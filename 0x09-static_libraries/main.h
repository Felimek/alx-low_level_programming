#define MAIN_H
#include <stdio.h>

/**
 * _putchar - Entry point
 * Desc: Entry
 *@c: value
 *Return: On success 1.
 */

int _putchar(char c);/*prototype _putchar*/
int _islower(int c);
int _isalpha(int c);
@@ -23,4 +30,4 @@ unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);

#endif /* MAIN_H */
#endif /* MAIN_H */
