
#include <iostream>
#include <string>
//#include <fstream>
#include <sstream>
#include <vector>
using namespace std;

int main()  
{  
	//char nameID[20];
	string str;
	vector<string> file;
	//cin >> nameID;
	vector< vector<double> > ball;
	vector<string> nameID;
	vector<string> arr;

　　while (getline(cin,str))
		file.push_back(str);//cin a string

	cout << file[0] << endl;
    
    istringstream ss(file[0]);
    string word;
    while(ss>>word) {
        arr.push_back(word);
    }
 
    //for(size_t i=0; i<arr.size(); i++) {
     //   cout << arr[i] << endl;
    

    ball.resize(file.size());
    double value;
    for (int i=1; i<arr.size(); i++){
    	//stringstream(arr[i]) >> value;
    	ball[0].push_back(stod(arr[i]));
    	cout << ball[0][i-1] << " ";
    }
     cout << endl;
    return 0;
　　//cout << "The name of the ball"<< endl << ch << endl << "The characters" << endl << str <<endl;
/*
    string buff;  
    ifstream infile;  
    ofstream outfile;  
    cout<<"Input file name: "<<endl;  
    cin>>buff;  
    infile.open(buff.c_str());  
  
    if(!infile)  
        cout<<"error"<<buff<<endl;  
      
    cout<<"Input outfile name: "<<endl;  
    cin>>buff;  
    outfile.open(buff.c_str());  
      
    while(getline(infile, buff))  
        outfile<<buff<<endl;  
  
    infile.close();  
    outfile.close();  
    return 0;  */
  
}