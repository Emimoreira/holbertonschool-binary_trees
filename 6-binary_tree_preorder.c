#include "binary_trees.h"

/**
 * binary_tree_preorder - Recorre el árbol en preorden y aplica una funcon.
 * @tree: Puntero a la raíz del árbol a recorrer.
 * @func: Puntero a la función que se debe aplicar a cada nodo.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	return;

	func(tree->n);

	binary_tree_preorder(tree->left, func);

	binary_tree_preorder(tree->right, func);
}
