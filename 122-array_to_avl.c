#include "binary_trees.h"

/**
 * array_to_avl - Builds an AVL tree from an array.
 * @array: A pointer to the first element of the array to be converted.
 * @size: The number of elements in @array.
 *
 * Return: A pointer to the root node of the created AVL, or NULL upon failure.
 */
avl_t *array_to_avl(int *array, size_t size)
{
	avl_t *tree = NULL;
	size_t g, h;

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
			if (avl_insert(&tree, array[g]) == NULL)
				return (NULL);
		}
	}

	return (tree);
}
