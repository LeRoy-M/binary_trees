#include "binary_trees.h"

/**
 * binary_tree_balance - Function that measures the balance factor of
 * a binary tree
 *
 * @tree: Binary tree parent node
 *
 * Return: Always INT
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	size_t l_height, r_height;
	int bal_f;

	if (!tree)
		return (0);

	l_height = tree->left ? 1 + binary_tree_balance(tree->left) : 0;
	r_height = tree->right ? 1 + binary_tree_balance(tree->right) : 0;

	bal_f = l_height - r_height;

	return (bal_f);
}
