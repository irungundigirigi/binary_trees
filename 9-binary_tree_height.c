#include "binary_trees.h"

/**
 * binary_tree_height - Measure binary tree height
 * @tree: A pointer to the root node of tree
 *
 * Return: If tree is NULL, your function must return 0, else return height.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t l_height = 0, r_height = 0;

		l_height = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		r_height = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		return ((l_height > r_height) ? l_height : r_height);
	}
	return (0);
}
