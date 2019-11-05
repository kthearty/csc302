#include <stdio.h>
#include <string.h>
#include <sys/socket.h>
#include <netinet/ip.h>

void main(){
  struct sockaddr_in server;
  struct sockaddr_in client;
  int clientlan;
  char buf[1500];
  
  int sock = socket(AF_INET, SOCK_DGRAM, IPPROTO_UDP);
  
  memset((char *) &server, 0, sizeof(server));
  server.sin_family = AF_INET;
  server.sin_addr.s_addr = htonl(INADDR_ANY);
  server.sin_port = htons(9090);
  
  if
