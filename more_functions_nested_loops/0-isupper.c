/* Function prototype */
int _isupper(int c);

/* Function to check if a character is uppercase */
int _isupper(int c) {
    /* ASCII values for uppercase letters: A = 65, Z = 90 */
    return (c >= 65 && c <= 90) ? 1 : 0;
}

/* Main function */
int main(void) {
    /* Example usage */
    char ch = 'A';
    
    if (_isupper(ch)) {
        /* Handle uppercase character */
    } else {
        /* Handle non-uppercase character */
    }

    return 0;  /* Return success status */
}
