# Php-RtMidi

A Php extension for [MIDI](https://www.midi.org/) programming 🎶.

This extension is a wrapper over [RtMidi library](https://github.com/thestk/rtmidi)
using [Php-Cpp](https://github.com/CopernicaMarketingSoftware/PHP-CPP).


## Installation

First, compile and install [Php-Cpp](https://github.com/CopernicaMarketingSoftware/PHP-CPP):
```bash
cd lib/PHP-CPP-2.1.2
make -j
make install
```

Then, go back to the project root directory, compile and install this extension:
```bash
cd ../..
make -j
make install
```

In both cases, use `make uninstall` to remove installed files,
and `make clean` to delete temporary files created during build process.


## Usage

See official [RtMidi documentation](https://www.music.mcgill.ca/~gary/rtmidi/index.html).
