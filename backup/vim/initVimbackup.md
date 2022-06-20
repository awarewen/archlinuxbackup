"=============================================================================
" init.vim --- Entry file for neovim
" Copyright (c) 2016-2019 Wang Shidong & Contributors
" Author: Wang Shidong < wsdjeg at 163.com >
" URL: https://spacevim.org
" License: GPLv3
"=============================================================================

execute 'source' fnamemodify(expand('<sfile>'), ':h').'/config/main.vim'

"//
" 设置 ctags 的索引文件
"""""""""""""""""""""""""
set tags+=~/.vim/systags

"//
" 基于缩进或语法进行代码折叠
"""""""""""""""""""""""""
set foldmethod=indent
set foldmethod=syntax

"//
" 启动 vim 时关闭折叠代码
"""""""""""""""""""""""""
set nofoldenable

"//
" 解决 安装ruby后node_host_prog not found
"""""""""""""""""""""""""
let g:ruby_host_prog = '~/.gem/ruby/2.7.0/bin/neovim-ruby-host'
let g:ruby_path = system('echo $HOME/.rbenv/shims')

"//
" c语言模块相关
""""""""""""""
" 跳转inlcude 标识
"let g:deoplete#sources#clang#flags = ['-Iwhatever']
let g:deoplete#sources#clang#flags = ['-I/usr/inlcude']
"
" clang 可执行文件路径 在toml已经设置
"let g:deoplete#sources#clang#executable = '/usr/bin/clang'
"
" 设置autocomplete / coc 在toml已经设置
"let g:spacevim_autocomplete_method = 'coc'
""if has('python3')
  "let g:spacevim_autocomplete_method = 'deoplete'
"elseif has('lua')
  "let g:spacevim_autocomplete_method = 'neocomplete'
"elseif has('python')
  "let g:spacevim_autocomplete_method = 'completor'
"elseif has('timers')
  "let g:spacevim_autocomplete_method = 'asyncomplete'
"else
  "let g:spacevim_autocomplete_method = 'neocomplcache'
  "endif

"//
