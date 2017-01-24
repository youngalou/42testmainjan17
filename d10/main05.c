/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyoung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/23 16:14:04 by lyoung            #+#    #+#             */
/*   Updated: 2017/01/23 16:37:51 by lyoung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		check_sort(int a, int b);
int		ft_is_sort(int *tab, int length, int (*f)(int, int));

int		main(void)
{
	int res;
	int tab[5] = { 1, 2, 3, 4, 5 };

	res = ft_is_sort(tab, 5, &check_sort);
	printf("%d\n", res);
	return (0);
}
