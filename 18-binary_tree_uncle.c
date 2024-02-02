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

/**
 *binary_tree_uncle - gets uncle node
 *
 *@node: param
 *
 * Return: returns null or uncle
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
if (node == NULL || node->parent == NULL)
return (NULL);

return (binary_tree_sibling(node->parent));
}
