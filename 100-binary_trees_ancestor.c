#include "binary_trees.h"

binary_tree_t *find_ancestor(binary_tree_t *root, const binary_tree_t *n1,
		const binary_tree_t *n2);

/**
 * binary_trees_ancestor - Function that finds the lowest common
 * ancestor of two nodes
 *
 * @first: Pointer to first binary tree node
 * @second: Pointer to second binary tree node
 *
 * Return: binary_tree_t strcut OR NULL
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	binary_tree_t *f_tree_root;

	if (!first || !second)
		return (NULL);

	if (first->parent)
		f_tree_root = first->parent;

	while (f_tree_root->parent)
		f_tree_root = f_tree_root->parent;

	if (!f_tree_root)
		return (NULL);

	return (find_ancestor(f_tree_root, first, second));
}

/**
 * find_ancestor - Function that finds the lowest common
 * ancestor of two nodes
 *
 * @root: Binary tree root node
 * @n1: Pointer to first binary tree node
 * @n2: Pointer to second binary tree node
 *
 * Return: binary_tree_t strcut OR NULL
 */

binary_tree_t *find_ancestor(binary_tree_t *root, const binary_tree_t *n1,
		const binary_tree_t *n2)
{
	binary_tree_t *left = NULL, *right = NULL;

	if (root->n == n1->n || root->n == n2->n)
		return (root);
	if (!root->left && !root->right)
		return (NULL);

	if (root->left)
		left = find_ancestor(root->left, n1, n2);
	if (root->right)
		right = find_ancestor(root->right, n1, n2);
	if (left && right)
		return (root);

	return (left == NULL ? right : left);
}
