# cplusplus koans

Learn C++ by doing koans

## Topics in order (each a prereq to the next)

# 1. Core Syntax & Semantics (C++98 baseline)

## 1.1 Translation Units & Preprocessing

* 1.1.1 Physical vs logical lines
* 1.1.2 Macro substitution phase
* 1.1.3 Include search paths
* 1.1.4 Header guards vs `#pragma once`
* 1.1.5 Conditional compilation
* 1.1.6 Macro pitfalls (side effects, precedence)
* 1.1.7 Preprocessor symbol lifetimes
* 1.1.8 Multiline macros
* 1.1.9 Precompiled headers (legacy GCC/Clang behavior)

## 1.2 Names, Scopes, and Lookup

* 1.2.1 Block scope vs namespace scope
* 1.2.2 Argument-dependent lookup (ADL) intro
* 1.2.3 Shadowing and hiding rules
* 1.2.4 Unqualified name lookup order
* 1.2.5 `::` global resolution operator
* 1.2.6 Anonymous namespaces
* 1.2.7 Internal vs external linkage

## 1.3 Basic Types & Value Categories

* 1.3.1 Integral promotions
* 1.3.2 Implicit conversions
* 1.3.3 Signedness traps
* 1.3.4 Floating conversion rules
* 1.3.5 Legacy meaning of lvalues/rvalues
* 1.3.6 Type qualifiers: const, volatile
* 1.3.7 cv-propagation rules
* 1.3.8 Reference collapsing (pre-C++11 trivial case)

## 1.4 Pointers, Arrays, References

* 1.4.1 Pointer arithmetic rules
* 1.4.2 Array-to-pointer decay
* 1.4.3 `sizeof` on arrays vs pointers
* 1.4.4 C-string null-termination rules
* 1.4.5 Reference binding rules (98/03)
* 1.4.6 Double pointers, pointer-to-member
* 1.4.7 Aliasing restrictions (pre-C++11 strict aliasing)
* 1.4.8 Function pointers

## 1.5 Functions & Overloading

* 1.5.1 Overload resolution
* 1.5.2 Default arguments (compile-time insertion)
* 1.5.3 Inline function ODR rules
* 1.5.4 Name mangling
* 1.5.5 `extern "C"` linkage
* 1.5.6 Static vs dynamic linkage at function level

## 1.6 Classes & Objects

* 1.6.1 Member initialization order
* 1.6.2 Access specifiers (public/private/protected)
* 1.6.3 Implicit constructor generation
* 1.6.4 Destructor rules
* 1.6.5 Copy constructor triggers
* 1.6.6 Assignment operator mechanics
* 1.6.7 Friend declarations
* 1.6.8 Static class members
* 1.6.9 Nested classes

## 1.7 Inheritance Basics

* 1.7.1 Public/protected/private inheritance
* 1.7.2 Virtual inheritance layout basics
* 1.7.3 Diamond problem intro
* 1.7.4 Upcasting rules
* 1.7.5 Object slicing fundamentals
* 1.7.6 `virtual` destructor requirement patterns

---

# 2. Memory, Object Model, Lifetime

## 2.1 Object Model

* 2.1.1 Standard layout types
* 2.1.2 POD types (98/03 meaning)
* 2.1.3 Trivially copyable vs not (pre-C++11 approximation)
* 2.1.4 Alignment requirements
* 2.1.5 Padding and data layout

## 2.2 Construction & Destruction

* 2.2.1 Order of construction in inheritance
* 2.2.2 Order of destruction in inheritance
* 2.2.3 Memberwise copy semantics
* 2.2.4 Two-phase initialization pitfalls
* 2.2.5 RAII destructor guarantees

## 2.3 Virtual Dispatch & RTTI

* 2.3.1 Vtable layout expectations
* 2.3.2 Pure virtual functions
* 2.3.3 `dynamic_cast` costs
* 2.3.4 `typeid` mechanism
* 2.3.5 RTTI disabling and failure modes

## 2.4 Undefined Behavior Zones

* 2.4.1 Strict aliasing rules
* 2.4.2 Dangling pointer scenarios
* 2.4.3 Double deletes
* 2.4.4 Uninitialized reads
* 2.4.5 Violating lifetime of objects
* 2.4.6 ODR violations

## 2.5 C++11 Move Semantics (Theory)

* 2.5.1 Rvalue reference mechanics
* 2.5.2 Move constructor default generation
* 2.5.3 Move assignment rules
* 2.5.4 Move vs copy elision
* 2.5.5 Move-only types

---

# 3. Templates (C++98 → C++11)

## 3.1 Function Templates

* 3.1.1 Template parameter deduction rules
* 3.1.2 Reference collapsing (98 trivial form)
* 3.1.3 Overload resolution with templates
* 3.1.4 Template argument substitution

