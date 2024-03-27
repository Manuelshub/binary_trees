#include "binary_trees.h"

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
	int bf, l_height = 0, r_height = 0;

	/*Checking if the tree is empty.*/
	if (!tree)
		return (0);
	/*Counting the nodes in the left subtree.*/
	l_height = tree->left ? 1 + binary_tree_balance(tree->left) : 0;
	/*Counting the nodes in the right subtree.*/
	r_height = tree->right ? 1 + binary_tree_balance(tree->right) : 0;
	bf = l_height - r_height;
	return (bf);
}
