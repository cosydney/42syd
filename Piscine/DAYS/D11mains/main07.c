/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main07.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sycohen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/13 19:00:55 by sycohen           #+#    #+#             */
/*   Updated: 2016/09/13 19:01:20 by sycohen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

t_list	*ft_create_elem(void *data)
{
	t_list *tmp;

	tmp = (t_list*)malloc(sizeof(t_list));
	if (tmp)
	{
		tmp->data = data;
		tmp->next = NULL;
	}
	return (tmp);
}

void		ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *tmp;

	tmp = *begin_list;
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = ft_create_elem(data);
}
int        main(void)
{
	t_list *new;
	t_list *normal = new;
	int i;

	i = 0;
	new = ft_create_elem("Basile");
	ft_list_push_back(&new, "Code");
	ft_list_push_back(&new, "Avec");
	ft_list_push_back(&new, "Les");
	ft_list_push_back(&new, "mains");

	t_list *result = ft_list_at(new, 4);
	printf("%s \n", result->data);
	/*
	 * 	while (new != NULL)
	 * 		{
	 * 				printf("%s\n", new->data);
	 * 						new = new->next;
	 * 							}*/
}
