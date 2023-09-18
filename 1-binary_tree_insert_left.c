#include "binary_trees.h"

/**
 * binary_tree_insert_left - Function that inserts a node as the left-child
 * of another node
 *
 * @parent: Binary tree parent node
 * @value: Value to be inserted into tree
 *
 * Return: Pointer to the newly created node, OR NULL on failure
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *l_leaf;

	if (!parent)
		return (NULL);

	l_leaf = binary_tree_node(parent, value);

	if (parent->left)
	{
		l_leaf->left = parent->left;
		l_leaf->left->parent = l_leaf;
	}

	parent->left = l_leaf;

	return (l_leaf);
}
