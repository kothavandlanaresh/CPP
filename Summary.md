# Summary of Important Concepts

```markdown
## Index
1. [Inline, Extern, and Friend Functions in C++](#inline-extern-and-friend-functions-in-c)
2. [Class Object Initialization in C++](#class-object-initialization-in-c)

#### Inline, Extern, and Friend Functions in C++
- **Inline Functions**:
  - 📋 Functions defined with the `inline` keyword to suggest to the compiler to insert the function's body where the function call is made.
- **Extern Variables**:
  - 📋 Variables declared with the `extern` keyword to indicate that the variable is defined in another translation unit.
- **Friend Functions**:
  - 📋 Functions declared with the `friend` keyword within a class to allow access to the class's private and protected members.

For detailed examples and explanations, refer to [01_inlie_extern_friend.md](Markdown_Files/01_inlie_extern_friend.md).




#### Class Object Initialization in C++
- **Direct Initialization**:
  - 📋 Directly calls the constructor of [`MyClass`](command:_github.copilot.openSymbolFromReferences?%5B%22%22%2C%5B%7B%22uri%22%3A%7B%22scheme%22%3A%22file%22%2C%22authority%22%3A%22%22%2C%22path%22%3A%22%2FC%3A%2FUsers%2Fk6ros%2FDocuments%2FGitHub%2FCPP%2FCPP_Notes%2F02_Class_Objec_Initilisation.cpp%22%2C%22query%22%3A%22%22%2C%22fragment%22%3A%22%22%7D%2C%22pos%22%3A%7B%22line%22%3A4%2C%22character%22%3A31%7D%7D%5D%2C%2250c07ae0-8fcd-4f64-8924-a6a33245f97c%22%5D "Go to definition") with the argument.
- **Copy Initialization**:
  - 📋 Looks like an assignment but calls the constructor of [`MyClass`](command:_github.copilot.openSymbolFromReferences?%5B%22%22%2C%5B%7B%22uri%22%3A%7B%22scheme%22%3A%22file%22%2C%22authority%22%3A%22%22%2C%22path%22%3A%22%2FC%3A%2FUsers%2Fk6ros%2FDocuments%2FGitHub%2FCPP%2FCPP_Notes%2F02_Class_Objec_Initilisation.cpp%22%2C%22query%22%3A%22%22%2C%22fragment%22%3A%22%22%7D%2C%22pos%22%3A%7B%22line%22%3A4%2C%22character%22%3A31%7D%7D%5D%2C%2250c07ae0-8fcd-4f64-8924-a6a33245f97c%22%5D "Go to definition") with the argument.
- **Uniform Initialization (Brace Initialization)**:
  - 📋 Uses braces `{}` to initialize the object. It is part of the C++11 standard and later.
- **Default Initialization**:
  - 📋 Calls the default constructor of [`MyClass`](command:_github.copilot.openSymbolFromReferences?%5B%22%22%2C%5B%7B%22uri%22%3A%7B%22scheme%22%3A%22file%22%2C%22authority%22%3A%22%22%2C%22path%22%3A%22%2FC%3A%2FUsers%2Fk6ros%2FDocuments%2FGitHub%2FCPP%2FCPP_Notes%2F02_Class_Objec_Initilisation.cpp%22%2C%22query%22%3A%22%22%2C%22fragment%22%3A%22%22%7D%2C%22pos%22%3A%7B%22line%22%3A4%2C%22character%22%3A31%7D%7D%5D%2C%2250c07ae0-8fcd-4f64-8924-a6a33245f97c%22%5D "Go to definition").

For detailed examples and explanations, refer to 02_Class_Objec_Initilisation.md.