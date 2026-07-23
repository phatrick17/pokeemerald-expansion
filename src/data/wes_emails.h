// Emails readable in the P*DA's "Wes' Emails" screen.
// Bodies are printed in FONT_NORMAL in a 28-tile-wide window;
// keep lines under ~37 characters and bodies to at most 6 lines.
const struct WesEmail gWesEmails[NUM_WES_EMAILS] =
{
    [EMAIL_GREETINGS] =
    {
        .subject = COMPOUND_STRING("GREETINGS"),
        .sender = COMPOUND_STRING("EAGUN OF AGATE VILLAGE"),
        .body = COMPOUND_STRING(
            "This is EAGUN of AGATE VILLAGE.\n"
            "I just wanted to let you know this\n"
            "is my first electronic mail.\n"
            "I am not familiar with high-tech\n"
            "things, so I have only learned\n"
            "how to type in words."),
    },
    [EMAIL_SNAGEM_ATTACK] =
    {
        .subject = COMPOUND_STRING("SNAGEM HIDEOUT ATTACKED"),
        .sender = COMPOUND_STRING("???"),
        .body = COMPOUND_STRING(
            "Somebody blew up TEAM SNAGEM's\n"
            "hideout and made off with a\n"
            "SNAG MACHINE.\n"
            "The perpetrator remains at large."),
    },
};
