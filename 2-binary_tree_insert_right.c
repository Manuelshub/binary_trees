#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right
 * child of another node.
 *
 * @parent: a pointer to the node to insert the right child.
 * @value: the value to store in the new node.
 *
 * Return: the pointer to the created node or NULL on failure.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (!parent)
		return (NULL);
	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);
	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;
	if (parent->right)
	{
		new->right = parent->right;
		parent->right->parent = new;
	}
	parent->right = new;
	return (new);
}
