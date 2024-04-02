#include "binary_trees.h"

/**
 * binary_tree_levelorder - traverses through a tree using
 * levelorder traversal.
 *
 * @tree: pointer to the root node of the tree to traverse.
 * @func: pointer to a function to call for each node.
 * Return: nothing.
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	size_t h, i;

	if (!tree || !func)
		return;
	h = binary_tree_height(tree);
	for (i = 0; i < h; i++)
		binary_tree_level(tree, func, i);
}

/**
 * binary_tree_height - measures the height of a binary tree
 *
 * @tree: pointer to the root node of the tree to measure
 * Return: the height of the tree, else 0 if tree is NULL.
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

void binary_tree_level(const binary_tree_t *tree, void (*func)(int), size_t l_no)
{
	if (l_no == 0)
		func(tree->n);
	else
	{
		binary_tree_level(tree->left, func, l_no - 1);
		binary_tree_level(tree->right, func, l_no - 1);
	}
}
