#include "binary_trees.h"

int tree_height(const binary_tree_t *tree);

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
	if (!tree)
		return (0);

	return (tree_height(tree->left) - tree_height(tree->right));
}

/**
 * tree_height - Function that measures the balance factor of
 * a binary tree
 *
 * @tree: Binary tree parent node
 *
 * Return: Always INT
 */

int tree_height(const binary_tree_t *tree)
{
	int bal_f_l, bal_f_r;

	if (!tree)
		return (0);

	bal_f_l = tree->left ? 1 + tree_height(tree->left) : 1;
	bal_f_r = tree->right ? 1 + tree_height(tree->right) : 1;

	return ((bal_f_l > bal_f_r) ? bal_f_l : bal_f_r);
}
