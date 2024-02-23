#ifndef LISTENINGSOCKET_H
#define LISTENINGSOCKET_H

#include <stdio.h>
#include "BindingSocket.h"
namespace HDE
{
    class ListeningSocket: public BindingSocket
    {
    private:
        int backlog;
        int listening;
    public:
        ListeningSocket(int domain, int service, int protocol, int port, u_long interface, int bklg);
        void start_listening();

        int get_listening();
        int get_backlog();
    };
}

#endif /* LISTENINGSOCKET_H */