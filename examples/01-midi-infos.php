<?php

echo "🎹 RtMidi Php Extension 🎹\n";

$version = \RtMidi::getVersion();
echo "RtMidi version:\t$version\n";

$apis = [];
\RtMidi::getCompiledApi($apis);
$allRtMidiApis = (new \ReflectionClass(\RtMidi::class))->getConstants();
$apis = join(
    ',',
    array_map(
        function ($apiValue) use ($allRtMidiApis) {
            return array_search($apiValue, $allRtMidiApis);
        },
        $apis
    )
);
echo "RtMidi Apis:\t$apis\n";
