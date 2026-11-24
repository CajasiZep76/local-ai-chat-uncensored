// server.cpp — part of local-ai-chat-uncensored.

#include "localaichatuncensored/server.h"

#include <cstdio>

namespace localaichatuncensored {

Server::Server(const std::string& config_path)
    : config_path_(config_path) {}

void Server::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Server::run() {
    if (verbose_) std::fprintf(stderr, "[local-ai-chat-uncensored] server: run\n");
    // core logic lives here
    return true;
}

}  // namespace localaichatuncensored
