/**
 * _isupper - Checks if a character is uppercase.
 * @c: The character to be checked.
 * Return: 1 if c is uppercase, 0 otherwise.
 */
/* Function prototype */
int _isupper(int c);

/* Function to check if a character is uppercase */
int _isupper(int c)
{
return ((c >= 'A' && c <= 'Z') ? 1 : 0);
}
