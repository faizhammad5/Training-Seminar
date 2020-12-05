#include<bits/stdc++.h>
#include "server.cpp"
#include "djikstra'sAlgo.cpp"
#include "floyddWarshall.cpp"
#include "tourist.cpp"
#include "Pathprint.cpp"

using namespace std;

int32_t main()
{
	m();
	int x,y;
	/*cout<<"Enter your current location: ";
	cin>>x;
	cout<<"Enter your destination: ";
	cin>>y;
	cout<<dijsktra(x,y,20); */
	cout<<"1.	New delhi"<<"\n";
    cout<<"2.	Qutub minar"<<"\n";
    cout<<"3.	Lal qila"<<"\n";
    cout<<"4.	Jama masjid"<<"\n";
    cout<<"5.	Lotus temple"<<"\n";
    cout<<"6.	DLF"<<"\n";
    cout<<"7.	JLN stadium"<<"\n";
    cout<<"8.	India Gate"<<"\n"; 
    cout<<"9.	Humayun tomb"<<"\n";
    cout<<"10.	Rajghat"<<"\n";
    cout<<"11.	Zoo"<<"\n";
    cout<<"12.	Rohini"<<" \n";
    cout<<"13.	Laxmi nagar"<<"\n";
    cout<<"14.	Rajiv chowk"<<" \n";
    cout<<"15.	Cp"<<" \n";
    cout<<"16.	GTB nagar"<<" \n";
    cout<<"17.	Pandara road"<<" \n";
    cout<<"18.	Vasant Vihar"<<" \n";
    cout<<"19.	Dhaula kua"<<" \n";
    cout<<"20.	Rk puram "<<"\n";
    cout<<"Your starting point: ";
	cin>>y;
	cout<<"Number of Places: ";   
	cin>>x;             //y is starting point and x is number of locations to travel;
	if(x==1){
		int destin;
		cout<<"Enter your destination: ";
		cin>>destin;
		cout<<"The time taken in terms of distance: "<<dijsktra(y,destin,20)<<"\n";
		pathing(y,destin);
	}
	if(x!=1){
		vector<int> des(x);
		cout<<"Enter all your points of visit: ";
	    for(int i=0;i<x;i++){
		cin>>des[i];
	    }
	    vector<bool> visited(20,false);
	    vector<int> currPath;

	    vector<vi> d = floydWarshall(20);
	    answer(d,visited,y,des,0,currPath);
	    cout<<"Total time in terms of distance taken: "<<gd<<endl;
	    int start=y;
	    for(int i=0;i<path.size();i++){
	    	pathing(start,path[i]);
	    	start=path[i];
	    	cout<<"\n";
	    }
	}
	return 0;
}