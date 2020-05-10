#=============================================================================
# dark_powered.toml --- dark powered configuration example for SpaceVim
# Copyright (c) 2016-2017 Wang Shidong & Contributors
# Author: Wang Shidong < wsdjeg at 163.com >
# URL: https://spacevim.org
# License: GPLv3                 默认设置目录
#=============================================================================

# All SpaceVim option below [option] section
[options]
    # set spacevim theme. by default colorscheme layer is not loaded,
    # if you want to use more colorscheme, please load the colorscheme
    # layer
    colorscheme = "gruvbox"
    colorscheme_bg = "dark"
    # Disable guicolors in basic mode, many terminal do not support 24bit
    # true colors
    enable_guicolors = true
#max-column = 120  #最大的刷新改为120
    # Disable statusline separator, if you want to use other value, please
    # install nerd fonts
#
    statusline_separator = "arrow"
    statusline_inactive_separator = "arrow"
    buffer_index_type = 4
    enable_tabline_filetype_icon = true
    enable_statusline_mode = false
    #checkinstall = true //默认开启的 检查插件是否正确安装
    #guifont="OpenDyslexicAlta:h11" #默认字体
#
    # types: buff 的标签类型
    # 0: 1 ➛ ➊
    # 1: 1 ➛ ➀
    # 2: 1 ➛ ⓵
    # 3: 1 ➛ ¹
    # 4: 1 ➛ 1
    buffer_index_type = 1
#
    # 关闭自动补全
#autocomplete_parens = false
#
    # 设置中文文档
#vim_help_language = 'cn'

#/////////options设置完

###########################################################
#                      layers设置                         #
#//////////////////////////////////////////////////////////

## 自动补全插件autocomplete
[[layers]]
name = 'autocomplete'
auto_completion_return_key_behavior = "complete"
auto_completion_tab_key_behavior = "smart"
#enable=false # 禁用

## shell 
[[layers]]
  name = 'shell'
  default_position = 'top'
  default_height = 30

## 中文help文档支持
#[[layers]]
#name = "chinese"

## c语言模块
[[layers]]
  name = "lang#c"
  clang_executable = 'clang' # 设置clang 执行文件

[layer.clang_std]   # 改变clang 用的c协议版本
c = '99'

[[layers]]          # lsp 补全模块
  name = "lsp"
  filetypes = [     # 支持的文件类型
    "c",
    "cpp"
    ] 

[layers.override_cmd] # 语言服务器
  c = ["clangd"]  
#c = ["cquery"]

## 关闭默认的状态栏插件,就会使用shell的状态栏
#[[layers]]
#  name = "core#statusline"
#  enable = false
#[[layers]]
#  name = "core#tabline"
#  enable = false

## 禁用spacevim自带插件
#
#[options]         # 禁用neomake异步语法检查插件
#disabled_plugins = ["neomake.vim"]
#
#/////////

##########################################################
#                   安装github上的插件                   #
#/////////////////////////////////////////////////////////

## 添加外部插件
[[custom_plugins]] # 添加外部插件coc.nvim 补全
name = "neoclide/coc.nvim"
merged = false  # 关闭合并插件


#/////////  插件完
