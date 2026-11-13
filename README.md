# uriproblems

English | [Português (Brasil)](README.pt-BR.md)

A collection of 42 C++ programs for practicing algorithms and solving competitive programming exercises, including URI Online Judge problems. Each file is a standalone program: it reads input from the terminal and writes the result to standard output.

The filenames identify the exercises. The collection includes sorting, greedy algorithms, string processing, and simulation.

## Selected examples

| File | Topic |
|---|---|
| [num inversoes.cpp](<num inversoes.cpp>) | Inversion counting with merge sort |
| [apagandoeganhando.cpp](apagandoeganhando.cpp) | Greedy digit selection, with removals from the end of a string |
| [N meetings in one room.cpp](<N meetings in one room.cpp>) | Interval selection sorted by finishing time |
| [all in all.cpp](<all in all.cpp>) | Subsequence checking between strings |
| [campominado.cpp](campominado.cpp) | Neighborhood simulation in an array |
| [botastrocadas.cpp](botastrocadas.cpp) | Counting pairs by size and side |
| [maquinadecafe2.cpp](maquinadecafe2.cpp) | Direct comparison of the cost of three choices |

## Compile and run

Compile one file at a time, since each program has its own `main` function. A GCC compiler with GNU C++17 support accommodates the features used in this collection, including extensions present in some source files.

For example, to run inversion counting:

```bash
g++ -std=gnu++17 -O2 "num inversoes.cpp" -o inversoes
./inversoes
```

Sample input:

```text
5
5 4 3 2 1
```

Expected output:

```text
10
```

You can also read input from a file:

```bash
./inversoes < entrada.txt
```

The execution commands above use Bash. In PowerShell, run the binary as `./inversoes.exe` and enter the input through the terminal.

## Formats and validation

Each problem defines its own input format, number of test cases, and stopping condition. Check the code and corresponding problem statement before reusing a file; there is no single format for the collection.
