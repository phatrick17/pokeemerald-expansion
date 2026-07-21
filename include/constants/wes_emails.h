#ifndef GUARD_CONSTANTS_WES_EMAILS_H
#define GUARD_CONSTANTS_WES_EMAILS_H

// IDs for the emails readable in the P*DA's "Wes' Emails" screen.
// Plain #defines so they can be used from event scripts (receiveemail EMAIL_*).
#define EMAIL_NONE          0
#define EMAIL_GREETINGS     1
#define EMAIL_SNAGEM_ATTACK 2

#define NUM_WES_EMAILS      3

// Max number of emails that can be held in the inbox (saved in SaveBlock3)
#define WES_EMAIL_INBOX_CAPACITY 32

#endif // GUARD_CONSTANTS_WES_EMAILS_H
