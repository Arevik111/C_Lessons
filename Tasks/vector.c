#include <stdio.h>
#include <stdlib.h>

typedef struct Vector {
    int* arr;
    int size;
    int count;
} Vector;

void initialise(struct Vector* vec) {
    vec->arr = NULL;
    vec->size = 0;
    vec->count = 0;

}


void insert(struct Vector* vec, int val) {
    if(vec-> size == 0) {
        vec->size = 10;
        vec->arr = malloc(vec->size*sizeof(int));
    }
    if(vec->count == vec->size) {
        vec->size *= 2;
        vec->arr = realloc(vec->arr, vec->size*sizeof(int));
    }
    vec->arr[vec->count] = val;
    vec->count++;
}


void print(struct Vector* vec) {
    int i;
    for(i = 0; i < vec->count; i++){
        printf("%d ", vec->arr[i]);
    }
	printf("\n");
}


int get(struct Vector* vec, int i) {
    if(i >= vec->count) {
        return -1;
    }
    return vec->arr[i];
}


void indexOf(struct Vector* vec, int val, int count)
{
	int j = 0;
	while(j < vec->count)
	{
		if(vec->arr[j] == val)
		{
			printf("indexOf value = %d\n", j);
			break;
		}
		j++;
	}
}


int size(struct Vector* vec) {
    return vec->count;
}

void resize(struct Vector* vec, int size) {
    if(size < vec->count) {
        return;
    }
    vec->arr = realloc(vec->arr, size*sizeof(int));
    vec->size = size;
}


void insertAt(struct Vector* vec, int i, int val) {
    if(vec-> size == 0) {
        vec->size = 10;
        vec->arr = malloc(vec->size*sizeof(int));
    }
    if(i > vec->count) {
        return;
    }
    if(vec->count == vec->size) {
        vec->size *= 2;
        vec->arr = realloc(vec->arr, vec->size*sizeof(int));
    }
    if(vec->count == 0 && i == 0) {
        vec->count++;
        vec->arr[i] = val;
    }
    else {
        int j;
        for(j = vec->count -1;  j <= i; j--) {
            vec->arr[j+1] = vec->arr[j];
        }
        vec->arr[i] = val;
        vec->count++;
    }
}


void delete(struct Vector* vec, int i) {
    if(i > vec->count) {
        return;
    }
    if(i == 0 && vec->count == 1) {
        vec->count --;
    }
    else {
        int j;
        for(j = i; j+1 < vec->count; j++) {
            vec->arr[j] = vec->arr[j+1];
        }
        vec->count--;
    }
}

int main() {
 
    Vector vec;
    initialise(&vec);
	for(int i = 0; i < 5; i++) {
		printf("intert %d\n", i);
        insert(&vec, i);
    }
	printf("\n");
	int sz = size(&vec);
    printf("insert 99 at index 0\n");
    insertAt(&vec, 0, 99);
	printf("vector size: %d\n" ,sz);
    print(&vec);
	delete(&vec, 3);
	print(&vec);
	indexOf(&vec, 2, sz);
   	printf("vector size: %d\n" ,sz);
    return 0;
}