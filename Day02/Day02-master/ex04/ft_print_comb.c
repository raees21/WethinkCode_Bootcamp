/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raziz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/17 14:06:32 by raziz             #+#    #+#             */
/*   Updated: 2020/06/19 14:31:29 by raziz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int 	ft_putchar(char c);

void	print_char(char x, char y, char z)
{
	ft_putchar(x);
	ft_putchar(y);
	ft_putchar(z);
}

void	ft_print_comb(void)
{
	int a;
	int b;
	int c;

	a = '0';
	while(a <= '9')
	{	
		b = a + 1;
		while(b <= '9')
		{
			c = b + 1;
			while(c <= '9')
			{
				print_char(a, b, c);
			 	if(a != '7' || b != '8' || c != '9')
				{
			 		ft_putchar(',');
					ft_putchar(' ');
				}
				++c;
			}
			++b;
		}
		++a;
	}
}
