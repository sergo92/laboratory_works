#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#include "sort.h"
#include "square.h"

int main(void)
{
	const int number_of_figure = 5;
	
	struct square a_square[number_of_figure];
	
	for(int i = 0; i<number_of_figure; i++)
	{
		a_square[i].vertex1.x = 0;
		a_square[i].vertex1.y = 0;
	
		a_square[i].vertex2.x = 0;
		a_square[i].vertex2.y = i+3;
	
		a_square[i].vertex3.x = i+3;
		a_square[i].vertex3.y = i+3;
	
		a_square[i].vertex4.x = i+3;
		a_square[i].vertex4.y = 0;
	}	
	
	
	struct figure_array *array = create_array(number_of_figure);
	
	int fig1 = add_element(array, &a_square[0]);
	if (fig1 == MEMORY_PROBLEM)
		printf("Lack of memory for fig1\n");
	
	int fig2 = add_element(array, &a_square[1]);
	if (fig2 == MEMORY_PROBLEM)
		printf("Lack of memory for fig2\n");
	
	int fig3 = add_element(array, &a_square[2]);
	if (fig3 == MEMORY_PROBLEM)
		printf("Lack of memory for fig3\n");
		
	int fig4 = insert_element_by_index(array, &a_square[3], 3);
	if (fig3 == MEMORY_PROBLEM)
		printf("Lack of memory for fig4\n");
	
	remove_element(array, 0);
	
	int fig5 = add_element(array, &a_square[0]);
	if (fig5 == MEMORY_PROBLEM)
		printf("Lack of memory for fig5\n");
	
	int fig6 = insert_element_by_index(array, &a_square[2], 4);
	if (fig6 == MEMORY_PROBLEM)
		printf("Lack of memory for fig6\n");
		
	int fig7 = add_element(array, &a_square[4]);
	if (fig7 == MEMORY_PROBLEM)
		printf("Lack of memory for fig7\n");
		
	int fig8 = add_element(array, &a_square[3]);
	if (fig8 == MEMORY_PROBLEM)
		printf("Lack of memory for fig7\n");
	
	int fig9 = insert_element_by_index(array, &a_square[4], 5);
	if (fig9 == MEMORY_PROBLEM)
		printf("Lack of memory for fig9\n");
		
	int fig10 = insert_element_by_index(array, &a_square[1], 5);
	if (fig10 == MEMORY_PROBLEM)
		printf("Lack of memory for fig10\n");	
	
	bubble_sort(array); 					

	print_arr(array);
	
	FILE *txt = fopen("txt.json", "w");
	
	write_json(array, txt);
	
	fclose(txt);
	
	printf("Current_number: %i\n", array->current_number);
	
	delete_array(array);
	
	return 0;
}
