#include "stdio.h"
#include "stdlib.h"
#include "malloc.h"
int main()
{
	char *Sen=NULL;
	char *Sen_low=NULL;
	char *Sen_UPP=NULL;
	int size = 0; 
	int size_lower_cases = 0;
	int size_Upper_cases = 0;
	printf("insert the size  of the sentence");
	scanf("%d", &size);
	printf("\n");
	Sen = (char*) malloc (size+1 * sizeof(char));
	printf("insert the Sentance - : ");
	scanf("%s", Sen);
	for (int i = 0; i < size; i++)
	{
		
		if (Sen[i] >= 'A' && Sen[i] < 'a')
		{
			size_Upper_cases++;
		}
		else if (Sen[i] >= 'a'  && Sen[i] <= 'z' )
		{
			size_lower_cases++;
		}
		else
		{
			printf("you inserted some thing wrong");
			return 0;
		}
	}
	Sen[size] = '\0';
	Sen_low = (char*)malloc((size_lower_cases+1) * sizeof(char));
	Sen_UPP = (char*)malloc((size_Upper_cases+1) * sizeof(char));
	int j = 0;
	int k = 0;
	for (int i = 0; i < size; i++)
	{
		if (Sen[i] >= 'A' && Sen[i] < 'a')
		{
			Sen_UPP[j] = Sen[i];
			j++;
		}
		else if (Sen[i] >= 'a' && Sen[i] <= 'z')
		{
			Sen_low[k] = Sen[i];
			k++;
		}

	}
	Sen_low[size_lower_cases] = '\0';
	Sen_UPP[size_Upper_cases] = '\0';
	printf("The Sentence is  - :");
	printf(" \n %s \n", Sen);
	printf("This is the Lowercases in the sentence -");
	printf(" %s \n", Sen_low);
	printf("This is the Uppercases in the sentence -");
	printf(" %s\n", Sen_UPP);
	free(Sen);
	free(Sen_low);
	free(Sen_UPP);

	return 0;
}
