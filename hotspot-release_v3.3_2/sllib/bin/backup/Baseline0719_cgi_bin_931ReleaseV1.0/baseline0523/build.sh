csky-abiv2-linux-gcc -o get_status.cgi get_status.c
csky-abiv2-linux-gcc -o get_net.cgi get_net.c
csky-abiv2-linux-gcc -o set_net.cgi set_net.c
csky-abiv2-linux-gcc -o get_codec.cgi get_codec.c
csky-abiv2-linux-gcc -o set_protocol.cgi set_protocol.c
csky-abiv2-linux-gcc -o set_codec.cgi set_codec.c
csky-abiv2-linux-gcc -o get_sys.cgi get_sys.c
csky-abiv2-linux-gcc -o sys_reboot.cgi sys_reboot.c
csky-abiv2-linux-gcc -o sys_default.cgi sys_default.c
csky-abiv2-linux-gcc -o upload.cgi upload.c

cp *.cgi /home/eric/work/sllib/bin/9001html/htmlarm/cgi-bin
