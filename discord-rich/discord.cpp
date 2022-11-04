#include "Discord.h"
#include <time.h>
#include <chrono>
static int64_t eptime = std::chrono::duration_cast<std::chrono::seconds>(std::chrono::system_clock::now().time_since_epoch()).count();
time_t starttime = time(0);

void Discord::Initialize()
{
    DiscordEventHandlers Handle;
    memset(&Handle, 0, sizeof(Handle));
    Discord_Initialize("Token", &Handle, 1, NULL);
}

void Discord::Update()
{
    DiscordRichPresence discordPresence;
    memset(&discordPresence, 0, sizeof(discordPresence));
    discordPresence.details = "Message";
    discordPresence.startTimestamp = starttime;
    discordPresence.largeImageKey = "LargeImageName";
    discordPresence.largeImageText = "Message";
    Discord_UpdatePresence(&discordPresence);
}