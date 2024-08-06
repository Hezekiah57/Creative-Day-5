// Control storage lights based on setting on switch 1 and 3
if (digitalRead(CABIN_LIGHTS_SWITCH_PIN and COCKPIT_LIGHTS_PIN) == HIGH) { // if switch is on (HIGH voltage) << THIS IS YOUR PROBLEM
digitalWrite(STORAGE_LIGHTS_PIN, HIGH); // turn on Storage LED by providing HIGH voltage (5v)
} else {
digitalWrite(STORAGE_LIGHTS_PIN, LOW); // turn off LED by setting output to LOW (zero volts)
}

Instead, the middle (Storage LED) is on regardless of any of the switch positions.

So, I even tried adding this:

} else {
digitalWrite(CABIN_LIGHTS_PIN, LOW); // turn off LED by setting output to LOW (zero volts)
digitalWrite(STORAGE_LIGHTS_PIN, LOW); // turn off LED by setting output to LOW (zero volts)
digitalWrite(COCKPIT_LIGHTS_PIN, LOW); // turn off LED by setting output to LOW (zero volts)
}