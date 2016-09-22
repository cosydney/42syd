/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sycohen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/13 15:52:18 by sycohen           #+#    #+#             */
/*   Updated: 2016/09/13 15:52:24 by sycohen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

nclude <stdlib.h>


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
	int i;

	i = 0;
	new = ft_create_elem("Basile");
	printf("count = %d\n", ft_list_size(new));
	ft_list_push_back(&new, "Code");
	printf("count = %d\n", ft_list_size(new));
	ft_list_push_back(&new, "Avec");
	ft_list_push_back(&new, "Le");
	printf("count = %d\n", ft_list_size(new));
	ft_list_push_back(&new, "Cul");
	printf("count = %d\n", ft_list_size(new));
	while (new != NULL)
	{
		printf("%s\n", new->data);
		new = new->next;
	}
}
