/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfransis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/25 16:27:14 by dfransis          #+#    #+#             */
/*   Updated: 2020/08/25 18:37:47 by dfransis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void				ft_putchar(char c)
{
	write(1, &c, 1);
}

void				putnbr(int nb)
{
	unsigned int	ab;

	if (nb < 0)
	{
		ft_putchar('-');
		ab = nb * -1;
	}
	else
		ab = nb;
	if ((ab / 10) > 0)
		ft_putnbr(ab / 10);
	ft_putchar(ab % 10 + 48);
}
