# C++ Koans - Learning C++ Through TDD

## What are Koans?

Koans are a learning technique inspired by Zen Buddhism, adapted for programming. Each koan is a small exercise with failing tests. Your goal is to make the tests pass by fixing the code, thereby learning C++ concepts through practice.

## How to Use These Koans

### 1. Build the Project

First, create a build directory and compile the koans:

```bash
mkdir build
cd build
cmake ..
make
```

### 2. Run the Tests

Run all tests to see which ones are failing:

```bash
ctest --output-on-failure
```

Or run individual test suites:

```bash
./koans/1_1_translation_units/test_physical_logical_lines
./koans/1_1_translation_units/test_macro_substitution
# ... etc
```

### 3. Fix the Code

Each koan has:
- **Implementation file** (e.g., `physical_logical_lines.cpp`) - Contains code with `FIX ME` comments
- **Test file** (e.g., `test_physical_logical_lines.cpp`) - Contains tests that check your fixes
- **Header file** (e.g., `physical_logical_lines.h`) - Declares the interface

Look for `FIX ME` comments and `???` placeholders in the implementation files. Read the comments carefully - they explain what you need to learn and fix.

### 4. Learning Process

1. **Run the test** to see it fail
2. **Read the error message** - it tells you what's wrong
3. **Read the code comments** - they explain the concept
4. **Fix the code** - replace `???` or fix broken code
5. **Run the test again** - iterate until it passes
6. **Understand why** - make sure you understand the concept before moving on

### 5. Progression

The koans are organized in learning order. Each section builds on the previous one:

#### Section 1.1: Translation Units & Preprocessing
- `test_physical_logical_lines` - Line continuations with backslash
- `test_macro_substitution` - How macros expand
- `test_header_guards` - Preventing multiple inclusion
- `test_macro_pitfalls` - Common macro mistakes

#### Section 1.2: Names, Scopes, and Lookup
- `test_scope_rules` - Block vs namespace scope
- `test_name_shadowing` - When names hide other names
- `test_namespaces` - Organizing code with namespaces
- `test_linkage` - Internal vs external linkage

#### Section 1.3: Basic Types & Value Categories
- `test_integral_types` - Integral promotion and signedness
- `test_type_conversions` - Implicit and explicit conversions
- `test_const_qualifier` - Understanding const correctness
- `test_value_categories` - lvalues and rvalues

#### Section 1.4: Pointers, Arrays, References
- `test_pointer_arithmetic` - How pointer math works
- `test_array_decay` - Arrays decaying to pointers
- `test_references` - References as aliases
- `test_function_pointers` - Pointers to functions

## Tips for Success

### Read the Learning Objectives
Each test file has "Learning objectives" comments at the bottom. Read these to understand what you should take away.

### Don't Just Make Tests Pass
The goal isn't just to make tests pass - it's to **understand why**. If you fix something without understanding, you're missing the point.

### Experiment
Try breaking things! Change the code in different ways to see what happens. The best way to learn is through experimentation.

### Use the Compiler
Compiler errors are your friend. They teach you about C++ rules. Read them carefully.

### Take Notes
Keep a learning journal. Write down:
- What surprised you
- What was confusing
- What patterns you notice

## Common Issues

### Build Fails
If CMake can't find a compiler:
```bash
cmake -DCMAKE_CXX_COMPILER=g++ ..
```

### Tests Don't Compile
This is expected! Many koans won't compile until you fix them. Start with the first compilation error.

### Google Test Download Fails
The CMakeLists.txt downloads Google Test automatically. If it fails, check your internet connection.

## Learning Resources

While working through the koans, you may want to reference:
- [cppreference.com](https://en.cppreference.com/) - Comprehensive C++ reference
- The README.md file - Contains the full curriculum outline
- Your favorite C++ book or tutorial

## Contributing

Found a bug or want to add more koans? Contributions are welcome!

## Next Steps

After completing these koans, you'll have a solid foundation in:
- C++ preprocessing and translation units
- Name lookup and scoping rules
- Type system fundamentals
- Pointers, arrays, and references

The README.md contains many more advanced topics to explore. Consider adding koans for those topics as you continue your C++ journey!

## Have Fun!

Learning C++ is a journey. These koans are designed to make it engaging and practical. Enjoy the process, be patient with yourself, and celebrate each passing test!
