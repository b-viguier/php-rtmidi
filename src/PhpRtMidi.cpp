#include "PhpRtMidi.h"
#include "../lib/rtmidi-3.0.0/RtMidi.h"

void PhpRtMidi::phpExport(Php::Extension &extension) {
    Php::Class <PhpRtMidi> phpClass("RtMidi");

    phpClass.add(Php::Constant("UNSPECIFIED", RtMidi::UNSPECIFIED));
    phpClass.add(Php::Constant("MACOSX_CORE", RtMidi::MACOSX_CORE));
    phpClass.add(Php::Constant("LINUX_ALSA", RtMidi::LINUX_ALSA));
    phpClass.add(Php::Constant("UNIX_JACK", RtMidi::UNIX_JACK));
    phpClass.add(Php::Constant("WINDOWS_MM", RtMidi::WINDOWS_MM));
    phpClass.add(Php::Constant("RTMIDI_DUMMY", RtMidi::RTMIDI_DUMMY));

    phpClass.method<&PhpRtMidi::getVersion>("getVersion");


    extension.add(std::move(phpClass));
}

Php::Value PhpRtMidi::getVersion() {
    return RtMidi::getVersion();
}
