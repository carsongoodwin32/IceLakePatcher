# Ice Lake Patcher v0.1a
Easy to use Program that uses System Environment Variables that mitigate Instruction Set incompatibilities introduced in Intel's Ice Lake micro architecture.

_____________
# What does this do?:

Due to incompatibilities between Ice Lake's instruction set changes and OpenSSL, Programs using OpenSSL for the time being will not launch or will crash without error.
This program sets a System Environment Variable: "OPENSSL_ia32cap" to value "~0x200000200000000" which allows OpenSSL to use a software version of the instructions it needs,
thus preventing the incompatibility from messing with things and causing crashes.

_____________
# How to Use:


1. Run an elevated command prompt (right click, run as admin).
2. Run IceLakePatcher.exe in elevated command prompt.
3. Follow on screen steps to install
_____________

# Tested and working with:

* Intel Core i7 1065G7: Unity 5.3.0f1-5.5.2f1
* Intel Core i7 1065G7: Valorant (current release as of 7/12/2020)
* Intel Core i7 1065G7: Blackwake (current release as of 7/12/2020)

* Intel Core i5 1035G7: Valorant (current release as of 7/12/2020)
* Intel Core i5 1035G7: Blackwake (current release as of 7/12/2020)
_____________
