
#include "square.h"


struct figure_array *create_array(int n)
{
	
	struct figure_array *a_figure_array  = (struct figure_array *)malloc(sizeof(struct figure_array));
	
	if(a_figure_array == NULL)
		return NULL;
		
	a_figure_array->a_square = (struct square *) malloc(sizeof(struct square) * n);
	
	if(a_figure_array->a_square == NULL){
		free(a_figure_array);
		return NULL;
	}	
		
	a_figure_array->arr_bool = (bool*) malloc(sizeof(bool) * n);
	
	if(a_figure_array->arr_bool == NULL){
		free(a_figure_array->a_square);
		free(a_figure_array);	
		return NULL;
	}	
		
	a_figure_array->size = n;
	
	a_figure_array->current_number = 0;
	
	return a_figure_array;
	
}

int add_element(struct figure_array *the_array, struct square *aa_square)
{
	if(the_array == NULL || aa_square == NULL)
		return MEMORY_PROBLEM;
	
	if((aa_square->vertex4.x - aa_square->vertex1.x == aa_square->vertex2.y - aa_square->vertex1.y) &&
	   (aa_square->vertex2.y - aa_square->vertex1.y == aa_square->vertex3.x - aa_square->vertex2.x) &&
	   (aa_square->vertex3.x - aa_square->vertex2.x == aa_square->vertex3.y - aa_square->vertex4.y))
	   {
	   		if(the_array->current_number < the_array->size){
	   			for(int i = 0; i<the_array->size; i++){
	   				if(the_array->arr_bool[i] != true){
						the_array->a_square[i] = *aa_square;
						the_array->arr_bool[i] = true;
						the_array->current_number++;
						break;	
					}	
				}	
			}
			else{
				printf("Array is filled. Element has not been added\n");	
				return ARRAY_OVERSIZE;
			}	
		}
		
	else{
		printf("Figure is not square\n");
		return INCORRECT_FIGURE;
	}	
		
	return 0;			
}

int insert_element_by_index(struct figure_array *the_array, struct square *aa_square, int index)
{
	if(the_array == NULL || aa_square == NULL)
		return MEMORY_PROBLEM;
		
	if(the_array->size<=index){
	   	printf("Index is more than array\n");
	   	return ARRAY_OVERSIZE;
	}   			
	   				
	else{
		if((aa_square->vertex4.x - aa_square->vertex1.x == aa_square->vertex2.y - aa_square->vertex1.y) &&
	   		(aa_square->vertex2.y - aa_square->vertex1.y == aa_square->vertex3.x - aa_square->vertex2.x) &&
	   		(aa_square->vertex3.x - aa_square->vertex2.x == aa_square->vertex3.y - aa_square->vertex4.y))
	   		{		
				if(the_array->arr_bool[index] == false){
					the_array->a_square[index] = *aa_square;
					the_array->current_number++;
					the_array->arr_bool[index] = true;
				}
				else
					the_array->a_square[index] = *aa_square;	
	   		}
		
		else{
			printf("Figure is not square\n");
			return INCORRECT_FIGURE;
		}	
	}
	
	return 0;			
}

void print_arr(struct figure_array *the_array)
{
	if(the_array != NULL){
		for(int i = 0; i < the_array->size; i++)
		{
			if(the_array->arr_bool[i] == true){
				printf("Square #%i - point_1: x = %i, y = %i; point_2: x = %i, y = %i; point_3: x = %i, y = %i; point_4: x = %i, y = %i\n",
				i, the_array->a_square[i].vertex1.x, the_array->a_square[i].vertex1.y, the_array->a_square[i].vertex2.x, the_array->a_square[i].vertex2.y,
				the_array->a_square[i].vertex3.x, the_array->a_square[i].vertex3.y, the_array->a_square[i].vertex4.x, the_array->a_square[i].vertex4.y);
				
				int sq = (the_array->a_square[i].vertex4.x - the_array->a_square[i].vertex1.x) * (the_array->a_square[i].vertex3.x - the_array->a_square[i].vertex2.x);
				printf("Square #%i = %i\n", i, sq);
				printf("\n");
			}	
		}
	}	
}

