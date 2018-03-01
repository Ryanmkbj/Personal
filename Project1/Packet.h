#pragma once
#include <string>
using namespace std;
class Packet {
public:
	//Create Packet Object
	Packet(int _targetID, int _sourceID, string _data);

	//Accessor and Mutator for target ID's:
	void settargetID(int targetID);
	int gettargetID();
	

	//Accessor and Mutator for source ID's:
	void setsourceID(int sourceID);
	int getsourceID();

	//Accessor and Mutator for data:
	void setData(string Data);
	string getData();
	
private:
	//Create private variables targetID, sourceID and data:
	int targetID,sourceID;
	
	string data;

};