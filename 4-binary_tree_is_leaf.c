#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if a node is a leaf.
 * @node: pointer to the node to check.
 * return 1 if true otherwise 0.
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	/* Check if node is not NULL and has no children */
	if (node != NULL && node->left == NULL && node->right == NULL)
		return (1);
	else
		return (0);
}
