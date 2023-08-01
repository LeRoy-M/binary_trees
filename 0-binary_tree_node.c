#include "binary_trees.h"

/**
 * binary_tree_node - Function that creates a binary tree node
 *
 * @parent: Binary tree root
 * @value: Value to be inserted into tree
 *
 * Return: Pointer to the newly created node, OR NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *leave;

	leave = malloc(sizeof(binary_tree_t));

	if (!leave)
		return (NULL);

	leave->n = value;
	leave->parent = parent;
	leave->left = NULL;
	leave->right = NULL;

	return (leave);
}
