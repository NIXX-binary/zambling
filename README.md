# Zambling 🐧🎲

[![Language](https://img.shields.io/badge/language-C-blue.svg)](https://en.wikipedia.org/wiki/C_(programming_language))
[![Linux](https://img.shields.io/badge/platform-Linux-FCC624?logo=linux&logoColor=black)](https://github.com/YOUR_USERNAME/zambling)
[![macOS](https://img.shields.io/badge/platform-macOS-000000?logo=apple&logoColor=white)](https://github.com/YOUR_USERNAME/zambling)
[![Windows](https://img.shields.io/badge/platform-Windows-0078D4?logo=windows&logoColor=white)](https://github.com/YOUR_USERNAME/zambling)
[![License](https://img.shields.io/badge/license-MIT-green.svg)](https://opensource.org/licenses/MIT)

A high-stakes, interactive, text-based terminal slot machine game written entirely in C. Place your bets using **Tux**, watch the reels spin with real-time visual suspense, and test your luck!

This project was built to explore foundational low-level programming concepts like terminal output buffer flushing, process micro-sleeping, and dynamic conditional evaluation arrays.

---

## 🚀 Key Features

* **Suspenseful Reel Animation:** Symbols roll out one by one with a **0.5-second visual delay**, mimicking the tension of a real slot machine.
* **The Tux Economy:** Start with a bankroll of `100 Tux`. Track your balance dynamically—don't go broke!
* **Robust Input Validation:** Safe validation filters catch invalid alphabetic inputs (preventing terminal-shattering infinite loops) and block users from betting more Tux than they own.
* **Tiered Double & Triple Payout Logic:** 
  * Landing **3 identical symbols** grants a massive full payout.
  * Landing a **partial match (2 identical symbols)** awards a consolidation prize worth exactly **half** of that symbol's standard 3-match payout.

---

## 📊 Symbol Payout Matrix

Winnings scale dynamically based on the risk and weight of the matched symbols:

```
╔════════╦═══════════════════╦═══════════════════╗
║ SYMBOL ║  3-SYMBOL MATCH   ║  2-SYMBOL MATCH   ║
╠════════╬═══════════════════╬═══════════════════╣
║   !    ║     10x Bet       ║      5x Bet       ║
║   @    ║     20x Bet       ║     10x Bet       ║
║   #    ║     30x Bet       ║     15x Bet       ║
║   $    ║     40x Bet       ║     20x Bet       ║
║   %    ║     50x Bet       ║     25x Bet       ║
║   ^    ║     60x Bet       ║     30x Bet       ║
║   &    ║     70x Bet       ║     35x Bet       ║
║   *    ║     80x Bet       ║     40x Bet       ║
╚════════╩═══════════════════╩═══════════════════╝
```
