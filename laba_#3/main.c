#include <stdio.h>
#include "square.h"
#include <stdbool.h>
#include <stdlib.h>

int main(void)
{
	const int number_of_figure = 5;
	
	struct square a_square;
	
	a_square.vertex1.x = 0;
	a_square.vertex1.y = 0;
	
	a_square.vertex2.x = 0;
	a_square.vertex2.y = 2;
	
	a_square.vertex3.x = 2;
	a_square.vertex3.y = 2;
	
	a_square.vertex4.x = 2;
	a_square.vertex4.y = 0;
	
	struct square ab_square;
	
	ab_square.vertex1.x = 1;
	ab_square.vertex1.y = 1;
	
	ab_square.vertex2.x = 1;
	ab_square.vertex2.y = 5;
	
	ab_square.vertex3.x = 3;
	ab_square.vertex3.y = 5;
	
	ab_square.vertex4.x = 5;
	ab_square.vertex4.y = 1;
	
	
	struct figure_array *array = create_array(number_of_figure);
	
	int fig1 = add_element(array, &a_square);
	if (fig1 == -1)
		printf("Lack of memory for fig1\n");
	
	int fig2 = add_element(array, &a_square);
	if (fig2 == -1)
		printf("Lack of memory for fig2\n");
	
	int fig3 = add_element(array, &a_square);
	if (fig3 == -1)
		printf("Lack of memory for fig3\n");
		
	int fig4 = insert_element_by_index(array, &ab_square, 3);
	if (fig3 == -1)
		printf("Lack of memory for fig4\n");
	
	remove_element(array, 0);
	
	int fig5 = add_element(array, &ab_square);
	if (fig5 == -1)
		printf("Lack of memory for fig5\n");
	
	int fig6 = insert_element_by_index(array, &ab_square, 4);
	if (fig6 == -1)
		printf("Lack of memory for fig6\n");
		
	int fig7 = add_element(array, &ab_square);
	if (fig7 == -1)
		printf("Lack of memory for fig7\n");
		
	int fig8 = add_element(array, &ab_square);
	if (fig8 == -1)
		printf("Lack of memory for fig7\n");
	
	int fig9 = insert_element_by_index(array, &ab_square, 5);
	if (fig9 == -1)
		printf("Lack of memory for fig9\n");
		
	int fig10 = insert_element_by_index(array, &ab_square, 5);
	if (fig10 == -1)
		printf("Lack of memory for fig10\n");					

	print_arr(array);
	
	write_json(array);
	
	printf("Current_number: %i\n", array->current_number);
	
	delete_array(array);
}
