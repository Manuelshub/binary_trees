#include "binary_trees.h"

/**
 * binary_tree_postorder - traverses a binary tree using post
 * order traversal.
 *
 * @tree: pointer to the root node of the tree to traverse.
 * @func: pointer to a function to call for each node.
 * Return: nothing.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	/*Recursively traversing the left subtree.*/
	binary_tree_postorder(tree->left, func);
	/*Recursively traversing the right subtree.*/
	binary_tree_postorder(tree->right, func);
	/*Printing the root value lateron.*/
	func(tree->n);
}
