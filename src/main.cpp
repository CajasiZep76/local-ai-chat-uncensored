// main.cpp — entry point. Wires config and subsystems together.

#include "localaichatuncensored/settings.h"
#include "localaichatuncensored/server.h"
#include "localaichatuncensored/models.h"
#include "localaichatuncensored/characters.h"
#include <csignal>
#include <memory>

namespace { std::atomic<bool> g_running{true}; void on_signal(int) { g_running.store(false); } }

int main(int argc, char** argv) {
    std::signal(SIGINT, on_signal);
    std::signal(SIGTERM, on_signal);

    localaichatuncensored::Settings settings = localaichatuncensored::Settings::load_default();
    localaichatuncensored::Server server(settings.store_path);
    localaichatuncensored::Models models(settings.store_path);
    localaichatuncensored::Characters characters(settings.store_path);
    std::fprintf(stderr, "[local-ai-chat-uncensored] ready\n");

    while (g_running.load()) {
        // main loop: pump subsystems
        break;
    }
    return 0;
}
