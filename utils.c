/**
 * is_printable - Check whether a character is printable or not.
 * @c: Character to be checked.
 *
 * Return: 1 if printable, 0 otherwise.
 */
int is_printable(char c)
{
    return (c >= 32 && c <= 126);
}


/**
 * append_hexa_code - Appends hexa code of a char to a given buffer at a given index.
 *
 * @c: The character whose hexa code you wish to append to the buffer.
 * @buffer: destination to append to.
 * @buffer_index: pointer to current index of buffer, this will be incremented for the new value.
 *
 * Return: 2 after adding hexa decimal characters..
 */
int append_hexa_code(char c, char buffer[], int buffer_index)
{
    buffer[buffer_index] = '\';
    buffer[buffer_index + 1] = 'x';
    buffer[buffer_index + 2] = (c / 16) < 10 ? (c / 16) + '0' : (c / 16) - 10 + 'a';
    buffer[buffer_index + 3] = (c % 16) < 10 ? (c % 16) + '0' : (c % 16) - 10 + 'a';

    /* incrementing by 4 because we appended 4 characters*/
    return (4);
}

/**
 * is_digit - Checks if the given character is a digit or not.
 *
 * @c: The character to be checked.
 *
 * Return: 1 if digit, 0 otherwise.
 */

int is_digit(char c)
{
    return (c >= '0' && c <= '9');
}
