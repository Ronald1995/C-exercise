#include<Winsock2.h>
#include<iostream>
#prama comment(lib,"ws2_32.lib")
using namespace std;
int main()
{

	WSADATA wsadata;//initialize
	SOCKET sendsocket;
	sockaddr_in receiveaddr;//server address
	int port=4000;//socket port of server
	char sendbuf[1024];//buffer of send data
	int bufferlength=1024;//length of buffer
	//initialize socket
	WSAStartup(MAKEWORD(2,2),&wsadata);
	// consruct socket object
	sendsocket=socket(AF_INET,SOCK_DGRAM,IPPROTO_UDP);
	//set server address
	reciveaddr.sin_family=AF_INET;
	receiveaddr.sin_port=htons(port);
	receiveaddr.sin_addr.s_addr=inet_addr("192.168.1.6");
	//send data to server
	cout<<"sending a datagram to the receiver"<<endl;
	sendto(sendsocket,sendbuf,bufferlength,0,(SOCKADDR*)receiveaddr,sizeof(receiveaddr));
	//send is finished,close socket
	cout<<"finished sending,close socket"<<endl;
	cout<<"exiting"<<endl;
	WSACleanup();
	return 0;
	
}
