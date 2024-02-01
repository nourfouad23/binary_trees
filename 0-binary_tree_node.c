#include "binary_trees.h"
/**
 * binary_tree_node - make node
 * @parent: parameter
 * Return: get the new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
binary_tree_t *nodo;

nodo = malloc(sizeof(binary_tree_t));
if (nodo == NULL)
return (NULL);
nodo->n = value;
nodo->parent = parent;
nodo->left = NULL;
nodo->right = NULL;
return (nodo);
}