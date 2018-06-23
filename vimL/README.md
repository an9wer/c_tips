### Usage

1.  load only plugin `foo.vim` and then open file `bar`:

        vim --noplugin -N -u foo.vim bar

2.  after open file `bar`, call the function `Main()` in vim:

        :call Main()
