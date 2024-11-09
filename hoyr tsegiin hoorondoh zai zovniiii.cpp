#include <iostream>
#include <cmath>
using namespace std;

int main()
{
double a , b , c , d , e , f , g , h , i , j , k , l , m , n , o ;
cin >> a >> b ;
cin >> c >> d >> e >> f ;
cin >> g >> h >> i >> j >> k >> l ;
m = b - a ;
if ( m < 0 )
m = -m ;
n = sqrt((e-c)*(e-c)+(f-d)*(f-d)) ;
o = sqrt((g-j)*(g-j)+(h-k)*(h-k)+(i-l)*(i-l)) ;
printf( "%.3f" , m ) ; cout << " " << endl ;
printf( "%.3f" , n ) ; cout << " " << endl ;
printf( "%.3f" , o ) ; cout << " " << endl ;
return 0 ;
}
