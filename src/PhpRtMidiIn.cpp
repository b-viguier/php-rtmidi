#include "PhpRtMidiIn.h"
#include <RtMidi.h>

void PhpRtMidiIn::phpExport(Php::Extension &extension, Php::Class <PhpRtMidi> &parent) {
    Php::Class <PhpRtMidiIn> phpClass("RtMidiIn");
    phpClass.extends(parent);

    phpClass.method<&PhpRtMidiIn::__construct>(
            "__construct",
            {
                    Php::ByVal("api", Php::Type::Numeric, false),
                    Php::ByVal("clientName", Php::Type::String, false),
                    Php::ByVal("queueSizeLimit", Php::Type::Numeric, false)
            }
    );
    phpClass.method<&PhpRtMidiIn::__destruct>("__destruct");
    phpClass.method<&PhpRtMidiIn::getPortCount>("getPortCount");

    extension.add(std::move(phpClass));
}

void PhpRtMidiIn::__construct(Php::Parameters &params) throw() {
    try {
        switch (params.size()) {
            case 0:
                _midiIn.reset(new RtMidiIn());
                break;
            case 1:
                _midiIn.reset(new RtMidiIn((RtMidi::Api)(int) params[0]));
                break;
            case 2:
                _midiIn.reset(new RtMidiIn((RtMidi::Api)(int) params[0], params[1]));
                break;
            case 3:
                _midiIn.reset(new RtMidiIn((RtMidi::Api)(int) params[0], params[1], (unsigned int) (int) params[2]));
                break;
        }
    } catch (RtMidiError error) {
        throw Php::Exception(error.getMessage());
    }
}

void PhpRtMidiIn::__destruct() throw() {
    try {
        _midiIn.release();
    } catch (RtMidiError error) {
        throw Php::Exception(error.getMessage());
    }
}

Php::Value PhpRtMidiIn::getPortCount() {
    return (int) _midiIn->getPortCount();
}
