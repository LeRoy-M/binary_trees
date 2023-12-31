#include "binary_trees.h"

/**
 * binary_tree_delete - Function that deletes an entire binary tree
 *
 * @tree: Binary tree root
 *
 * Return: Always VOID
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return;

	if (tree->left)
		binary_tree_delete(tree->left);
	if (tree->right)
		binary_tree_delete(tree->right);
	free(tree);
}
