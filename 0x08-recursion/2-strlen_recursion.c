/**
 * _strlen_recursion - Returns the length of a string recursively.
 * @s: The string to calculate the length of.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	static int size = 0;

	if (*s == '\0')
	{
		return size;
	}
	size++;
	_strlen_recursion(s + 1);

	return size;
}
