#include "binary_trees.h"

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
	binary_tree_t *left = first->parent, *right = second->parent;

	if (!first || !second)
		return (NULL);
	if (first == second)
		return ((binary_tree_t *)first);

	if (first == right || !left || (!left->parent && right))
		return (binary_trees_ancestor(first, right));
	else if (second == left || !right || (!right->parent && left))
		return (binary_trees_ancestor(left, second));

	return (binary_trees_ancestor(left, right));
}
