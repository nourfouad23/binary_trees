#include "binary_trees.h"

/**
 * binary_tree_preorder - order
 *
 *@tree: param
 *@func: param
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree != NULL && func != NULL)
{
func(tree->n);
if (tree->left != NULL)
binary_tree_preorder(tree->left, func);

if (tree->right != NULL)
binary_tree_preorder(tree->right, func);
}
}
