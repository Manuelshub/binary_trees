#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 *
 * @tree: pointer to the node to measure.
 * Return: the height of the tree.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l_height, r_height;

	if (!tree)
		return (0);
	l_height = binary_tree_height(tree->left);
	r_height = binary_tree_height(tree->right);
	return ((l_height > r_height) ? l_height + 1 : r_height + 1);
}

/**
 * binary_tree_balance - measures the balance factor for a
 * binary tree.
 *
 * @tree: pointer to the root node of the tree to measure
 * the balance factor.
 * Return: the balance factor of a binary tree.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	/*Declaration of variables*/
	int bf, l_height, r_height;

	/*Checking if the tree is empty.*/
	if (!tree)
		return (0);
	/*Measuring the height in the left subtree.*/
	l_height = (int)binary_tree_height(tree->left);
	/*Measuring the height of the right subtree.*/
	r_height = (int)binary_tree_height(tree->right);
	/*Calculating the balance factor*/
	bf = l_height - r_height;
	return (bf);
}
