#include <stdio.h>

int main()
{
	int i, n;
	float arr[100];
	float t,tem;

	printf("Enter total number fo elements(1 to 100):  ");
	scanf("%d", &n);
	printf("\n");

	for (i = 0; i < n; ++i) {
		printf("Enter Number %d: ", i + 1);
		scanf("%f", &arr[i]);
	
	}
	t=arr[0];

	for (i = 1; i < n; ++i) {
	
		if (arr[0] < arr[i]) {
		
			arr[0] = arr[i];
		
		}
	
	}

	for (i = 1; i < n; i++) {
	
		if (arr[i] > t) {
			tem = t;
			t = arr[i];
		}
		else if (arr[i] > tem)
		{
			tem = arr[i];
		}
	}


	printf("Largest element = %.2f\n", arr[0]);
	printf("Second Largest element = %.2f", tem);

	getchar();
	getchar();

    return 0;
}