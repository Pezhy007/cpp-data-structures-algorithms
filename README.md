# C++ Data Structures & Algorithms

A collection of C++ implementations covering core data structures and algorithms, developed as part of a Bachelor of Mathematical and Computer Sciences (Cybersecurity) at the University of Adelaide.

Each module is self-contained with its own source files and can be compiled independently using `g++ -std=c++11`.

---

## Modules

### 01 · Object-Oriented Design — Rock Paper Scissors
Implements an OOP-based Rock Paper Scissors game using abstract classes and polymorphism.
- Abstract `Player` class with `Human` and `Computer` subclasses
- `Referee` class to adjudicate game outcomes
- Demonstrates encapsulation, inheritance, and interface design

### 02 · SOLID & ADT Design — Extended Game Engine
Extends the above game to support 5-way gameplay (Monkey, Robot, Pirate, Ninja, Zombie) without modifying the `Referee` class.
- Applies Open/Closed Principle — new moves added without touching existing logic
- Uses polymorphism on a `Move` abstract class
- Adheres to Abstract Data Type information-hiding principles

### 03 · Recursion
Recursive implementations of:
- **Truckloads** — recursive solution to a combinatorics problem
- **Reverser** — recursive digit and string reversal with error handling
- **EfficientTruckloads** (extension) — memoised version to avoid redundant recursion

### 05 · Searching & Sorting
- **BubbleSort** and **QuickSort** derived from a common `Sort` base class
- **RecursiveBinarySearch** — recursive binary search with configurable bounds
- Demonstrates algorithm complexity trade-offs and OO design in algorithm implementation

### 06 · Linked Lists
- Custom singly linked list with `Node` class — insert, delete, get, search, print
- **BigNumCalc** — arbitrary-precision integer arithmetic (add, subtract, multiply) using `std::list`

### 07 · Trees — Trie Data Structure
- **Autocomplete** — word suggestion system using a Trie
- **PrefixMatcher** — longest-prefix IP router matching using a Trie
- Extension: Patricia Trie optimisation for space efficiency

### 08 · Heaps
- Custom heap implementation with `insert()`, `remove()`, `getMin()`
- **kth_largest** — finds the kth largest element using `std::priority_queue`

### 09 · Data Structures — Document Management System
- `DocumentManager` class supporting document borrowing with license limits
- Data structure selection justified on efficiency grounds (O(1) lookup, O(log n) operations)
- Applies STL containers (`unordered_map`, `set`) based on operation frequency analysis

---

## Build

Each module compiles with:

```bash
g++ -o main.out -std=c++11 -O2 -Wall *.cpp
```

---

## Skills Demonstrated

- Object-oriented design (SOLID principles, ADT, polymorphism)
- Recursive algorithm design and memoisation
- Core data structures: linked lists, trees (Trie), heaps, hash maps
- Algorithm complexity analysis
- STL containers and iterators
