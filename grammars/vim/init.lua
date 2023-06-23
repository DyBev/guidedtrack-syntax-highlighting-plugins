vim.api.nvim_create_autocmd({ "BufAdd", "BufRead", "BufEnter" } , { command = [[ if search('\%1l--.*$','w') > 0 | set syn=GT | endif ]] } )
