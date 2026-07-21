#ifndef GUARD_WES_EMAILS_H
#define GUARD_WES_EMAILS_H

#include "constants/wes_emails.h"

struct WesEmail
{
    const u8 *subject;
    const u8 *sender;
    const u8 *body;
};

extern const struct WesEmail gWesEmails[NUM_WES_EMAILS];

void ShowWesEmails(void (*exitCallback)(void));
u32 GetWesEmailInboxCount(void);
bool32 GiveWesEmail(u16 emailId);
void ReceiveEmail(void);

#endif // GUARD_WES_EMAILS_H
