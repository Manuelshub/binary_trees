#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect.
 *
 * @tree: the pointer to the root node of the tree to check.
 * Return: 1 if perfect otherwise 0.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	/*If the tree is empty*/
	if (!tree)
		return (0);
	/*Checking if the node has any left and right children.*/
	if (!tree->left != !tree->right)
		return (0);
	if (!tree->left)
		return (1);
	/*Check for balanced nodes.*/
	if (!tree->left->left != !tree->right->left)
		return (0);
	if (!binary_tree_is_perfect(tree->left) ||
			!binary_tree_is_perfect(tree->right))
		return (0);
	return (1);
}
