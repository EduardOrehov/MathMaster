# Architecture Overview

## Planned layers

1. Presentation layer
   - desktop worksheet editor
   - plotting and result panels
2. Application core
   - evaluation workflows
   - command system
   - session state
3. Domain libraries
   - expressions
   - units
   - worksheet document model
4. Persistence
   - project serialization
   - import/export adapters

## Near-term roadmap

1. Choose GUI stack: Qt Widgets, Qt Quick, or Dear ImGui plus custom renderer.
2. Design expression tree and parser.
3. Implement worksheet blocks for text, formulas, and plots.
4. Add numeric solver and unit conversion.
5. Introduce project file format and autosave.
