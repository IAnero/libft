# Libft

A custom C standard library reimplementation used as a foundational toolkit for later 42 projects.

`libft` is one of the first core projects in the 42 curriculum. The objective is to rebuild essential libc-like utilities and additional helper functions from scratch, with a focus on correctness, memory safety, and clean API design.

---

## Overview

This library provides reusable low-level functions for:

- Character and string handling
- Memory manipulation
- Conversion utilities
- File descriptor output helpers
- Singly linked list operations (bonus)

The project is designed to establish strong C fundamentals and create a reliable utility base for future programs.

---

## Features

- Reimplementation of common libc-style functions
- Consistent function behavior and return contracts
- Header-based API (`libft.h`) for integration in other projects
- Optional bonus linked-list utilities
- Static library output (`libft.a`)
- Makefile build flow with standard targets

---

## Tech Stack

- **Language:** C
- **Build:** Makefile
- **Output:** Static library (`libft.a`)

---

## Build

```bash
make
```

Common targets:

```bash
make
make clean
make fclean
make re
make bonus
```

---

## Usage

Compile your project with `libft.a` and include the header:

```c
#include "libft.h"
```

Example compilation:

```bash
cc main.c -L. -lft -I.
```

> Adjust include/library paths to your project structure.

---

## Typical Function Groups

Depending on your implementation, `libft` usually includes:

- **Character checks/conversion** (`isalpha`, `isdigit`, `toupper`, ...)
- **String utilities** (`strlen`, `strlcpy`, `strnstr`, `split`, `trim`, ...)
- **Memory utilities** (`memset`, `bzero`, `memcpy`, `calloc`, ...)
- **Numeric conversion** (`atoi`, `itoa`)
- **FD output helpers** (`putchar_fd`, `putstr_fd`, `putnbr_fd`)
- **Linked list API (bonus)** (`lstnew`, `lstadd_back`, `lstmap`, ...)

---

## Project Structure

```text
.
├── Makefile
├── libft.h
├── src/            # core function implementations
├── bonus/          # linked-list bonus functions (if separated)
└── README.md
```

> Exact directory layout may vary in your repository.

---

## Quality Goals

- No memory leaks
- Defensive handling of edge cases
- Predictable behavior on invalid/empty input where applicable
- Clear, maintainable implementation style

---

## 42 Context

`libft` is a foundational 42 project and is expected to be reused in subsequent projects (e.g., `ft_printf`, `get_next_line`, and more).

A robust `libft` directly improves development speed and code quality in the rest of the curriculum.

---

## License

This repository is for academic and educational use.
If you plan to reuse this code, verify compliance with your school/project policy.
