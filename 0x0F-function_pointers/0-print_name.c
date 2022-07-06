/**
 * print_name- takes name as input and prints it using callback funtion passed
 * @name: name to print
 * @f: function pointer to be used as a callback
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
