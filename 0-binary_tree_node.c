#include "binary_trees.h"

/**
 * binary_tree_node - Function that creates a binary tree node
 *
 * @parent: Binary tree parent node
 * @value: Value to be inserted into tree
 *
 * Return: Pointer to the newly created node, OR NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *leaf;

	leaf = malloc(sizeof(binary_tree_t));

	if (!leaf)
		return (NULL);

	leaf->n = value;
	leaf->parent = parent;
	leaf->left = NULL;
	leaf->right = NULL;

	return (leaf);
}
