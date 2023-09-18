#include "binary_trees.h"

/**
 * binary_tree_sibling - Function that finds the sibling of a node
 *
 * @node: Binary tree node
 *
 * Return: Always BINARY_TREE_T
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	if (node->parent->left != node)
		return (node->parent->left);

	return (node->parent->right);
}
