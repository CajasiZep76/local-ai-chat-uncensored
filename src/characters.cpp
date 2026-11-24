// characters.cpp — part of local-ai-chat-uncensored.

#include "localaichatuncensored/characters.h"

#include <cstdio>

namespace localaichatuncensored {

Characters::Characters(const std::string& config_path)
    : config_path_(config_path) {}

void Characters::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Characters::run() {
    if (verbose_) std::fprintf(stderr, "[local-ai-chat-uncensored] characters: run\n");
    // core logic lives here
    return true;
}

}  // namespace localaichatuncensored
