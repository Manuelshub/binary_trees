#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in the binary tree.
 *
 * @tree: pointer to the root node of the tree to count the
 * number of leaves.
 *
 * Return: the number of leaves.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	/*Start counting from 0.*/
	size_t leaves = 0;

	/*If the current tree node is empty (NULL), return 0.*/
	if (!tree)
		return (0);
	/**
	 * If the current tree node has no left or right children
	 * (meaning it's a leaf node), add 1 because we found a
	 * leaf node.
	 */
	if (!tree->left && !tree->right)
		leaves += 1;
	/*Counting leaves in the left subtree*/
	leaves += binary_tree_leaves(tree->left);
	/*Counting leaves in the right subtree*/
	leaves += binary_tree_leaves(tree->right);
	/*Finally return the total number of leaves.*/
	return (leaves);
}
