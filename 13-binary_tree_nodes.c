#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with atleast one child
 * in the binary tree.
 *
 * @tree: pointer to the root node of the tree to count the
 * number of nodes.
 *
 * Return: the number of nodes.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	/*Start counting from 0.*/
	size_t nodes = 0;

	/*If the current tree node is empty (NULL), return 0.*/
	if (!tree)
		return (0);
	/**
	 * If the current tree node has left or right children
	 * (meaning it's a node), add 1 because we found a
	 * node.
	 */
	if (tree->left || tree->right)
		nodes += 1;
	/*Counting nodes in the left subtree*/
	nodes += binary_tree_nodes(tree->left);
	/*Counting nodes in the right subtree*/
	nodes += binary_tree_nodes(tree->right);
	/*Finally return the total number of nodes.*/
	return (nodes);
}
