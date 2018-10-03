# Causes bash to remember where commands it has found using PATH are located
# (default). We can use 'hash' command to check it.
set -h  # or 'set -o hashall'

# Abort script at first error, when a command exits with non-zero status
# (except in until or while loops, if-tests, list constructs)
# Note: set -e also has some problems (thx: https://mywiki.wooledge.org/BashFAQ/105)
set -e # or 'set -o errexit'
