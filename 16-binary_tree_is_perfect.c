#include "binary_trees.h"
#include <stdio.h>

void tree_depth(const binary_tree_t *tree, int *depth);
int tree_is_perfect(const binary_tree_t *tree, int depth, int level);

/**
 * binary_tree_is_perfect - Function that checks if a binary tree is perfect
 *
 * @tree: Binary tree parent node
 *
 * Return: '1' if true OR '0' is false
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int depth = 0;

	if (!tree)
		return (0);

	tree_depth(tree, &depth);

	return (tree_is_perfect(tree, depth, 0));
}

/**
 * tree_depth - Function that checks a binary tree's depth
 *
 * @tree: Binary tree parent node
 * @depth: Binary tree depth
 *
 * Return: Always VOID
 */

void tree_depth(const binary_tree_t *tree, int *depth)
{
	while (tree)
	{
		*depth += 1;
		tree = tree->left;
	}
}

/**
 * tree_is_perfect - Function that checks if a binary tree is perfect
 *
 * @tree: Binary tree parent node
 * @depth: Binary tree depth
 * @level: Binary tree level
 *
 * Return: Always VOID
 */

int tree_is_perfect(const binary_tree_t *tree, int depth, int level)
{
	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
	{
		if (depth == (level + 1))
			return (1);

		return (0);
	}

	if (!tree->left && !tree->right)
		return (0);

	return (tree_is_perfect(tree->left, depth, (level + 1)) &&
			tree_is_perfect(tree->right, depth, (level + 1)));
}