## 3.2 Class Templates

* 3.2.1 Member templates
* 3.2.2 Template instantiation model
* 3.2.3 Template exporting (C++98 removed feature)
* 3.2.4 Explicit instantiation declarations

## 3.3 Specialization

* 3.3.1 Full specialization rules
* 3.3.2 Partial specialization constraints
* 3.3.3 Partial ordering of specializations
* 3.3.4 Tag dispatching basics

## 3.4 Dependent Names

* 3.4.1 Why `typename` is needed
* 3.4.2 When `template` keyword is required
* 3.4.3 Dependent base classes

## 3.5 SFINAE (C++98 era)

* 3.5.1 Substitution failure paths
* 3.5.2 Detecting expressions (pre C++11 style)
* 3.5.3 `enable_if` patterns (Boost-era)
* 3.5.4 Integral constant expressions

---

# 4. C++11 Modernization Core

## 4.1 Move Semantics (Practical)

* 4.1.1 `std::move` mechanics
* 4.1.2 Perfect forwarding patterns
* 4.1.3 Universal references
* 4.1.4 Move-only vs move-preferred types
* 4.1.5 Value categories (modern definition)

## 4.2 Type Deduction

* 4.2.1 `auto` rules
* 4.2.2 `decltype` extraction
* 4.2.3 Trailing return types
* 4.2.4 Template argument deduction + forwarding

## 4.3 Uniform Initialization

* 4.3.1 Brace-init rules
* 4.3.2 Narrowing prevention
* 4.3.3 Initializer-list constructors
* 4.3.4 Aggregates vs non-aggregates

## 4.4 Smart Pointers

* 4.4.1 `unique_ptr` ownership
* 4.4.2 `shared_ptr` control block layout
* 4.4.3 Cycles and `weak_ptr`
* 4.4.4 Custom deleters
* 4.4.5 Aliasing constructor

## 4.5 Lambdas

* 4.5.1 Capture modes & lifetime issues
* 4.5.2 Closure object layout
* 4.5.3 Generic lambdas (C++14)
* 4.5.4 Mutable lambdas
* 4.5.5 Lambdas in algorithms

---

# 5. Standard Library Foundations

## 5.1 Containers

* 5.1.1 `vector` capacity/invalidation rules
* 5.1.2 `deque` segmentation model
* 5.1.3 `list` node allocation
* 5.1.4 `map`/`set` tree invariants
* 5.1.5 Hash containers (bucket, load factor)
* 5.1.6 `array` vs C-array
* 5.1.7 Iterator invalidation matrices

## 5.2 Algorithms

* 5.2.1 Iterator category requirements
* 5.2.2 Complexity guarantees
* 5.2.3 Stable vs unstable algorithms
* 5.2.4 Mutating vs non-mutating
* 5.2.5 Projections (C++20)

## 5.3 Strings

* 5.3.1 Small string optimization
* 5.3.2 `string_view` lifetime dangers
* 5.3.3 Encoding assumptions
* 5.3.4 Stream I/O pitfalls
* 5.3.5 Format (C++20) basics

## 5.4 Error Handling

* 5.4.1 Exception propagation rules
* 5.4.2 noexcept spec rules
* 5.4.3 `optional` semantics
* 5.4.4 `variant` visitation patterns
* 5.4.5 `expected` (non-standard but common)

## 5.5 Filesystem

* 5.5.1 Path normalization
* 5.5.2 Recursive directory traversal
* 5.5.3 File clocks
* 5.5.4 Symlink handling

---

# 6. Concurrency & Parallelism

## 6.1 Legacy Threading (pthread-era)

* 6.1.1 pthread lifecycle
* 6.1.2 Mutexes, condition variables
* 6.1.3 Scheduling models
* 6.1.4 Cancellation issues

## 6.2 C++11 Threading

* 6.2.1 `std::thread` lifecycle
* 6.2.2 Detached vs joinable
* 6.2.3 `std::mutex`, `std::lock_guard`
* 6.2.4 `std::unique_lock`
* 6.2.5 `std::condition_variable`
* 6.2.6 Deadlock avoidance patterns

## 6.3 Atomics

* 6.3.1 Memory orders
* 6.3.2 Sequentially consistent vs relaxed
* 6.3.3 Release-acquire
* 6.3.4 ABA problem basics
* 6.3.5 Lock-free algorithms

## 6.4 High-Level Concurrency

* 6.4.1 futures & promises
* 6.4.2 packaged_task
* 6.4.3 Async pitfalls
* 6.4.4 Thread pools

---

# 7. Advanced Templates & Metaprogramming

## 7.1 Variadics

* 7.1.1 Parameter pack expansion
* 7.1.2 Fold expressions (C++17)
* 7.1.3 Perfect forwarding with packs

