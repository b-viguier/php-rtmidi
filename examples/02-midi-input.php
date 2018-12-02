<?php

echo "🎹 RtMidi Php Extension 🎹\n";

$midiInput = new \RtMidiIn();

$portCount = $midiInput->getPortCount();
echo "Midi Input port count:\t$portCount\n";
