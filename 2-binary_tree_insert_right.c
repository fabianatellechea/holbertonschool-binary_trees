#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: pointer to the node to insert the right-child in
 * @value: value to put in the new node
 * Return: pointer to the created node, or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right_node = NULL;

	if (parent == NULL)
		return (NULL);

	right_node = binary_tree_node(parent, value);

	if (parent->right == NULL)
	{
		parent->right = right_node;
	}
	else
	{
		right_node->right = parent->right;
		parent->right = right_node;
		right_node->right->parent = right_node;
	}
	return (right_node);
}
