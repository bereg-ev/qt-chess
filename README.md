# qt-chess
Simple chess application for learning purpuse.

Features:
- Multiplatform (desktop, Android, iOS)
- Simplicity: small source code, no opening database
- TDD design: every commit has to comply with all the existing test cases (100+ initially).
- Enjoyable for non-professional chess players: if you always beat Level 1 of other chess programs, but unable to beat Level 2, this app is probably for you.

Todo:
- refactor C++ object model (we have new classes for different pieces, but not properly connected yet, switch-case for piece types)
- improved move ordering and hash table for better performance
- variable search depth
- improved UI (different levels, selection of promotion and color, undo button, export / import games)
