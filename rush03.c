#include <unistd.h>

void ft_putchar(char c);

void ft_printfirstline(int a)
{
	int x;
	x = a;
	ft_putchar('A');
	a--;
	a--;
	while(a > 0)
	{
		ft_putchar('B');
		a--;
	}
	if(x > 1)
	{
		ft_putchar('C');
	}
	ft_putchar('\n');
}

void ft_printmidline(int a)
{
	int x;
	x = a;
	ft_putchar('B');
	a--;
	a--;
	while (a > 0)
	{
		ft_putchar(' ');
		a--;
	}
	if(x > 1)
	{
		ft_putchar('B');
	}
	ft_putchar('\n');
}

	
void rush(int a, int b)
{
	ft_printfirstline(a);

	int i;
	i = 0;
	while(i < b)
	{
		ft_printmidline(a);
		i++;
	}
	
	ft_printfirstline(a);

}
