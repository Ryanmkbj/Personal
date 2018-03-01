#include "stdafx.h"
#include "Packet.h"
using namespace std;

Packet::Packet(int _targetID, int _sourceID, string _data) {
	//Pass object values to internal data to avoid loss of data:
	 targetID = _targetID;
	 sourceID = _sourceID;
	 data = _data; 
}

//mutator for targetID:
void Packet::settargetID(int targetID) {
	this-> targetID = targetID;
}

//getter for targetID:
int Packet::gettargetID() {
	return targetID;
}

//setter for sourceID:
void Packet::setsourceID(int sourceID) {
	this->sourceID = sourceID;
}

//getter for sourceID:
int Packet::getsourceID() {
	return sourceID;
}

//setter for data: 
void Packet::setData(string Data) {
	this ->data = Data;
}
//getter for data
string Packet::getData() {
	return data;
}