[DIB_Sync.zip](https://github.com/user-attachments/files/32294717/DIB_Sync.zip)
# DIB_Sync

**DIB_Sync** is a lightweight, low-latency 60 FPS audio-visual engine built specifically for Win32. Driven by Direct-RAM ARGB surface manipulation and embedded assembly routines, it delivers high-performance software rasterization and audio-reactive visual effects without requiring hardware GPU acceleration.

---

## 🎨 Overview

* **Author:** m0xX
* **Target Platform:** Windows 7 / 10 / 11 (32-bit & 64-bit compatible)
* **Executable Footprint:** ~80 KB (Compressed via Petite v2.2)
* **Audio Engine:** Embedded MiniFMOD XM Tracker (~48 KB module)
* **Rendering Architecture:** Direct-RAM ARGB DIB Section (`GDI32`) + x86 Inline Assembly

---

## 🚀 Key Features

* **21 Real-Time Visual Slots:** Modular transition engine cycling through procedural geometric rendering, beat-synced color modulation, and retro screen distortions.
* **Slot 20 (TV Static & V-SYNC Roll):** Custom procedural B&W CRT static generator leveraging hardware cycle counter noise (`RDTSC`), audio-reactive horizontal line tearing, and dynamic V-SYNC tracking rolls.
* **Zero External Dependencies:** Built with pure Win32 API calls—no DirectX, OpenGL, or runtime installers required.
* **Low-Footprint Audio:** Audio-reactive beat pulse sync (`g_beatPulse`) driven directly by MiniFMOD callback counters.

---

## 🎮 Runtime Controls

| Key | Function |
| :--- | :--- |
| **`ENTER`** | Confirm configuration and launch from startup dialog |
| **`SPACE`** | Jump immediately to the next visual slot |
| **`ESC`** | Terminate application |

---

## 🛠️ Build & Compilation Details

* **Language & Toolchain:** Compiled with IWBasic 2.5
* **Assembler Pass:** Executed via NASM (`-O1` optimization pass)
* **Resource Header:** Icon ID `1` bound via `template_101.rc` / `DIB_Sync.rc`
* **PE Executable Compression:** Petite v2.2

---

## 📄 License & Distribution

Released as a free demoscene audio-visual showcase. Feel free to run, share, and archive on demoscene portals (Pouët.net, Demozoo, Scene.org).

*(c) 2026 m0xX*
