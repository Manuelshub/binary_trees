#include "binary_trees.h"

/**
 * binary_tree_inorder - goes through a binary tree using
 * the in-order traversal.
 *
 * @tree: pointer to the root node.
 * @func: pointer to the function to call for all nodes.
 * Return: nothing.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	/*Recursively visiting the left subtree.*/
	binary_tree_inorder(tree->left, func);
	/*Come back to the root.*/
	func(tree->n);
	/*Recursively visit the right subtree.*/
	binary_tree_inorder(tree->right, func);
}
