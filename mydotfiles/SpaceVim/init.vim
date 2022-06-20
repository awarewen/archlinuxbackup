"=============================================================================
" init.vim --- Entry file for neovim
" Copyright (c) 2016-2022 Wang Shidong & Contributors
" Author: Wang Shidong < wsdjeg@outlook.com >
" URL: https://spacevim.org
" License: GPLv3
"=============================================================================
let g:python_host_prog = '/usr/bin/python2'
let g:python3_host_prog = '/usr/bin/python3' 
let g:ruby_host_prog = '/usr/bin/neovim-ruby-host' 
let g:node_host_prog = '/usr/bin/neovim-node-host' 
let g:perl_host_prog = '/usr/bin/perl'

" == Before Load =============================================================
execute 'source' fnamemodify(expand('<sfile>'), ':h').'/main.vim'
" == After  Load =============================================================

" for markdow tarbar
let g:tagbar_type_markdown = {
            \ 'ctagsbin'  : 'mdctags',
            \ 'ctagsargs' : '',
            \ 'kinds'     : [
            \     'a:h1:0:0',
            \     'b:h2:0:0',
            \     'c:h3:0:0',
            \     'd:h4:0:0',
            \     'e:h5:0:0',
            \     'f:h6:0:0',
            \ ],
            \ 'sro'        : '::',
            \ 'kind2scope' : {
            \     'a' : 'h1',
            \     'b' : 'h2',
            \     'c' : 'h3',
            \     'd' : 'h4',
            \     'e' : 'h5',
            \     'f' : 'h6',
            \ },
            \ 'scope2kind' : {
            \     'h1' : 'a',
            \     'h2' : 'b',
            \     'h3' : 'c',
            \     'h4' : 'd',
            \     'h5' : 'e',
            \     'h6' : 'f',
            \}
           \}
" END markdow tagbar_type_markdown 
"=============================================================================


" key map
nnoremap <leader>u :UndotreeToggle<CR>

" set auto fold line
set wrap
"=============================================================================
