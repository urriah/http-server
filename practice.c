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
struct sockaddr_in6 {
    uint16_t           sin6_family;
    uint16_t           sin6_port;
    uint32_t           sin6_flowinfo;
    struct in6_addr    sin6_addr;
    uint32_t           sin6_scope_id;
};

struct in6_addr {
    unsigned char      s6_addr[16];
};

struct sockaddr_storage {
    ss_family_t   ss_family;

    char      __ss_pad1[__SS_PAD1SIZE];
    uint64_t  __ss_align;
    char      __ss_pad2[__SS_PAD2SIZE];
};

struct sockaddr_in sa;
struct sockaddr_in sa6;

inet_pton(AF_INET, "10.12.110.57", &(sa.sin_addr));
inet_pton(AF_INET6, "2001:db8:63b3:1::3490", &(sa6.sin6_addr));

char ip4[INET_ADDRSTRLEN];
struct sockaddr_in sa;

inet_ntop(AF_INET, &(sa.sin_addr), ip4, INET_ADDRSTRLEN);

printf("The IPv4 address is: %s\n", ip4);

char ip6[INET6_ADDRSTRLEN];
struct sockaddr_in6 sa6;

inet_ntop(AF_INET6, &(sa6.sin6_addr), ip6, INET6_ADDRSTRLEN);

printf("The address is: %s\n", ip6);
