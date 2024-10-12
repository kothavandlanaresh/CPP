# Summary of Important Concepts

## Index
1. [Inline, Extern, and Friend Functions in C++](#inline-extern-and-friend-functions-in-c)
2. [Class Object Initialization in C++](#class-object-initialization-in-c)
3. [Compile-time and Runtime Calculations in C++](#compile-time-and-runtime-calculations-in-c)
4. [Address-of, Dereference, and Rvalue References in C++](#address-of-dereference-and-rvalue-references-in-c)



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