#include <iostream>
#include <cstring>
using namespace std;
int main(){
	int checka = 0, checkb = 0, lon ,box[105], check = 1, i, j, lonb;
	for(int i=0; i<105; i++)
		box[i] = 0;
	string a, b;
	do{
		check=1;
		cout<<"100�ӼƦr�H��";
		cin>> a;
		lon = a.size();
		if( lon > 100){
			cout<<" �u��100�Ӧr�H����!\n";
			check = 0;
		} 
		for( i=0; i<lon; i++){
			if( a[i] < '0' || a[i] > '9'){
				cout<<" �u��O�Ʀr��!\n";
				check = 0;
				break;
			}
		}
	}while( check != 1);
	system("cls");
	do{
		check = 1;
		for( i=0; i<lon; i++)
			box[i] = 0;
		checka = 0;
		checkb = 0;
		printf("%d �Ӧr��", lon);
		cin>>b;
		lonb = b.size();
		for( i=0; i<lonb; i++){
			if( b[i] < '0' || b[i] > '9'){
				cout<<" �u��O�Ʀr��!\n";
				check = -1;
				break;
			}
		}
		if( check == -1)
			continue;
		if( lonb != lon){
			printf( "�O�� %d �ӼƦr��!! \n �A���F %d �ӼƦr \n", lon, lonb);
			continue;
		}
		for(  i=0; i<lon; i++){
			if( b[i] == a[i]){
				checka++;
				box[i] = 1;
			}
				
		}
		for(  i=0; i<lon; i++){
			for(  j=0; j<lon; j++){
			
				if( i != j && b[i] == a[j] && box[j] != 1){
					checkb++;
					box[j] = 1;
					break;
				}
			}
		}
		printf(" A %d  B  %d \n", checka, checkb);
	}while(checka != 4);
	cout<<"  ���ߧA����F!!!";
	return 0;
}
