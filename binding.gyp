{
  "targets": [
    {
      "target_name": "index",
      "sources": [
        "index.cc",
        "enumAttachedDisplays.cc",
        "getLastInputTime.cc",
        "requestDisplaySleep.cc",
        "requestDisplayWake.cc"
      ],
      "include_dirs": ["<!(node -e \"require('nan')\")"]
    }
  ]
}
