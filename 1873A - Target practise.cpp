#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int t;
    cin >> t;
    while(t--){
    	int c=0;
    	char a[10][10];
    	for(int i=0;i<10;i++){
    		for(int j=0;j<10;j++){
    			cin >> a[i][j];
    		}
    	}
    		for(int i=0;i<10;i++){
    		for(int j=0;j<10;j++){
    			if(a[i][j]=='X'){
    				if(i==0 || i==9)c=c+1;
    			    else if(i==1 || i==8 ){
    			    	if(j>=1 && j<=8)c=c+2;
    			    	else c=c+1;
    			    }
    			    else if(i==2 || i==7 ){
    			    	if(j>=2 && j<=7)c=c+3;
    			    	else if (j==0 || j==9) c=c+1;
    			    		else c=c+2;
    			    }
    			    else if(i==3 || i==6 ){
    			    	if(j>=3 && j<=6)c=c+4;
    			    	else if (j==0 || j==9) c=c+1;
    			    		else if(j==1 ||j==8)c=c+2;
    			    		else c = c+3;
    			    }
    			    else if(i==4 || i==5 ){
    			    	if(j==4 || j==5)c=c+5;
    			    	else if (j==0 || j==9) c=c+1;
    			    		else if(j==1 ||j==8)c=c+2;
    			    		else if (j == 2 || j == 7)c = c+3;
    			    		else c=c +4;
    			    }
    			}
    		}
    	}
    	cout << c << endl;
    }  
  return 0;
}
