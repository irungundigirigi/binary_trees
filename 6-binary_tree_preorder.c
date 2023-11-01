#include "binary_trees.h"

/**
 * binary_tree_preorder - Goes through a binary tree using pre-order traversal
 * @tree: A pointer to the root of the tree
 * @func: a pointer to fn to be called on each node
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (func && tree)
	{
		func(tree->n);
		bimary_tree_preorder(tree->left,func);
		binary_tree_preorder(tree->right, func);


	}
}
