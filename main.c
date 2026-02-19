#include <stdlib.h>

struct addrinfo {
    int             ai_flags;
    int             ai_family;
    int             ai_socktype;
    int             ai_protocol;
    size_t          ai_addrlen;
    struct sockaddr *ai_addr;
    char            *ai_canonname;

    struct addrinfo *ai_next;
};

struct sockaddr {
    unsigned short  sa_family;
    char            sa_data[14];
};

struct soccadr_in {
    short int           sin_family;
    unsigned short int  sin_port;
    struct in_addr      sin_addr;
    unsigned char       sin_zero[8];
}