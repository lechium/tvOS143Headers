//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "PDPassReminderUserNotification.h"

#import "NSSecureCoding-Protocol.h"

@class PKCurrencyAmount;

@interface PDPeerPaymentBalanceReminderUserNotification : PDPassReminderUserNotification <NSSecureCoding>
{
    PKCurrencyAmount *_currentBalance;	// 96 = 0x60
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000010014aaec
- (void).cxx_destruct;	// IMP=0x000000010014ae14
@property(readonly, nonatomic) PKCurrencyAmount *currentBalance; // @synthesize currentBalance=_currentBalance;
- (id)_messageString;	// IMP=0x000000010014adf8
- (id)_titleString;	// IMP=0x000000010014ad50
- (unsigned long long)notificationType;	// IMP=0x000000010014ad48
- (_Bool)isValid;	// IMP=0x000000010014acb4
- (void)updateWithNewBalance:(id)arg1 andNewReminderDate:(id)arg2;	// IMP=0x000000010014ac28
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000010014aba0
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010014aaf4
- (id)initWithPassUniqueIdentifier:(id)arg1 currentBalance:(id)arg2 reminderDate:(id)arg3;	// IMP=0x000000010014a9e8

@end

