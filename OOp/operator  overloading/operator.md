

- **Private Members:**
  - `real`: Stores the real part of the complex number.
  - `imag`: Stores the imaginary part of the complex number.

- **Public Methods:**
  - **Constructors:**
    - `complex()`: A default constructor initializing `real` and `imag` to 0.
    - `complex(int r, int c)`: A parameterized constructor initializing `real` to `r` and `imag` to `c`.
  - **Operator Overloading (`operator+`)**:
    - This method allows the use of the `+` operator to add two `complex` objects.
  - **Display (`display`)**:
    - Displays the complex number in the form of `real + imag*i`.

###  The `main()` Function
The `main()` function demonstrates how the `complex` class and the overloaded `+` operator work.

```cpp
int main() {
    complex p(2, 3), q(5, 7), r;
    r = p + q;
    p.display();
    cout << " + ";
    q.display();
    cout << "=";
    r.display();
    return 0;
}
```

- **Creating Objects:**
  - `complex p(2, 3);`: Initializes a `complex` object `p` with `real = 2` and `imag = 3`.
  - `complex q(5, 7);`: Initializes another `complex` object `q` with `real = 5` and `imag = 7`.
  - `complex r;`: Initializes an empty `complex` object `r` with default values `real = 0` and `imag = 0`.

- **Overloaded `+` Operator:**
  - `r = p + q;`: This statement triggers the overloaded `+` operator.

### Operator Overloading in Action
Let's dive deeper into what happens when `r = p + q;` is executed.

1. **Calling the `operator+` Function:**
   - The compiler sees the `+` operator being used with two `complex` objects (`p` and `q`).
   - The compiler understands that the `complex` class has an overloaded `+` operator.
   - It translates `p + q` into a function call: `p.operator+(q)`.

2. **Inside the `operator+` Function:**
   - The function `operator+` is called with `p` as `this` (the calling object) and `q` as `c1`.
   - **Creating Temporary Object:**
     ```cpp
     complex temp;
     ```
     - A temporary `complex` object `temp` is created with `real = 0` and `imag = 0` (default constructor).
   - **Adding Real and Imaginary Parts:**
     ```cpp
     temp.real = real + c1.real;
     temp.imag = imag + c1.imag;
     ```
     - `temp.real` is assigned the sum of `p.real` and `q.real`, i.e., `2 + 5 = 7`.
     - `temp.imag` is assigned the sum of `p.imag` and `q.imag`, i.e., `3 + 7 = 10`.
   - **Returning Result:**
     ```cpp
     return temp;
     ```
     - The `temp` object, now holding `real = 7` and `imag = 10`, is returned.

3. **Assigning the Result:**
   - The returned `temp` object is assigned to `r`.
   - Now, `r.real = 7` and `r.imag = 10`.

###  Displaying the Result
Finally, the program displays the result:

```cpp
p.display();         // Outputs "2+3*i"
cout << " + ";
q.display();         // Outputs "5+7*i"
cout << "=";
r.display();         // Outputs "7+10*i"
```

The output of this program is:
```
2+3*i + 5+7*i=7+10*i
```

### What the Compiler Does
- **Parsing:** The compiler reads and parses the class definition and main function.
- **Function Call Resolution:** When `p + q` is encountered, the compiler resolves this to `p.operator+(q)`.
- **Object Construction:** The compiler ensures that all objects (`p`, `q`, `r`, and `temp`) are properly constructed.
- **Function Execution:** The compiler executes the `operator+` function and the `display` functions.
- **Memory Management:** The compiler manages the memory for objects, ensuring that temporary objects are created and destroyed as needed.