void remove_element(struct figure_array *the_array, int index)
{
	if(the_array != NULL){
		if(the_array->arr_bool[index] == true){
			the_array->a_square[index].vertex1.x = 0;
			the_array->a_square[index].vertex1.y = 0;
	
			the_array->a_square[index].vertex2.x = 0;
			the_array->a_square[index].vertex2.y = 0;
	
			the_array->a_square[index].vertex3.x = 0;
			the_array->a_square[index].vertex3.y = 0;
	
			the_array->a_square[index].vertex4.x = 0;
			the_array->a_square[index].vertex4.y = 0;
	
			the_array->arr_bool[index] = false;
	
			the_array->current_number--;
		}
	}	
}

void write_json(struct figure_array *the_array, FILE *txt)
{
	if(the_array != NULL){	
		fprintf(txt, "{\n");
		fprintf(txt, "\t\"figure_array\": [\n");
		fprintf(txt, "\t  {\n");
	
			for(int i = 0; i < the_array->size; i++){
				if(the_array->arr_bool[i] == true)
				{
					fprintf(txt, "\t\t\"square #%i\": {\n", i);
					fprintf(txt, "\t\t\t\"vertex1\": {\n");
					fprintf(txt, "\t\t\t\t\"x\" : %i,\n", the_array->a_square[i].vertex1.x);
					fprintf(txt, "\t\t\t\t\"y\" : %i\n", the_array->a_square[i].vertex1.y);
					fprintf(txt, "\t\t\t},\n");
				
					fprintf(txt, "\t\t\t\"vertex2\": {\n");
					fprintf(txt, "\t\t\t\t\"x\" : %i,\n", the_array->a_square[i].vertex2.x);
					fprintf(txt, "\t\t\t\t\"y\" : %i\n", the_array->a_square[i].vertex2.y);
					fprintf(txt, "\t\t\t},\n");
			
					fprintf(txt, "\t\t\t\"vertex3\": {\n");
					fprintf(txt, "\t\t\t\t\"x\" : %i,\n", the_array->a_square[i].vertex3.x);
					fprintf(txt, "\t\t\t\t\"y\" : %i\n", the_array->a_square[i].vertex3.y);
					fprintf(txt, "\t\t\t},\n");
				
					fprintf(txt, "\t\t\t\"vertex4\": {\n");
					fprintf(txt, "\t\t\t\t\"x\" : %i,\n", the_array->a_square[i].vertex4.x);
					fprintf(txt, "\t\t\t\t\"y\" : %i\n", the_array->a_square[i].vertex4.y);
					fprintf(txt, "\t\t\t}\n");
				
					if(i == the_array->current_number)
						fprintf(txt, "\t\t}\n");
					
					else
						fprintf(txt, "\t\t},\n");	
				}	
			}
		
		fprintf(txt, "\t  }\n");	
		fprintf(txt, "\t],\n");
		
		fprintf(txt, "\t\"size\": %i,\n", the_array->size);
		fprintf(txt, "\t\"current_number\": %i,\n", the_array->current_number);
		fprintf(txt, "\t\"arr_bool\": [\n");
		fprintf(txt, "\t  {\n");
		for(int i = 0; i < the_array->size; i++){
			if(the_array->arr_bool[i] == true && i == the_array->current_number)
				fprintf(txt, "\t\t\"arr_bool#%i\": %i \n", i, the_array->arr_bool[i]);
				
			else if(the_array->arr_bool[i] == true)
				fprintf(txt, "\t\t\"arr_bool#%i\": %i, \n", i, the_array->arr_bool[i]);
						
		}
		fprintf(txt, "\t  }\n");
		fprintf(txt, "\t]\n");			
		fprintf(txt, "}\n");
		
		
	}			
}

void delete_array(struct figure_array *the_array)
{
	if(the_array != NULL){
		if(the_array->a_square != NULL)
			free(the_array->a_square);			
				
		if(the_array->arr_bool != NULL)
			free(the_array->arr_bool);
		 
		free(the_array);	
	}
}









