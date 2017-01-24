/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyoung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/23 13:55:30 by lyoung            #+#    #+#             */
/*   Updated: 2017/01/23 17:43:49 by lyoung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_any(char **tab, int (*f)(char*));

int		ft_checkstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	if (i <= 5)
		return (1);
	else
		return (0);
}

int		main(int argc, char **argv)
{
	int res;

	(void)argc;
	res = ft_any(argv, &ft_checkstr);
	printf("%d\n", res);
	return (0);
}
