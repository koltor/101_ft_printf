/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_printf_test.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: matheme <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/03/25 15:41:39 by matheme      #+#   ##    ##    #+#       */
/*   Updated: 2019/05/27 21:08:19 by matheme     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

# include "include/ft_printf.h"
# include "stdio.h"

int compare_int(char *str, int a)
{
	int retn1;
	int retn2;

	retn1 = ft_printf(str, a);
	printf(" | %d\n", retn1);
	retn2 = printf(str, a);
	printf(" | %d\n", retn2);
	return (0);
}

int compare_str(char *str, char *s)
{
	int retn1;
	int retn2;

	retn1 = ft_printf(str, s);
	printf(" | %d\n", retn1);
	retn2 = printf(str, s);
	printf(" | %d\n", retn2);
	return (0);
}

void	batterie_de_test_d(long long a)
{
	compare_int("%d", a);
	compare_int("%10d", a);
	compare_int("%10.15d", a);
	compare_int("% +d", a);
	compare_int("% 010.15d", a);
	compare_int("%.0d", a);
	compare_int("%5d", a);
	compare_int("%.10d", a);
	compare_int("%#d", a);
	compare_int("%+d", a);
	compare_int("%#010d", a);
	compare_int("%#+010d", a);
	compare_int("%-10d", a);
	compare_int("%+-10d", a);
}


void	batterie_de_test_u(unsigned long long a)
{
	compare_int("%u", a);
	compare_int("%10u", a);
	compare_int("%10.15u", a);
	compare_int("% +u", a);
	compare_int("% 010.15u", a);
	compare_int("%.0u", a);
	compare_int("%5u", a);
	compare_int("%.10u", a);
	compare_int("%#u", a);
	compare_int("%+u", a);
	compare_int("%#010u", a);
	compare_int("%#+010u", a);
	compare_int("%-10u", a);
	compare_int("%+-10u", a);
}


void	batterie_de_test_o(unsigned long long a)
{
	compare_int("%o", a);
	compare_int("%10o", a);
	compare_int("%10.15o", a);
	compare_int("% +o", a);
	compare_int("% 010.15o", a);
	compare_int("%.0o", a);
	compare_int("%5o", a);
	compare_int("%.10o", a);
	compare_int("%#o", a);
	compare_int("%+o", a);
	compare_int("%#010o", a);
	compare_int("%#+010o", a);
	compare_int("%-10o", a);
	compare_int("%+-10o", a);
}


void	batterie_de_test_x(unsigned long long a)
{
	compare_int("%x", a);
	compare_int("%10x", a);
	compare_int("%10.15x", a);
	compare_int("% +x", a);
	compare_int("% 010.15x", a);
	compare_int("%.0x", a);
	compare_int("%5x", a);
	compare_int("%.10x", a);
	compare_int("%#x", a);
	compare_int("%+x", a);
	compare_int("%#010x", a);
	compare_int("%#+010x", a);
	compare_int("%-10x", a);
	compare_int("%+-10x", a);
}

void	batterie_de_test_xx(unsigned long long a)
{
	compare_int("%X", a);
	compare_int("%10X", a);
	compare_int("%10.15X", a);
	compare_int("% +X", a);
	compare_int("% 010.15X", a);
	compare_int("%.0X", a);
	compare_int("%5X", a);
	compare_int("%.10X", a);
	compare_int("%#X", a);
	compare_int("%+X", a);
	compare_int("%#010X", a);
	compare_int("%#+010X", a);
	compare_int("%-10X", a);
	compare_int("%+-10X", a);
}


void	batterie_de_test_i(long long a)
{
	compare_int("%i", a);
	compare_int("%10i", a);
	compare_int("%10.15i", a);
	compare_int("% +i", a);
	compare_int("% 010.15i", a);
	compare_int("%.0i", a);
	compare_int("%5i", a);
	compare_int("%.10i", a);
	compare_int("%#i", a);
	compare_int("%+i", a);
	compare_int("%#010i", a);
	compare_int("%#+010i", a);
	compare_int("%-10i", a);
	compare_int("%+-10i", a);
}

void	batterie_de_test_f(float a)
{
	compare_int("%f", a);
	compare_int("%10f", a);
	compare_int("%10.15f", a);
	compare_int("% +f", a);
	compare_int("% 010.15f", a);
	compare_int("%.0f", a);
	compare_int("%5f", a);
	compare_int("%.10f", a);
	compare_int("%#f", a);
	compare_int("%+f", a);
	compare_int("%#010f", a);
	compare_int("%#+010f", a);
	compare_int("%-10f", a);
	compare_int("%+-10f", a);
}

void	batterie_de_test_c(char c)
{

	compare_int("%c", c);
	compare_int("%1.0c", c);
	compare_int("%#c", c);
	compare_int("%9.1c", c);
	compare_int("%5c", c);
	compare_int("%10.0c", c);
	compare_int("%.0c", c);
	compare_int("%9c", c);
	compare_int("%# +c", c);
	compare_int("%#c", c);
}


void	batterie_de_test_s(char *s)
{

	compare_str("%s", s);
	compare_str("%1.0s", s);
	compare_str("%#s", s);
	compare_str("%9.1s", s);
	compare_str("%5s", s);
	compare_str("%10.0s", s);
	compare_str("%.0s", s);
	compare_str("%9s", s);
	compare_str("%# +s", s);
	compare_str("%#s", s);
}

void	batterie_de_test_diouxx(long long a, unsigned long long b)
{
	dprintf(1, "DEBUT DES TEST SUR D\n");
	batterie_de_test_d(a);
	dprintf(1, "DEBUT DES TEST SUR I\n");
	batterie_de_test_i(a);
	dprintf(1, "DEBUT DES TEST SUR O\n");
	batterie_de_test_o(b);
	dprintf(1, "DEBUT DES TEST SUR U\n");
	batterie_de_test_u(b);
	dprintf(1, "DEBUT DES TEST SUR X\n");
	batterie_de_test_x(b);
	dprintf(1, "DEBUT DES TEST SUR XX\n");
	batterie_de_test_xx(b);
}

int		main(int ac, char **av)
{
	long long			a;
	unsigned long long	b;
	float				c;

	a = 10;
	b = 10;
	c = 10;
	batterie_de_test_diouxx(a, b);
	dprintf(1, "DEBUT DES TEST SUR F\n");
	batterie_de_test_f(c);
	dprintf(1, "DEBUT DES TEST SUR C\n");
	batterie_de_test_c('%');
	dprintf(1, "DEBUT DES TEST SUR S\n");
	batterie_de_test_s("je suis une phrase de test");
	return (0);
}
