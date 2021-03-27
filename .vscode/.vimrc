set nocompatible              " be iMproved, required
filetype off                  " required

set rtp+=~/.vim/bundle/Vundle.vim
"call vundle#begin()

"Plugin 'VundleVim/Vundle.vim'
"Plugin 'joshdick/onedark.vim'
"call vundle#end()            " required
"filetype plugin indent on    " required

behave mswin
syntax on
"colorscheme onedark
			
set backspace=indent,eol,start  " more powerful backspacing
au GUIEnter * simalt ~x
set hls
set is
set cb=unnamed
set guifont=*
set gfn=Fixedsys:h10
set ts=4
set sw=4
set si
set autoindent
set smartindent
set nocompatible
set number
set relativenumber
inore jj <Esc>
function GuiTabLabel()
    let label = ''
    let bufnrlist = tabpagebuflist(v:lnum)

    for bufnr in bufnrlist
        if getbufvar(bufnr, "&modified")
            let label = '+'
            break
        endif
    endfor

    let wincount = tabpagewinnr(v:lnum, '$')
    if wincount > 1
        let label .= wincount
    endif
    if label != ''
        let label .= ' '
    endif

    return label . "%t"
endfunction

set guitablabel=%!GuiTabLabel()

inoremap { {}<Left>
inoremap {<CR> {<CR>}<Esc>O
inoremap {{ {
inoremap {} {}

""inoremap " ""<left>
""inoremap ' ''<left>
""inoremap [ []<left>
"inoremap ( ()<left>

filetype on
filetype indent on
syntax enable
"autocmd BufNewFile *.cpp execute "0r ~/.vim/template/".input("Template name: ").".cpp"
autocmd BufNewFile *.cpp -r ~/.vim/template.cpp
autocmd vimEnter *.cpp map <F8> :w <CR> :!clear ; g++ %; if [ -f a.exe ]; then time ./a.exe; rm a.exe; fi <CR>
"map <F9> :!g++ % -o %:r && ./%:r <CR>
map <F5> :!g++ -g % -o %:r <CR>
map <F2> :w <CR>
map <F12> :!gdb ./%:r <CR>

set diffexpr=MyDiff()
function MyDiff()
  let opt = '-a --binary '
  if &diffopt =~ 'icase' | let opt = opt . '-i ' | endif
  if &diffopt =~ 'iwhite' | let opt = opt . '-b ' | endif
  let arg1 = v:fname_in
  if arg1 =~ ' ' | let arg1 = '"' . arg1 . '"' | endif
  let arg1 = substitute(arg1, '!', '\!', 'g')
  let arg2 = v:fname_new
  if arg2 =~ ' ' | let arg2 = '"' . arg2 . '"' | endif
  let arg2 = substitute(arg2, '!', '\!', 'g')
  let arg3 = v:fname_out
  if arg3 =~ ' ' | let arg3 = '"' . arg3 . '"' | endif
  let arg3 = substitute(arg3, '!', '\!', 'g')
  if $VIMRUNTIME =~ ' '
    if &sh =~ '\<cmd'
      if empty(&shellxquote)
        let l:shxq_sav = ''
        set shellxquote&
      endif
      let cmd = '"' . $VIMRUNTIME . '\diff"'
    else
      let cmd = substitute($VIMRUNTIME, ' ', '" ', '') . '\diff"'
    endif
  else
    let cmd = $VIMRUNTIME . '\diff'
  endif
  let cmd = substitute(cmd, '!', '\!', 'g')
  silent execute '!' . cmd . ' ' . opt . arg1 . ' ' . arg2 . ' > ' . arg3
  if exists('l:shxq_sav')
    let &shellxquote=l:shxq_sav
  endif
endfunction
