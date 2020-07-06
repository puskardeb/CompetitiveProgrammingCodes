#include <net/ethernet.h>
#include <linux/if_packet.h>
#include <arpa/inet.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <netinet/ether.h>
#include <errno.h>

int CreateSocket()
{
    int sock = socket(AF_PACKET, SOCK_RAW, htons(ETH_P_IP));
    printf("error : %s\n", strerror(errno));
    printf("%d %x\n",sock, ETHERTYPE_IP);
    return sock;
}

int main()
{
    CreateSocket();
    return 0;
}
