// models.cpp — part of local-ai-chat-uncensored.

#include "localaichatuncensored/models.h"

#include <cstdio>

namespace localaichatuncensored {

Models::Models(const std::string& config_path)
    : config_path_(config_path) {}

void Models::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Models::run() {
    if (verbose_) std::fprintf(stderr, "[local-ai-chat-uncensored] models: run\n");
    // core logic lives here
    return true;
}

}  // namespace localaichatuncensored
