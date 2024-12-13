#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_delete - Elimina todo el árbol binario.
 * @tree: Puntero a la raíz del árbol binario a eliminar.
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
	return;

	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);

	free(tree);
}