## 7.2 Traits

* 7.2.1 `std::true_type`/`false_type`
* 7.2.2 Building custom traits
* 7.2.3 Conditional type selection
* 7.2.4 Detection idiom (C++17)

## 7.3 CRTP

* 7.3.1 Static polymorphism
* 7.3.2 Curiously recurring patterns
* 7.3.3 Mixins

## 7.4 Expression Templates

* 7.4.1 Lazy evaluation
* 7.4.2 AST construction at compile-time
* 7.4.3 Numeric kernel patterns

## 7.5 Concepts (C++20)

* 7.5.1 Requires-clause syntax
* 7.5.2 Constraint satisfaction rules
* 7.5.3 Constrained templates interaction
* 7.5.4 Ad hoc vs auto concepts

## 7.6 Constexpr Programming

* 7.6.1 Constant evaluation rules
* 7.6.2 `constexpr` containers
* 7.6.3 Compile-time algorithms
* 7.6.4 `consteval`

---

# 8. Modern C++ Design Patterns

## 8.1 Value Semantics

* 8.1.1 Copy elision expectations
* 8.1.2 Zero-cost abstraction checks

## 8.2 Pimpl

* 8.2.1 Opaque pointer mechanics
* 8.2.2 ABI-stable library design

## 8.3 Generic Patterns

* 8.3.1 Visitor (runtime)
* 8.3.2 Visitor (compile-time with variants)
* 8.3.3 Strategy pattern with templates
* 8.3.4 Policy classes

## 8.4 Type Erasure

* 8.4.1 Custom vtable design
* 8.4.2 Small-buffer optimization
* 8.4.3 Generic callable design

---

# 9. Legacy Survival Kit

## 9.1 Memory & Ownership

* 9.1.1 Raw new/delete auditing
* 9.1.2 Manual reference counting
* 9.1.3 Placement new idioms

## 9.2 Legacy Tooling

* 9.2.1 Autotools project anatomy
* 9.2.2 Makefile linking models
* 9.2.3 GCC extensions (pre-C++11 quirks)

## 9.3 ABI & Linkage

* 9.3.1 Itanium ABI layout
* 9.3.2 Name mangling mismatches
* 9.3.3 Symbol versioning
* 9.3.4 Inline visibility

## 9.4 Legacy Patterns

* 9.4.1 Exception-heavy codebases
* 9.4.2 Macro metaprogramming
* 9.4.3 Pre-Boost smart pointer idioms

---

# 10. Toolchain Mastery

## 10.1 Compiler Flags

* 10.1.1 Optimization levels
* 10.1.2 Vectorization reports
* 10.1.3 Strict aliasing flags
* 10.1.4 Warning levels

## 10.2 Sanitizers

* 10.2.1 AddressSanitizer
* 10.2.2 UndefinedBehaviorSanitizer
* 10.2.3 ThreadSanitizer

## 10.3 Static Analysis

* 10.3.1 clang-tidy profiles
* 10.3.2 Cppcheck rule sets
* 10.3.3 Include-what-you-use

---

# 11. C++17–20–23 Features

## 11.1 Core Language

* 11.1.1 Structured bindings
* 11.1.2 If/switch init statements
* 11.1.3 Inline variables (C++17)

## 11.2 Ranges (C++20)

* 11.2.1 View adaptors
* 11.2.2 Pipeline composition
* 11.2.3 Borrowed ranges
* 11.2.4 Lazy evaluation semantics

## 11.3 Coroutines

* 11.3.1 Awaitable concept
* 11.3.2 Coroutine state machine
* 11.3.3 Symmetric transfer
* 11.3.4 Custom promise types

## 11.4 Modules

* 11.4.1 BMI generation
* 11.4.2 Partition design
* 11.4.3 Header-unit migration

---

# 12. Systems & Embedded

## 12.1 Bare-Metal C++

* 12.1.1 No-exception builds
* 12.1.2 `constexpr` for init-time reduction
* 12.1.3 Custom startup code

## 12.2 Hardware-Adjacent

* 12.2.1 MMIO patterns
* 12.2.2 Interrupt-safe structures
* 12.2.3 Lock-free ring buffers

---

# 13. Performance Engineering

## 13.1 CPU & Cache

* 13.1.1 Cache line behavior
* 13.1.2 Branch prediction
* 13.1.3 TLB misses

## 13.2 Data-Oriented Design

* 13.2.1 SoA vs AoS
* 13.2.2 Memory locality audits

## 13.3 Profiling

* 13.3.1 perf basics
* 13.3.2 Flamegraphs
* 13.3.3 VTune sampling

## 13.4 SIMD

* 13.4.1 Intrinsics mapping
* 13.4.2 Alignment constraints
* 13.4.3 Register-level scheduling

