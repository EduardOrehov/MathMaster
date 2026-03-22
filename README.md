# MathMaster

MathMaster is a C++ project for a free and extensible analogue of Mathcad.

The current repository contains the initial architecture skeleton:

- `apps/desktop` - desktop application entry point
- `libs/core` - application orchestration and execution pipeline
- `libs/math` - symbolic and numeric expression model
- `libs/units` - dimensional analysis and unit handling
- `libs/document` - worksheet model and document structure
- `libs/io` - project serialization interfaces
- `tests` - smoke tests and future unit/integration tests
- `docs` - architecture notes and roadmap

## Goals

- worksheet-style mathematical documents
- symbolic and numeric calculations
- unit-aware expressions
- reusable file format
- graphing and engineering-focused tooling

## Build

Requirements:

- CMake 3.24+
- C++20 compiler

Example:

```powershell
cmake -S . -B build
cmake --build build
ctest --test-dir build
```

## GitHub

`git` and GitHub CLI were not available in the current environment, so the project structure was prepared locally but the remote repository could not be created automatically.

When they are installed, you can publish the project with:

```powershell
git init
git add .
git commit -m "Initial MathMaster project skeleton"
gh repo create MathMaster --public --source . --remote origin --push
```
