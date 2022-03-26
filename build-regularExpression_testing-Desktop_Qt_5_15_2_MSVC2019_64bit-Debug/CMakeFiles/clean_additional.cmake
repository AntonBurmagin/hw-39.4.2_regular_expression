# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\regularExpr_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\regularExpr_autogen.dir\\ParseCache.txt"
  "regularExpr_autogen"
  )
endif()
