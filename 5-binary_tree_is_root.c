#include "binary_trees.h"

/**
 * binary_tree_is_root - Function that checks if a node is a root
 *
 * @node: Binary tree node
 *
 * Return: '1' if node is a root, '0' if otherwise
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node || node->parent)
		return (0);

	return (1);
}
