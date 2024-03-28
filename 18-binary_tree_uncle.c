#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node.
 *
 * @node: pointer to the node to find the uncle.
 * Return: pointer to the uncle node otherwise NULL.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *grandparent;

	grandparent = node->parent->parent;
	if (!node || !node->parent || !grandparent)
		return (NULL);
	if (!grandparent->left ||
			!grandparent->right)
		return (NULL);
	if (grandparent->left ==
			node->parent)
		return (grandparent->right);
	return (grandparent->left);
}
