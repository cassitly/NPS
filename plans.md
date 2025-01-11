/NPS
│
├── /resources
│   └── /config
│       └── build.conf        # Template configuration file
│
├── /src
│   ├── /gui
│   │   └── main_gui.cpp      # GUI application for plugin creation
│   │
│   ├── /cli
│   │   └── cli_dev.cpp       # CLI tool for plugin development
│   │
│   ├── /parser
│   │   └── config_parser.cpp # Parser for build.conf file
│   │
│   ├── /builder
│   │   ├── build_manager.cpp # Handles build initialization and packaging
│   │   └── debug_manager.cpp # Handles plugin debugging
│   │
│   ├── /executor
│   │   └── executor_manager.cpp # Handles execution of custom executors
│   │
│   └── main.cpp              # Entry point for the program
│
├── /include
│   ├── gui.h                 # GUI header
│   ├── cli.h                 # CLI header
│   ├── parser.h              # Parser header
│   ├── build_manager.h       # Build manager header
│   ├── debug_manager.h       # Debug manager header
│   └── executor_manager.h    # Executor manager header
│
├── /bin
│   └── NPS.exe               # Compiled executable
│
├── /docs
│   └── README.md             # Project documentation
│
├── /test
│   ├── test_build.cpp        # Unit tests for build functionality
│   ├── test_debug.cpp        # Unit tests for debugging functionality
│   └── test_parser.cpp       # Unit tests for configuration parser
│
├── /external
│   └── /dependencies         # External libraries (CLI11, nlohmann/json)
│
└── CMakeLists.txt            # Build system configuration
