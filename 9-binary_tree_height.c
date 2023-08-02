#include "binary_trees.h"

size_t bi_tree_h(const binary_tree_t *tree, size_t h);

/**
 * binary_tree_height - Function that measures the height of a binary tree
 *
 * @tree: Binary tree parent node
 *
 * Return: Always UNSIGNED INT
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height;

	height = bi_tree_h(tree, 0);

	return (height);
}

/**
 * bi_tree_h - Function that measures the height of a binary tree recursively
 *
 * @tree: Binary tree parent node
 * @h: Height of binary tree
 *
 * Return: Always UNSIGNED INT
 */

size_t bi_tree_h(const binary_tree_t *tree, size_t h)
{
	if (!tree)
		return (0);

	if (tree->left)
	{
		h++;
		bi_tree_h(tree->left, h);
	}
	if (tree->right)
	{
		h++;
		bi_tree_h(tree->right, h);
	}

	return (h);
}
