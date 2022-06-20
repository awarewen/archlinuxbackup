pacman 系统更新：

更换源
源地址：/etc/pacman.d/mirrorlist

自动更新工具：reflector

sudo reflector --verbose --country China  --latest 10 --sort rate --save /etc/pacman.d/mirrorlist


更新密钥：-S archlinux-keyring
