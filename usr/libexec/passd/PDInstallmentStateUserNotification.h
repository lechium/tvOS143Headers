//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "PDUserNotification.h"

#import "NSSecureCoding-Protocol.h"

@class NSDate, NSString, PKInstallmentPlan;

@interface PDInstallmentStateUserNotification : PDUserNotification <NSSecureCoding>
{
    PKInstallmentPlan *_installmentPlan;	// 96 = 0x60
    NSString *_accountIdentifier;	// 104 = 0x68
    NSDate *_statementClosingDate;	// 112 = 0x70
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000100152f4c
- (void).cxx_destruct;	// IMP=0x0000000100153480
@property(retain, nonatomic) NSDate *statementClosingDate; // @synthesize statementClosingDate=_statementClosingDate;
@property(readonly, copy, nonatomic) NSString *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
- (id)notificationContentWithDataSource:(id)arg1;	// IMP=0x000000010015315c
- (_Bool)isValid;	// IMP=0x0000000100153104
- (unsigned long long)notificationType;	// IMP=0x00000001001530fc
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000100153050
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100152f54
- (id)initWithAccount:(id)arg1 installmentPlan:(id)arg2 passUniqueIdentifier:(id)arg3;	// IMP=0x0000000100152cf8

@end
