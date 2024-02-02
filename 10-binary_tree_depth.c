#include "binary_trees.h"
size_t binary_tree_depth2(const binary_tree_t *tree);

/**
 * binary_tree_depth2 - gets depth
 *
 *@tree: param
 *
 *Return: return depth
 */

size_t binary_tree_depth2(const binary_tree_t *tree)
{
  int cont1 = 0;

  if (tree == NULL)
    return (0);

  if (tree->parent != NULL)
    cont1 += binary_tree_depth2(tree->parent);

  return (cont1 + 1);
}

/**
 *binary_tree_depth - gets the depth
 *
 *@tree: param
 *
 *Return: returns depth
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
  if (tree == NULL)
    return (0);

  return (binary_tree_depth2(tree) - 1);
}
