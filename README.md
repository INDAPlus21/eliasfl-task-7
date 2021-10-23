# eliasfl-task-7

Task 7: C

## [A Different Problem](https://kth.kattis.com/problems/different)

Source: [`different/different.c`](different/different.c)

![proof](different/proof.png)

## [Summera tal](https://kth.kattis.com/problems/kth.javap.sumsort)

Source: [`sumsort/sumsort.c`](sumsort/sumsort.c)

![proof](sumsort/proof.png)

<!--
Test cases pip till stdin:
Start-Process -FilePath ".\sumsort\sumsort.exe" -RedirectStandardInput ardInput ".\sumsort\sumsort.02.in" -NoNewWindow -Wait
-->

# Answers

### Explain line-by-line
```c
int length = 0; // Initiate integer with value 0
scanf("%d", &length); // Scan stdin for an int and put it's value as length

int *vector = malloc(length * sizeof(int)); // Allocate an array on the heap with `length` elements
for (int i = 0; i < length; i++) // Iterate over numbers from 0 to `length` (exclusive)
    scanf("%d", &vector[i]); // Scan stdin for an int and put it's value as the `i`:th element in the array `numbers`

free(vector); // Deallocate the array from the heap (to prevent memory leak)
```

### What does `someFunction` do?

???

### What is printed

First a random integer that gets its value from a random location in memory.
After that, an integer that is given through stdin is assigned to `x` and printed.
