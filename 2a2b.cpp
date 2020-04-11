#include <iostream>
#include <cstring>
using namespace std;
int main(){
	int checka = 0, checkb = 0, lon , check = 1, i, j, lonb, box[105]={0};
	string a, b;
	do{
		check=1;
		cout<<"input less than 100 numbers";
		cin>> a;
		lon = a.size();
		if( lon > 100){
			cout<<" can only less than 100 numbers\n";
			check = 0;
		} 
		for( i=0; i<lon; i++){
			if( a[i] < '0' || a[i] > '9'){
				cout<<" can only be number \n";
				check = 0;
				break;
			}
		}
	}while( check != 1);
	system("cls");
	do{
		for( i=0; i<5; i++)
			box[i] = 0;
		check = 1;
		checka = 0;
		checkb = 0;
		printf("input %d numbers", lon);
		cin>>b;
		lonb = b.size();
		for( i=0; i<lonb; i++){
			if( b[i] < '0' || b[i] > '9'){
				cout<<" can only be number\n";
				check = -1;
				break;
			}
		}
		if( check == -1)
			continue;
		if( lonb != lon){
			printf( "can only input %d numbers \n you input %d numbers \n", lon, lonb);
			continue;
		}
		for( i=0; i<lon; i++)
			if( b[i] == a[i]){
				box[i] = 2;
				checka++;
			}
		for( i=0; i<lon; i++){
			if( box[i] == 2)
				continue;
			for( j=1; j<lon; j++){
				if(  a[i] == b[j] && box[j] < 1){
					checkb++;
					box[j] = 1;
					break;
				}
			}
		}
		printf(" A %d  B  %d \n", checka, checkb);
	}while(checka != 4);
	cout<<"  you win !!!";
	return 0;
}
