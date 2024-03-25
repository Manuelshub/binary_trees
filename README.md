# Binary Trees

This project contains implementations of various binary tree data structures and algorithms in the C programming language. Binary trees are fundamental data structures consisting of nodes, where each node has at most two children: a left child and a right child.

## Overview

Binary trees are widely used in computer science and have various applications, including:

- Representing hierarchical data structures such as file systems, organization charts, and expression trees.
- Serving as the basis for more complex data structures and algorithms, such as binary search trees, AVL trees, and binary heaps.
- Providing efficient storage and retrieval mechanisms for sorted data.

In this project, we explore the fundamental concepts of binary trees and implement various operations and algorithms on them, including:

- Creation and traversal of binary trees (pre-order, in-order, post-order).
- Insertion and deletion of nodes in binary search trees.
- Height and depth calculations.
- Tree balancing techniques (e.g., AVL trees).

## Directory Structure

- `binary_trees.h`: Header file containing function prototypes and data structure definitions for binary trees.
- `binary_tree_print.c`: Function to print binary trees in a pretty way.
- `0-binary_tree_node.c`: A function that creates a binary tree node.
- `1-binary_tree_insert_left.c`: Function that inserts a node as the left child of another node.
-

## Getting Started

To compile and run the project, follow these steps:

1. Clone this repository to your local machine:

    ```bash
    git clone https://github.com/Manuelshub/binary_trees.git
    ```

2. Navigate to the project directory:

    ```bash
    cd binary_trees
    ```

3. Compile each dot c files:

    ```bash
    gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 0-main.c 0-binary_tree_node.c -o 0-node
    ```

4. Run the compiled program:

    ```bash
    ./0-node
    ```
