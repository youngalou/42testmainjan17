/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyoung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/23 12:01:50 by lyoung            #+#    #+#             */
/*   Updated: 2017/01/23 15:41:12 by lyoung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_increment(int n);
int		*ft_map(int *tab, int length, int (*f)(int));

int		main(void)
{
	int i;
	int length;
	int *res;
	int tab[6] = { 12, 90, 56, 118, 34, 7 };

	i = 0;
	length = 6;
	res = ft_map(tab, length, &ft_increment);
	while (i < length)
	{
		printf("%d", res[i]);
		i++;
	}
	return (0);
}
