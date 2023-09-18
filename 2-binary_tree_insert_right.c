#include "binary_trees.h"

/**
 * binary_tree_insert_right - Function that inserts a node as the right-child
 * of another node
 *
 * @parent: Binary tree parent node
 * @value: Value to be inserted into tree
 *
 * Return: Pointer to the newly created node, OR NULL on failure
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *r_leaf;

	if (!parent)
		return (NULL);

	r_leaf = binary_tree_node(parent, value);

	if (parent->right)
	{
		r_leaf->right = parent->right;
		r_leaf->right->parent = r_leaf;
	}

	parent->right = r_leaf;

	return (r_leaf);
}
