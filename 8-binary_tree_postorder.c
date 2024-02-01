#include "binary_trees.h"
/**
 * binary_tree_postorder - Goes through a binary tree using post-order traversal
 * @tree: Pointer to the root node of the tree to traverse.
 * @func: Pointer to a function to call for each node.
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	/* Check if tree and func are not NULL */
	if (tree != NULL && func != NULL)
	{
		/* Recursive call for the left subtree */
		binary_tree_postorder(tree->left, func);
		/* Recursive call for the right subtree */
		binary_tree_postorder(tree->right, func);
		/* Call the function for the current node */
		func(tree->n);
	}
}
/*Babuhatarii*/
