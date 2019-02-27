#include<iostream>
using namespace std;

int main(){
	
	int wt[20],bt[20],tt[20],n,twt=0,ttt=0 ;
	cout<<"Enter no of processes \n";
	cin>>n;
	cout<<"Enter burst time of each process \n";
	for(int i=0;i<n;i++){
		
		cout<<"Burst time for prcess "<<i+1<<":";
		cin>>bt[i];
	}
	wt[0]=0;
	for(int i=1;i<n;i++){
		wt[i]=0;
		for(int j=0;j<i;j++){
			
			wt[i] += bt[j];
		}
		
		
	}
	for(int i=0;i<n;i++){
		
		tt[i] = wt[i] + bt[i];
		ttt += tt[i];
		twt += wt[i];
	}
	
	cout<<"Process \t"<<"Burst time\t"<<"waiting time \t"<<"Turnaround time \n";
	for(int i=0;i<n;i++){
		cout<<i+1<<"\t\t"<<bt[i]<<"\t\t"<<wt[i]<<"\t\t"<<tt[i]<<"\n";
	}
	
	
	cout<<"Average waiting time is "<<(twt/n)<<"\n";
	cout<<"Average turnaround time is "<<(ttt/n);
	return 0;
	
}
	
