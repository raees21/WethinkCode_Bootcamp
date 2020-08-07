/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raziz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 11:48:20 by raziz             #+#    #+#             */
/*   Updated: 2020/06/23 11:07:29 by raziz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int i;
	int j;

	if(power < 0)
	{
		return 0;
	}
	if(power == 0)
	{
		return 1;
	}
	i = 1;
	j = nb;
	while(i < power)
	{
		j *= nb;
		i++;
	}
	return (j);
}	
