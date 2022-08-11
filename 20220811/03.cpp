class Mp3 {
public:
	void play(){}
	void stop() {}
};
class MobilePhone {
public:
	void sendCall() {}
	void receiveCall() {}
	void sendSms() {}
	void receiveSms() {}
};
class MusicPhone :public Mp3, public MobilePhone {
public:
	void dial() {
		play();
		sendCall();
	}
};
#include<iostream>
using namespace std;
void main() {
	MusicPhone handPhone;
	handPhone.play(); // Mp3¸É¹ö
	handPhone.sendSms(); // MobilePhone¸É¹ö
}

