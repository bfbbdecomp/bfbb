MEMORY
{
    text : origin = $ORIGIN
}

SECTIONS
{
    GROUP:
    {
        $SECTIONS
        .stack ALIGN(0x100):{}
    } > text

    _stack_end = $LAST_SECTION_SYMBOL + SIZEOF($LAST_SECTION_NAME);
    _stack_addr = (_stack_end + 0x8000 + 0x7) & ~0x7;
    _db_stack_addr = (_stack_addr + 0x1000);
    _db_stack_end = _stack_addr;
    __ArenaLo = (_db_stack_addr + 0x1f) & ~0x1f;
    __ArenaHi = 0x81800000;
}

FORCEACTIVE
{
    $FORCEACTIVE
}
