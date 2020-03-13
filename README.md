# NRF52840 Remote Start Prototype

This is an attempt to build a remote start system for [Student Robotics](https://studentrobotics.org) style robotics competitions.

Essentially, we are building a reliable wireless link between the [competition control](https://srcomp.readthedocs.io/en/latest/) and our robots in the arena. This will allow us to remotely tell the robots when the start of a match is, and thus start the student code at that time.

## Hardware

This project is using the [NRF52840 Dongle](https://www.nordicsemi.com/Software-and-tools/Development-Kits/nRF52840-Dongle), a small, low-cost USB dongle that supports a number of low-power 2.4GHz communications protocols.

## Communications

The aim of this project is to use [6LoWPAN](https://en.wikipedia.org/wiki/6LoWPAN) and [RPL](https://en.wikipedia.org/wiki/RPL_(IPv6_Routing_Protocol_for_LLNs)) to build a 2.4GHz mesh network within the arena. Using a mesh network allows us to account for loss from interference in the vicinity (e.g WiFi, although the effect is diminished if we choose the correct channel)

## State of the project

This project is currently in a **research-phase**.

**Do not use this project at this time. Contributions are not currently accepted.**
