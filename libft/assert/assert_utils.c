/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assert_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbiteau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 14:04:15 by cbiteau           #+#    #+#             */
/*   Updated: 2024/03/08 14:04:20 by cbiteau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "assert.h"

t_tests	init_tester(char name[256], int log_level)
{
	t_tests	tester;

	strcpy(tester.name, name);
	tester.tests_success = 0;
	tester.tests_failed = 0;
	tester.log_level = log_level;
	return (tester);
}

void	tests_header(t_tests *tests)
{
	printf("\033[0m");
	printf("╔╦╦═╦╦══╦══╗╔══╦═╦══╦══╗\n");
	printf("║║║║║╠║║╩╗╔╝╚╗╔╣╦╣══╬╗╔╝\n");
	printf("║║║║║╠║║╗║║  ║║║╩╬══║║║ \n");
	printf("╚═╩╩═╩══╝╚╝  ╚╝╚═╩══╝╚╝ \n");
	printf("\n Name: ");
	printf("%s", tests->name);
	printf("\n Log level: ");
	printf("%i", tests->log_level);
	printf("\033[0m\n\n");
}

void	tests_result(t_tests *tests)
{
	printf("---- [RESULTS] ----\n\n");
	if (tests->tests_failed > 0)
		printf("\033[1;31m");
	else
		printf("\033[1;32m");
	printf("%i", tests->tests_success);
	printf("/");
	printf("%i", tests->tests_success + tests->tests_failed);
	printf("\033[0m\n");
}
