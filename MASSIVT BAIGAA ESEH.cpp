#include <stdio.h>
 int main() {
 	int i, n, a[1000],c, s=0;
 	scanf("%d", &n);
 	for(i=0; i<n; i++){
 		scanf("%d",&a[i]);
 		
	 }
	 scanf("%d", &c);
	 for(i=0; i<n; i++){
	 	if(a[i]==c)s++;
	 } 
	 if(s==0)printf("NO");
	 else printf("YES");
 }
