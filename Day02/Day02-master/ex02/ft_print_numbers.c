/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raziz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/17 13:07:04 by raziz             #+#    #+#             */
/*   Updated: 2020/06/21 13:29:21 by raziz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int 	ft_putchar(char c);

void	ft_print_numbers(void)
{
	int firstnum;

	firstnum = '0';
	while(firstnum <= '9')
		{
			ft_putchar(firstnum);
			firstnum++;
		}
	ft_putchar('\n');
}


