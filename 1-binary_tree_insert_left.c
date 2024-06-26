#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left child
 * of another node.
 *
 * @parent: pointer to the node to insert the left child in.
 * @value: value to store in the new node.
 *
 * Return: a pointer to the created node or NULL on failure.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (!parent)
		return (NULL);
	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);
	new->n = value;
	new->parent = parent;
	new->right = NULL;
	new->left = NULL;
	if (parent->left)
	{
		new->left = parent->left;
		parent->left->parent = new;
	}
	parent->left = new;
	return (new);
}
