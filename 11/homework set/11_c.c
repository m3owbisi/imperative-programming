void myFunction() {
    int *ptr = (int*)malloc(sizeof(int)); // Allocate memory for an integer
    *ptr = 10; // Store a value (memory is used)

    // ... function logic ... (ptr is not freed)
}

int main() {
    myFunction(); // Memory leak: ptr points to unfreed memory
    // ... main function logic ...
}
void myFunction() {
    int *ptr = malloc(sizeof(int)); // Allocate memory for an integer

    free(ptr); // Deallocate the memory (ptr becomes dangling)

    // ... function logic ... (using ptr leads to undefined behavior, potential leak)
}
