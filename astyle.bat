:: ^符號是接續上一行的意思
:: pad-oper 是在運算子兩旁加入空白 ex a+b => a + b
:: pad-header 是在if/for/while後面加入空白 if(xxx)  => if (xxx)
:: suffix=none 表示不要另外產生輸出檔，直接取代目前檔案
astyle ./*.cpp ^
    --style=allman ^
    --indent=spaces=4 ^
    --pad-oper ^
    --pad-header ^
    --delete-empty-lines ^
    --keep-one-line-blocks ^
    --keep-one-line-statements ^
    --suffix=none
