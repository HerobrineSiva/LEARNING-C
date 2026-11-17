# LEARNING-C

A collection of standalone C programs written while learning the language. The exercises preserve practical experiments with basic data types, input/output, arithmetic, loops, conditional logic, number sequences, and console patterns.

## Repository contents

All programs are at the repository root; each `.c` file has its own `main()` and is intended to be compiled and run independently.

| File | Exercise / concepts |
| --- | --- |
| `calculator1.c` | Adds three subject marks and calculates their average; integer and floating-point arithmetic, variables, and formatted output. |
| `size.c` | Prints the sizes of `char`, `int`, `float`, and `double` using `sizeof`. |
| `Pattern - Building a Digital Staircase for a Smart Home System.c` | Prints an increasing star staircase using nested loops. |
| `Pattern - Stage Lighting Arrangement for a Theater Performance.c` | Prints a centered star pattern using nested loops and spaces. |
| `Series - Cricket Run Rate Tracker.c` | Generates a floating-point arithmetic sequence. |
| `Series - Data Compression Simulation.c` | Generates terms from a geometric sequence using `pow()` from the math library. |
| `Series - Even-Odd Number Arrangement System.c` | Swaps adjacent numbers in the sequence from 1 through the requested count using a conditional. |
| `Series - Farmer’s Land Expansion.c` | Generates a sequence whose increment depends on the square of the loop counter. |
| `Series - Growth Pattern of the Special Snake.c` | Prints the squares of consecutive integers. |
| `Series - Number Transformation Challenge for Game Development.c` | Applies the even/odd number transformation commonly known as the Collatz sequence until it reaches 1. |
| `Series - Oranges from the Growing Tree.c` | Generates a sequence with increments that grow by 5 each iteration. |
| `Series - Predictive Analytics for Population Growth.c` | Generates a sequence in which each new term is the sum of the previous three terms. |
| `Series - Virus Growth Prediction.c` | Prints a geometric sequence starting at 0.5 and multiplying by 3. |
| `Series - Virus Growth Rate Prediction Based on Daily Increases.c` | Generates a sequence with increments that grow by 13 each iteration. |
| `calculator.exe` | A checked-in Windows executable associated with the calculator exercise; the source file is `calculator1.c`. |

## Concepts practiced

- Variables and fundamental data types
- `printf()` / `scanf()` console input and output
- Arithmetic expressions and integer versus floating-point values
- `if` / `else` conditionals
- `for` loops and nested loops
- Number sequences, including arithmetic/geometric patterns and recurrence relations
- Pattern printing with spaces and symbols
- Basic use of the standard I/O and math libraries

## Compile and run

There is no shared application entry point, build system, or test suite. Compile one source file at a time with a C compiler such as GCC. For example:

```sh
gcc calculator1.c -o calculator1
./calculator1
```

Programs that read input expect values on standard input. For example, compile and run the staircase exercise with an input value of `4`:

```sh
gcc "Pattern - Building a Digital Staircase for a Smart Home System.c" -o staircase
echo 4 | ./staircase
```

The data-compression exercise calls `pow()` and may need to be linked with the math library on GCC-based systems:

```sh
gcc "Series - Data Compression Simulation.c" -o compression -lm
```

On Windows, run the resulting executable from Command Prompt or PowerShell (for example, `calculator1.exe`). The committed `calculator.exe` is a prebuilt binary; compiling from `calculator1.c` is the portable way to rebuild the calculator.

## Notes

- These are individual learning exercises, not a single combined program. Their input requirements and outputs vary by file.
- Some source files include standard headers that their current code does not use; the repository is a learning record, so examples are kept separate rather than consolidated.
- Check the input values expected by a particular exercise before running it. Some mathematical sequences can exceed the range of `int` for sufficiently large inputs.

## Possible next steps

- Add a short sample input/output section for exercises that need input.
- Add compiler instructions for the environment used to create `calculator.exe`.
- Continue adding programs as standalone exercises, and organize them into topic folders only when that is useful for the learning journey.
