#include "binary_trees.h"

/**
 * binary_tree_postorder - Function that goes through a binary tree using
 * post-order traversal
 *
 * @tree: Binary tree parent node
 * @func: Function pointer
 *
 * Return: Always VOID
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	if (tree->left)
		binary_tree_postorder(tree->left, func);
	if (tree->right)
		binary_tree_postorder(tree->right, func);
	func(tree->n);
}
