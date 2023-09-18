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
	int bal_f_l, bal_f_r;

	if (!tree)
		return (0);

	bal_f_l = tree->left ? 1 + binary_tree_balance(tree->left) : 0;
	bal_f_r = tree->right ? 1 + binary_tree_balance(tree->right) : 0;

	return (bal_f_l - bal_f_r);
}
