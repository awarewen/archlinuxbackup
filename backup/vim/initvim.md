"=============================================================================
" init.vim --- Entry file for neovim
" Copyright (c) 2016-2019 Wang Shidong & Contributors
" Author: Wang Shidong < wsdjeg at 163.com >
" URL: https://spacevim.org
" License: GPLv3
"=============================================================================

execute 'source' fnamemodify(expand('<sfile>'), ':h').'/config/main.vim'


 
" 解决重复的cscope数据库引用问题
" 
"set nocscopeverbose
"设置 ctags索引文件
set tags+=~/.vim/systags
" 基于缩进或语法进行代码折叠
set foldmethod=indent
set foldmethod=syntax
" 启动 vim 时关闭折叠代码
set nofoldenable

" ******************************************

" 解决 tmux 真色256问题
set termguicolors
if &term =~# '^screen'
    let &t_8f = "\<Esc>[38;2;%lu;%lu;%lum"
    let &t_8b = "\<Esc>[48;2;%lu;%lu;%lum"
endif

" 解决 ruby node_host_prog not found
let g:ruby_host_prog = '~/.gem/ruby/2.7.0/bin/neovim-ruby-host'
let g:ruby_path = system('echo $HOME/.rbenv/shims')

"*************************************


"=
"
"
"
"
"
"
"
"

