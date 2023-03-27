/**
 * get_width - Get the specific width field of the format
 * @format: format specifier containing size sub-specifier
 * @i: pointer to pointer to current position in format
 * @list: object Holds needed by macros
 * 
 * Return: integer; size or 0 on error
*/

int get_width(const char *format, int *i, va_list list)
{
    int width = 0;

    if (isdigit(format[*i]))
    {
        while (isdigit(format[*i]))
        {
            width = width * 10 + (format[*i] - '0');
            *i += 1;
        }
    }
    else if (format[*i] == '*')
    {
        width = va_arg(list, int);
        *i += 1;
    }

    return (width);
}
