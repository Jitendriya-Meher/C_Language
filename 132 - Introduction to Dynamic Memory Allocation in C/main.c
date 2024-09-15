// Static Memory Allocation
// Definition: Memory is allocated during compile-time (before the program runs).
// Size: The size of memory to be allocated must be known in advance.
// Flexibility: Once allocated, the size of memory cannot be changed during runtime.
// Scope: Generally used for global, static, or local variables.
// Efficiency: Faster allocation since it happens at compile-time, but can lead to memory wastage if allocated memory is not fully utilized.


// Dynamic Memory Allocation
// Definition: Memory is allocated during runtime (when the program is running).
// Size: The size of memory can be determined and adjusted dynamically based on the program's needs.
// Flexibility: You can allocate or free memory as needed during program execution.
// Scope: Useful for allocating memory for data structures like linked lists, trees, etc.
// Efficiency: More flexible and avoids wastage, but slower due to runtime allocation and manual management (e.g., freeing memory).
// Functions: In C/C++, dynamic allocation is done using functions like malloc(), calloc(), realloc(), and memory is freed using free().