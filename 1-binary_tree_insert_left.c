#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserts a node as the left-child of another node.
 * @parent: pointer to the node to insert the left-child in
 * @value: value to put in the new node
 * Return: pointer to the created node, or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *left_node = NULL;

	if (parent == NULL)
		return (NULL);

	left_node = binary_tree_node(parent, value);

	if (parent->left == NULL)
	{
		parent->left = left_node;
	}
	else
	{
		left_node->left = parent->left;
		parent->left = left_node;
		left_node->left->parent = left_node;
	}
	return (left_node);
}
