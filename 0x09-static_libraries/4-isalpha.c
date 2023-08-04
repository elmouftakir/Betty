/**
 * _isalpha - checks for alphabetic character
 * @c: The character to be checked
 * Return: 1  is a letter, lowercase or uppercase, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 98) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	return (0);
}
