# Important Notes

### Casting Away Const
- Casting away `const` can be done but it is a bad practice.


### String Initialization
- **Incorrect Initialization**: `char str1 = 'abc';` - Incorrect way to initialize a character variable, causes a compilation error.
- **Character Pointer**: `char* str2 = "abc";` - Character pointer to a string literal, but will only print the first character.
- **Constant Character Pointer**: `const char* str3 = "abc";` - Correct way to handle string literals using primitive types.
- **std::string**: `std::string str4 = "abc";` - Recommended way to handle strings in C++.


### Globals
- Globals are no good.


### Reference 01
- **Inline Functions**: Defined with `inline` to suggest inlining the function's body at the call site.
- **Extern Variables**: Declared with `extern` to indicate definition in another translation unit, typically declared in headers and defined in source files.
- **Friend Functions**: Declared with `friend` within a class to access private and protected members.

### Reference 02
- **Direct Initialization**: `MyClass obj1(99);` - Directly calls the constructor with arguments.
- **Copy Initialization**: `MyClass obj2 = 99;` - Looks like assignment but calls the constructor.
- **Uniform Initialization**: `MyClass obj3{99};` - Uses braces, avoids parsing issues, and is preferred in modern C++.
- **Default Initialization**: `MyClass obj4;` - Calls the default constructor.


### test 1

