#include "binary_trees.h"

size_t binary_tree_height2(const binary_tree_t *tree);

/**
 *binary_tree_is_perfect - gets perfect tree
 *
 *@tree: param
 *
 *Return: returns 0 or 1
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
size_t conf = 0, conf2 = 2, i = 0;

if (tree == NULL)
return (0);

conf = binary_tree_height(tree);
for (i = 1; i < conf; i++)
conf2 = conf2 * 2;
if (binary_tree_leaves(tree) == conf2)
return (1);
return (0);
}

/**
 * binary_tree_leaves - gets tree leaves
 *
 *@tree: param
 *
 *Return: leaves num
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
int cont1 = 0;

if (tree == NULL)
return (0);

if (tree->left == NULL && tree->right == NULL)
return (cont1 + 1);

if (tree->left != NULL)
cont1 += binary_tree_leaves(tree->left);

if (tree->right != NULL)
cont1 += binary_tree_leaves(tree->right);

return (cont1);
}


/**
 * binary_tree_height2 - gets tree height
 *
 *@tree: param
 *
 *Return: returns height
 */

size_t binary_tree_height2(const binary_tree_t *tree)
{
int cont1 = 0, cont2 = 0;

if (tree == NULL)
return (0);

if (tree->left != NULL)
cont1 += binary_tree_height2(tree->left);

if (tree->right != NULL)
cont2 += binary_tree_height2(tree->right);

if (cont1 > cont2)
return (cont1 + 1);
return (cont2 + 1);
}

/**
 * binary_tree_height - gets height of tree
 *
 *@tree: param
 *
 *Return: retruns height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
if (tree == NULL)
return (0);

return ((binary_tree_height2(tree)) - 1);
}
