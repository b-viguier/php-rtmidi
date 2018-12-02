#ifndef PHP_RTMIDIIN_H
#define PHP_RTMIDIIN_H

#include "PhpRtMidi.h"
#include <phpcpp.h>
#include <RtMidi.h>

class PhpRtMidiIn : public Php::Base {
public:
    static void phpExport(Php::Extension &extension, Php::Class <PhpRtMidi> &parent);

    void __construct(Php::Parameters &params) throw();

    void __destruct() throw();

    Php::Value getPortCount();

private:
    std::unique_ptr <RtMidiIn> _midiIn;
};

#endif
