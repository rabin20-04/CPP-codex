// Namespaces in C++ were introduced to address a specific problem that arises
//  in large-scale software development: **name conflicts**.
//   Let's dive into why namespaces are necessary and how they complement functions and classes.

// ### Why Namespaces?

// As projects grow in size, it's common to have multiple libraries or modules, 
// each potentially defining functions, classes, and variables with the same names.
//  Without namespaces, these name conflicts can cause errors and make code maintenance difficult.
//   Namespaces help by providing a way to group related functions, classes, and variables under a unique identifier,
//    thus avoiding conflicts.

// ### Understanding Namespaces

// A namespace is a declarative region that provides a scope to the 
// identifiers inside it. Identifiers declared in a namespace are qualified by the namespace's name,
// preventing conflicts with identifiers in other namespaces or the global scope.

// #### Example Without Namespaces

// Consider two libraries, both defining a function named `printMessage`.

// ```cpp
// // Library A



// void printMessage() {
//     std::cout << "Hello from Library A!" << std::endl;
// }

// // Library B
// void printMessage() {
//     std::cout << "Hello from Library B!" << std::endl;
// }

// int main() {
//     printMessage(); // Which printMessage gets called?
//     return 0;
// }
// ```

// This code will cause a conflict because the compiler can't distinguish between the two `printMessage` functions.

// *****************************************************************************************************************************************



// #### Example With Namespaces

// Now, let's use namespaces to avoid this conflict:

// ```cpp
// #include <iostream>

// namespace LibraryA {
//     void printMessage() {
//         std::cout << "Hello from Library A!" << std::endl;
//     }
// }

// namespace LibraryB {
//     void printMessage() {
//         std::cout << "Hello from Library B!" << std::endl;
//     }
// }

// int main() {
//     LibraryA::printMessage(); // Calls LibraryA's printMessage
//     LibraryB::printMessage(); // Calls LibraryB's printMessage
//     return 0;
// }
// ```

// *********************************************************************************************

// ### How Namespaces Complement Functions and Classes

// Namespaces provide a way to organize code logically
//  and avoid naming conflicts, but they don't replace functions and classes.
//   Instead, they enhance their usage by grouping related entities together. Here's how:

// 1. **Organizing Large Projects**: In a large project, you might have many 
// classes and functions. Namespaces help group these related entities, making the code more readable and maintainable.

// 2. **Avoiding Name Conflicts**: Namespaces prevent naming conflicts by allowing 
// the same function or class name to be used in different parts of the codebase without 
// collision, as long as they are in different namespaces.

// 3. **Modularity**: Namespaces support the modular design of software. Different 
// modules or libraries can define their own namespaces, ensuring that they don't interfere with each other.

// #### Example with Classes and Namespaces


#include <iostream>

namespace Graphics {
    class Shape {
    public:
        void draw() {
            std::cout << "Drawing a shape." << std::endl;
        }
    };
}

namespace Audio {
    class Shape {
    public:
        void playSound() {
            std::cout << "Playing sound for a shape." << std::endl;
        }
    };
}

int main() {
    Graphics::Shape graphicShape;
    
    //should write  Graphics::Shape graphicShape;
    // Under graphics namespace there is a class Shape and graphicsSpace is object of the shape within the Graphics namespace
    // cant write
    // Shape s1
    //  because there can be many shape classes under many different  namespaces

    // Calls Graphics::Shape::draw ---------Here graphicShape is object 
    
    graphicShape.draw(); 

    Audio::Shape audioShape;
    audioShape.playSound(); // Calls Audio::Shape::playSound

    return 0;
}


// ### Summary

// Namespaces provide a solution to name conflicts by creating distinct scopes for identifiers,
//  allowing the same name to be used for different purposes in different contexts. 
//  This is particularly useful in large projects or when integrating multiple libraries.

// - **Functions and Classes**: Namespaces help organize functions and classes into logical groups,
// avoiding naming conflicts and promoting modularity.
// - **Scope and Access**: Namespaces define a scope for identifiers, ensuring that names in different 
// namespaces do not interfere with each other.

// By using namespaces, you can manage large codebases more effectively, ensuring that your code remains clear, 
// organized, and free from naming conflicts.