#include "binary_trees.h"

/**
* binary_tree_is_leaf : Check if a node is a leaf
* @node: Node to check
*
* Return: If the node is a leaf : 1
*           Otherwise: 0

*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
    if (node == NULL || (node->left != NULL || node->right != NULL))
        return 0;

    return 1;
}