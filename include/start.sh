#! /bin/bash

# Pcap analysis tools need to disable name resolution as these tools in webvm will literally
# attempt to resolve names from 8.8.8.8 without a network interface.
alias tcpdump='tcpdump -n'
alias tshark='tshark -n'

# Using awk to print a new quote upon a new instance of webvm.
sort -R /home/user/quotes.txt | head -n1 | awk '"intro.txt"==ARGV[1] { print } "-"==ARGV[2] { gsub(/(\\\\)/, "\n   "); print } END{ print "\n" }' /home/user/intro.txt - > /home/user/banner
rm /home/user/quotes.txt /home/user/intro.txt
cat banner