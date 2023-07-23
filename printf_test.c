#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
typedef struct spc{
char conversion_spc;
int (*f)(char *format, va_list);
}spcc;

int my_putchar(char c)
{
write(1, &c, 1);
return (1);
}

int my_putchar_wrapper(char *format, va_list args)
{
    char c = va_arg(args, int);
    return my_putchar(c);
}

int string_length(char *str)
{
int i, size = 0;

for (i = 0; str[i] != '\0'; i++)
size++;

return (size);
}
int my_put_s(char *s,va_list args)
{
int i;
char *str;
int sum = 0;

    if (s != NULL)
    {
        for (i = 0; s[i] != '\0'; i++)
        {
            sum += my_putchar(s[i]);
        }
    }
else
{
return (0);
}

return (sum);
}

int get_spc(char *format, va_list args){
int j = 0;
spcc sppc[] = {
    {'%', my_putchar_wrapper},
    {'c', my_putchar_wrapper},
    {'s', my_put_s},
    {0, NULL}
};

while (sppc[j].conversion_spc != 0)
{
if(sppc[j].conversion_spc == format[1])
{
int result = sppc[j].f(format, args);

return result;
}
j++;
}
return (0);
}

int _printf(const char *format, ...)
{
va_list args;
int i = 0;
int counter = 0;

va_start(args, format);

for (i = 0; format[i] != '\0'; i++)
{
if (format[i] != '%')
{
counter += my_putchar(format[i]);
continue;
}
else
{
counter += get_spc((char *)&format[i++], args);
}
}
va_end(args);
return (counter);
}

int main(void)
{
int size;
char *name = "ali";
size = _printf("This is %c for %s, %%\n", 'a', name);
printf("%d", size);
return (0);
}
