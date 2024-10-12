# Summary of Important Concepts

## Index
1. [Inline, Extern, and Friend Functions in C++](#inline-extern-and-friend-functions-in-c)
2. [Class Object Initialization in C++](#class-object-initialization-in-c)

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