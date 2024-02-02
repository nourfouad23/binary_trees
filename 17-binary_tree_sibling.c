#include "binary_trees.h"

/**
 * binary_tree_sibling - gets node sibling
 *
 *@node: param
 *
 * Return: returns sibling or null
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
if (node == NULL || node->parent == NULL)
return (NULL);
if (node == node->parent->right)
return (node->parent->left);
return (node->parent->right);
}
