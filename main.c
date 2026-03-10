#include <stdlib.h>
#include <stdint.h>

struct addrinfo {
    int                 ai_flags;
    int                 ai_family;
    int                 ai_socktype;
    int                 ai_protocol;
    size_t              ai_addrlen;
    struct sockaddr     *ai_addr;
    char                *ai_cannonname;

    struct addrinfo     *ai_next;
};

struct sockaddr {
    unsigned short      sa_family;
    char                sa_data[14];
};

// ipv4
struct sockaddr_in {
    short int           sin_family;
    unsigned short int  sin_port;
    struct in_addr      sin_addr;
    unsigned char       sin_zero[8];
};

struct in_addr {
    uint32_t    s_addr;
};

// ipv6
struct socaddr_in6 {
    uint16_t           sin6_family;
    uint16_t           sin6_port;
    uint32_t           sin6_flowinfo;
    struct in6_addr    sin6_addr;
    uint32_t           sin6_scope_id;
};

struct in6_addr {
    unsigned char      s6_addr[16];
};
