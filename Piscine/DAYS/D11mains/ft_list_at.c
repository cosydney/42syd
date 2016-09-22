/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sycohen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/13 16:56:46 by sycohen           #+#    #+#             */
/*   Updated: 2016/09/13 17:12:13 by sycohen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{

}

int        main(int argc, char **argv)
{
	t_list            *start_list;
	t_list            *res;
	unsigned int    nb;

	nb = 2;
	start_list = ft_list_push_params(argc, argv);
	res = ft_list_at(start_list, nb);
	while (start_list != NULL)
	{
		printf("%s\n", start_list->data);
		start_list = start_list->next;
	}
	printf("Le %i eime element de cette liste est : %s\n", nb, res->data);
}
