# What is Big O notation?

Big O notation helps us to describe the performance of an algorithm and determine how scalable it is.

## O(1)

We use this to describe alogirthms that have run in constant time. An example would be:

```c++

void log(int numbers[]) {
    std::cout << numbers[0];
}

```

## O(n)

We use this to describe a linear operation that grows based on the size of its input. The bigger our input, the longer it takes. For example:

```c++

void log(int numbers[], size_t size) {
    for (int i = 0; i < size; i++)
      std::cout << numbers[i];
}

```

## O(nˆ2)

We use this to describe an operation that runs in quadratic time. The larger the data, the slower and slower the algorithm gets. Gets slower quicker than a linear operation O(n). An example would be:

```c++

void log(int numbers[], size_t size) {
    for (int i = 0; i < size; i++)
        for (int j = 0; j < size; j++)
            std::cout << numbers[i];
}

```

## O(log n)

We use this to describe an algorithm who's workload gets cut in half as time goes on, for example a binary search. More scalable than a linear algorithm.

## O(2^n)

We use this to describe exponential algorithms, which is the opposite of logarithmic growth
