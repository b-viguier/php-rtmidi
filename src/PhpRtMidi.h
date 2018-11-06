#ifndef PHP_RTMIDI_H
#define PHP_RTMIDI_H

#include <phpcpp.h>

class PhpRtMidi : public Php::Base {
public:
    static void phpExport(Php::Extension &extension);

    static Php::Value getVersion();

    static void getCompiledApi(Php::Parameters &params);

protected:
    PhpRtMidi() = default;
};

#endif
