#!/usr/bin/env python
from conans import ConanFile

class SandboxConan(ConanFile):
  name = "sandbox"
  version = "0.0.1"
  description = "A Sandbox"
  author = "solvingj"
  generators = "cmake"
  exports_sources = "src"
  url = "https://github.com/solvingj/cpp-sandbox-april2017"
  requires = "Boost/1.62.0@lasote/stable", "Catch/1.9.3@uilianries/ci" #, "cpprestsdk/2.9.1@uilianries/testing"

  def package(self):
    self.copy(src="include", dst="include")
