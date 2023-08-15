
# 0x0E. C - Structures, typedef 🏢

In this directory, you will find a collection of C programs that demonstrate the concepts of structures and typedef. These programs illustrate how to define, initialize, and work with user-defined data types and structures in C.


## Task 0 - Define a New Struct Dog 🐶

**File:** dog.h  
📝 **Description:** Defines a new type `struct dog` with the elements `name`, `age`, and `owner`. These elements represent a dog's name, age, and owner, respectively.

---

## Task 1 - Initialize a Struct Dog with `init_dog` 🌟

**File:** 1-init_dog.c  
📝 **Description:** Initializes a variable of type `struct dog` with the provided values. This function takes a pointer to a `struct dog` variable and assigns values to its `name`, `age`, and `owner` members.

---

## Task 2 - Print a Struct Dog with `print_dog` 🐾

**File:** 2-print_dog.c  
📝 **Description:** Prints the contents of a `struct dog` variable. This function takes a pointer to a `struct dog` variable and prints its `name`, `age`, and `owner` members. If any of the members are NULL, "(nil)" is printed in their place.

---

## Task 3 - Define a New Type `dog_t` for Struct Dog 🐕

**File:** dog.h  
📝 **Description:** Defines a new type `dog_t` as a new name for the type `struct dog`. This typedef makes it easier to work with `struct dog` variables.

---

## Task 4 - Create a New Dog with `new_dog` 🌟

**File:** 4-new_dog.c  
📝 **Description:** Creates a new `struct dog` and returns a pointer to it. This function takes the values for `name`, `age`, and `owner`, creates a new dog with those values, and returns a pointer to the new dog.

---

## Task 5 - Free Dogs with `free_dog` 🐕‍🦺

**File:** 5-free_dog.c  
📝 **Description:** Frees the memory allocated for a `struct dog` variable created using `new_dog`. This function takes a pointer to a `struct dog` variable and frees the memory allocated for it.

---

### Detailed Explanations 📑
For detailed explanations of each step and the commands used, you can refer to the commit descriptions in the directory's commit history. Each commit message contains a clear description of the actions taken, including the relevant commands used in the terminal.
