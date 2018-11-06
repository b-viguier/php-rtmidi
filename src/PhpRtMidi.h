#ifndef PHP_RTMIDI_H
#define PHP_RTMIDI_H

#include <RtMidi.h>
#include <phpcpp.h>

class PhpRtMidi : public Php::Base {
public:
    static void phpExport(Php::Extension &extension);

    static Php::Value getVersion();

protected:
    PhpRtMidi() = default;
};

#endif
