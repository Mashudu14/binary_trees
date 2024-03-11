#include "binary_trees.h"

/**
 * array_to_bst - Builds a binary search tree from an array.
 * @array: A pointer to the first element of the array to be converted.
 * @size: The number of elements in @array.
 *
 * Return: A pointer to the root node of the created BST, or NULL upon failure.
 */
bst_t *array_to_bst(int *array, size_t size)
{
	bst_t *tree = NULL;
	size_th g, h;

	if (array == NULL)
		return (NULL);

	for (g = 0; g < size; g++)
	{
		for (h = 0; h < g; h++)
		{
			if (array[h] == array[g])
				break;
		}
		if (h == g)
		{
			if (bst_insert(&tree, array[g]) == NULL)
				return (NULL);
		}
	}

	return (tree);
}
