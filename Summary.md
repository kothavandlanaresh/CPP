# Summary of Important Concepts

## Index
1. [Inline, Extern, and Friend Functions in C++](#inline-extern-and-friend-functions-in-c)
2. [Class Object Initialization in C++](#class-object-initialization-in-c)
3. [Compile-time and Runtime Calculations in C++](#compile-time-and-runtime-calculations-in-c)
4. [Address-of, Dereference, and Rvalue References in C++](#address-of-dereference-and-rvalue-references-in-c)
5. [String Usage in C++](#string-usage-in-c)
6. [Modifying Constants in C++](#modifying-constants-in-c)
7. [Constexpr Teaser in C++](#constexpr-teaser-in-c)
8. [Block Scope in C++](#block-scope-in-c)
9. [Raw Arrays in C++](#raw-arrays-in-c)



---


#### Inline, Extern, and Friend Functions in C++
- 📝 **Inline Functions**: Defined with `inline` to suggest inlining the function's body at the call site.
- 🌐 **Extern Variables**: Declared with `extern` to indicate definition in another translation unit, typically declared in headers and defined in source files.
- 🤝 **Friend Functions**: Declared with `friend` within a class to access private and protected members.

For detailed examples and explanations, refer to [01_inlie_extern_friend.md](Markdown_Files/01_inlie_extern_friend.md).


---


#### Class Object Initialization in C++
- 📝 **Direct Initialization**: Directly calls the constructor of `MyClass` with the argument.
- 📝 **Copy Initialization**: Looks like an assignment but calls the constructor of `MyClass` with the argument.
- 📝 **Uniform Initialization (Brace Initialization)**: Uses braces `{}` to initialize the object. It is part of the C++11 standard and later.
- 📝 **Default Initialization**: Calls the default constructor of `MyClass`.

For detailed examples and explanations, refer to [02_class-object-initialization.md](Markdown_Files/02_Class_Objec_Initilisation.md).


---


#### Compile-time and Runtime Calculations in C++
- 📝 **Compile-time Calculation**: Uses `constexpr` to evaluate the factorial function at compile-time.
- 📝 **Runtime Calculation**: Uses a loop to evaluate the factorial function at runtime.

For detailed examples and explanations, refer to [03_compiletime_and_runtime.md](Markdown_Files/03_compiletime_and_runtime.md).


---


#### Address-of, Dereference, and Rvalue References in C++
- 📝 **Address-of Operator (&)**: Used to obtain the memory address of a variable.
- 📝 **Dereference Operator (*)**: Used to access the value at the memory address pointed to by a pointer.
- 📝 **Rvalue Reference (&&)**: Used to bind to temporary objects (rvalues).
- 📝 **Passing by Reference**: Efficient, modifies the original variable.
- 📝 **Passing by Pointer**: Efficient, modifies the original variable, requires careful handling.
- 📝 **Passing by Rvalue Reference**: Efficient, modifies temporary objects, should be used with care.
- ⚠️ **Dangerous Habits and How to Avoid Them**:
  - **Dereferencing Null Pointers**: Always check if a pointer is null before dereferencing it.
  - **Casting Away const**: Avoid modifying const values. If necessary, ensure the original intent of const correctness is preserved.
  - **Binding Null Pointers to References**: Never bind a reference to a dereferenced null pointer.
  - **Misusing Rvalue References**: Ensure rvalue references are used appropriately and understand the implications of `std::move`.
  - **Memory Leaks**: Always manage dynamic memory properly, using smart pointers where possible.
  - **Undefined Behavior**: Be cautious of operations that can lead to undefined behavior, such as out-of-bounds access or modifying const data.

For detailed examples and explanations, refer to [04_ad&_ptr_rref&&.md](Markdown_Files/04_ad&_ptr_rref&&.md).


---


#### String Usage in C++
- 📝 **Incorrect Character Initialization**: Demonstrates an incorrect way to initialize a character variable.
- 📝 **Character Pointer to String Literal**: Demonstrates a character pointer to a string literal.
- 📝 **Constant Character Pointer to String Literal**: Demonstrates a constant character pointer to a string literal.
- 📝 **std::string Class**: Demonstrates the use of the `std::string` class.
- 📝 **std::string_view**: Demonstrates the use of the `std::string_view` class.

For detailed examples and explanations, refer to [07_string_usage.md](Markdown_Files/07_string_usage.md).


---


#### Modifying Constants in C++
- 📝 **Constant Integer**: Declares a constant integer `x` with a value of 5.
- 📝 **Pointer Casting**: Creates a pointer `p` that points to `x` by casting away the constness.
- 📝 **Modifying Constant**: Modifies the value pointed to by `p` to 6.
- 📝 **Printing the Value**: Prints the value of `x` to the standard output.

For detailed examples and explanations, refer to [11_const.md](Markdown_Files/11_const.md).


---


#### Constexpr Teaser in C++
- 📝 **Constant Expression Integer (`constexpr`)**: Defines a variable whose value is known at compile-time.
- 📝 **Regular Integer**: Defines a regular integer whose value can be modified at runtime.
- 📝 **Attempt to Modify `constexpr`**: Shows that modifying a `constexpr` variable results in a compilation error.
- 📝 **Modify Regular Integer**: Shows that modifying a regular integer is allowed.
- 📝 **Printing Values**: Prints the values of the `constexpr` and regular integer to the standard output.

For detailed examples and explanations, refer to [11a_constexpr_teaser.md](Markdown_Files/11a_constexpr_teaser.md).



---


#### Block Scope in C++
- 📝 **Block Scope**: Variables declared within a block `{}` are only accessible within that block.
- 📝 **Outer Scope**: Variables declared in the outer scope are separate from those declared in inner blocks.
- 📝 **Scope Error**: Attempting to access a variable outside its scope results in a compilation error.

For detailed examples and explanations, refer to [12_scope.md](Markdown_Files/12_scope.md).


---


#### Raw Arrays in C++
- 📝 **Raw Arrays**: Basic feature of C++ with several limitations.
- 📝 **Fixed Size**: The size of a raw array must be known at compile time and cannot be changed dynamically.
- 📝 **No Bounds Checking**: Accessing elements outside the bounds of the array can lead to undefined behavior.
- 📝 **Manual Memory Management**: When using dynamic arrays, the programmer is responsible for deallocating the memory.
- 📝 **Modern Alternatives**: `std::array`, `std::vector`, `std::unique_ptr`, and `std::shared_ptr` provide safer and more maintainable code.

For detailed examples and explanations, refer to [13_raw_arrays.md](Markdown_Files/13_raw_arrays.md).


---





---






---





---





---





---






---





---





---





---






---





---





---





---






---





---





---





---






---





---





---





---






---





---





---





---






---





---





---





---






---





---





---





---






---





---





---





---






---





---





---





---






---





---





---





---






---





---





---





---






---





---





---





---






---





---





---





---






---





---





---





---






---





---





---





---






---





---





---





---






---





---





---





---






---





---





---





---






---





---





---





---






---





---





---





---






---





---





---





---






---





---





---





---



