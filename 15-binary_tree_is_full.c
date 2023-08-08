#include "binary_trees.h"

/**
 * binary_tree_is_full - Function that checks if a binary tree is full 
 *
 * @tree: Binary tree parent node
 *
 * Return: '1' if true OR '0' is false
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree || (!tree->left && tree->right) || (tree->left &&
				!tree->right))
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	if ((binary_tree_is_full(tree->left) == 0) ||
			(binary_tree_is_full(tree->right) == 0))
		return (0);

	return (1);
}
