// Write a C program to count number of digits in a number.
int main(){
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	
	int count;
	while(n>0){
		count++;
		n = n / 10;
	}
	printf("No. of digits = %d", count);
	return 0;
}