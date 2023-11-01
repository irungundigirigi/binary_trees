#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as a right-child in a binary tree
 * @parent: A pointer to node to enter right child on
 * @value: value to store in new node
 *
 * Return: if parent is NULL/error occured - NULL
 * 		else pointer to new node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		 new->right = parent->right;
		 parent->right->parent = new;
	}
	parent->right = new;

	return (new);
}