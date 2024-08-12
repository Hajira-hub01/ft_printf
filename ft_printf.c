#include "ft_printf.h"

ssize_t handle(va_list args, char format) 
{
    if (format == 'c') 
        return put_char(va_arg(args, int));
    else if (format == 's') 
        return put_str(va_arg(args, char *));
    else if (format == 'p') 
        return put_ptr(va_arg(args, void *));
    else if (format == 'd' || format == 'i') 
        return put_nbr(va_arg(args, int));
    else if (format == 'u') 
        return put_nbr(va_arg(args, unsigned int));
    else if (format == 'x' || format == 'X') 
        return put_hex(va_arg(args, unsigned int), format);
    else if (format == '%') 
        return put_char('%');
    return 0;
}

ssize_t ft_printf(const char *format, ...) 
{
    va_list args;
    ssize_t length = 0;

    va_start(args, format);
    while (*format) 
    {
        if (*format == '%') 
        {
            format++;
            ssize_t result = handle(args, *format);
            if (result == -1) return -1;
            length += result;
        } else 
        {
            if (put_char(*format) == -1) return -1;
            length++;
        }
        format++;
    }
    va_end(args);
    return length;
}
