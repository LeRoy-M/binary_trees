#include "binary_trees.h"

/**
 * binary_tree_depth - Function that measures the depth of a binary tree
 *
 * @tree: Binary tree parent node
 *
 * Return: Always UNSIGNED INT
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (!tree || !tree->parent)
		return (0);

	return (binary_tree_depth(tree->parent) + 1);
}
