#include "binary_trees.h"

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!tree->left != !tree->right)
		return (0);
	if (!tree->left)
		return (1);
	if (!tree->left->left != !tree->right->left)
		return (0);
	if (!binary_tree_is_perfect(tree->left) ||
			!binary_tree_is_perfect(tree->right))
		return (0);
	return (1);
}
