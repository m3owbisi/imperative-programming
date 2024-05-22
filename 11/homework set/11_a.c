void myFunction() {
    int *ptr = malloc(sizeof(int)); // Allocate memory for an integer
    *ptr = 10; // Store value 10 in the allocated memory

    // ... function logic ...

    // ptr now points to deallocated memory (dangling pointer)
}

int main() {
    myFunction(); // Call the function (ptr becomes dangling)
    // ... main function logic ...
}
int *ptr = malloc(sizeof(int)); // Allocate memory for an integer

// ... use ptr ...

ptr = realloc(ptr, 2 * sizeof(int)); // Reallocate for more memory

// If you don't update ptr after realloc, it's dangling
int *ptr = malloc(sizeof(int)); // Allocate memory for an integer

free(ptr); // Deallocate the memory

// ptr is now dangling
int *getPointer() {
    int value = 10;
    return &value; // Returning address of local variable (dangling after return)
}

int main() {
    int *ptr = getPointer(); // ptr is dangling
    // ... use ptr ... (undefined behavior)
}
