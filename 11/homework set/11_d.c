int *ptr = (int*)malloc(10 * sizeof(int));  // Allocate memory for 10 integers
// You need to initialize each element of ptr yourself (e.g., using a loop)
int *ptr = (int*)calloc(10, sizeof(int));  // Allocate memory for 10 integers, initialized to 0
// You can directly use ptr without explicit initialization
