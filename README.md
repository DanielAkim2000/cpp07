*This project has been created as part of the 42 curriculum by demane.*

# CPP Module 07

## Description

**CPP Module 07** introduces C++ templates. The goal is to write generic functions and a generic array container that work for any type, while keeping implementations compatible with C++98 (templates defined in headers / `.tpp` includes).

This module contains three exercises:

| Exercise | Focus |
|----------|--------|
| **ex00 — Start with a few functions** | Function templates `swap`, `min`, `max` |
| **ex01 — Iter** | `iter` — apply a function to every element of an array |
| **ex02 — Array** | Class template `Array<T>` with bounds-checked `operator[]` |

### Overview

Templates are compiled on demand: the compiler generates a concrete version for each type used. The `Array` class must support default construction, sized construction, deep copy, and `size()`, and must throw on out-of-range access.

## Instructions

### Requirements

- A C++ compiler supporting **C++98**
- `make`

### Compilation

```bash
cd ex00   # or ex01 / ex02
make
make clean / fclean / re
```

Flags: `-Wall -Wextra -Werror -std=c++98`.

### Execution

```bash
./exec    # ex00 / ex01 / ex02
```

You can also plug in the subject’s evaluation mains where provided.

## Classes & components

| Component | Role |
|-----------|------|
| `swap` / `min` / `max` | Simple function templates on comparable types |
| `iter` | `iter(array, length, function)` — works with const and non-const |
| `Array<T>` | Dynamic array owning `T*`; Orthodox Canonical Form; `operator[]` throws `std::exception` (or derived) on bad index |

Implementation of `Array` lives in `Array.tpp`, included at the bottom of `Array.hpp`.

## Resources

### Documentation & references

- [Templates](https://en.cppreference.com/w/cpp/language/templates)
- [Function template](https://en.cppreference.com/w/cpp/language/function_template)
- [Class template](https://en.cppreference.com/w/cpp/language/class_template)
- [std::exception](https://en.cppreference.com/w/cpp/error/exception)
- 42 subject: *CPP Module 07*

### Use of AI

AI assistance was used for:

- Drafting and formatting this `README.md` according to the 42 curriculum requirements
- Clarifying wording and structuring documentation sections

No AI-generated code was submitted as a substitute for personal implementation. The C++ sources were written and validated by the student.

---

*42 Paris — Common Core*
