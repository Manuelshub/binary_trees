#include "binary_trees.h"

/**
 * binary_tree_is_complete - checks if a binary tree is complete
 *
 * @tree: the pointer to the root node.
 * Return: 1 if complete otherwise 0.
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	size_t size;
	int check;

	if (!tree)
		return (0);
	size = binary_tree_size(tree);
	check = is_complete(tree, 0, size);

	return (check);
}

/**
 * is_complete - helper function that checks if a tree is
 * complete.
 *
 * @tree: pointer to the root node of the tree.
 * @i: the index of the current node.
 * @nodes_size: the size of the whole tree.
 *
 * Return: 1 if complete otherwise 0.
 */
int is_complete(const binary_tree_t *tree, size_t i, size_t nodes_size)
{
	/*An empty tree is a complete tree*/
	if (!tree)
		return (1);

	/**
	 * if index assigned to current node is more than
	 * number of nodes in the tree, then tree is not complete
	 */
	if (i >= nodes_size)
		return (0);

	/*Recur for the left and right subtrees*/
	return (is_complete(tree->left, 2 * i + 1, nodes_size) &&
			is_complete(tree->right, 2 * i + 2, nodes_size));
}

/**
 * binary_tree_size - measures the size of a binary tree.
 *
 * @tree: pointer to the root node of the tree to measure.
 * Return: the size of the tree else 0.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size, l_tree, r_tree;

	if (!tree)
		return (0);

	l_tree = binary_tree_size(tree->left);
	r_tree = binary_tree_size(tree->right);
	size = l_tree + r_tree + 1;

	return (size);
}
