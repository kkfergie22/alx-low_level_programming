/**
*_pow_recursion - calculates the power of x
*@y: integer variable
* @x: integer variable
* Return: an integer which is the "yth" power of x
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
