//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "PDNotificationServiceRegistrationTask.h"

@class NSString;

@interface PDNotificationServiceSpecificRegistrationTask : PDNotificationServiceRegistrationTask
{
    NSString *_dpanIdentifier;	// 72 = 0x48
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000010018f9dc
+ (id)deregisterTaskWithNotificationService:(id)arg1 dpanIdentifier:(id)arg2;	// IMP=0x000000010018f830
+ (id)registerTaskWithNotificationService:(id)arg1 registrationData:(id)arg2 signature:(id)arg3 certificates:(id)arg4 certificateVersion:(unsigned long long)arg5 dpanIdentifier:(id)arg6 completionTask:(id)arg7;	// IMP=0x000000010018f728
- (void).cxx_destruct;	// IMP=0x0000000100190164
@property(retain, nonatomic, setter=setDPANIdentifier:) NSString *dpanIdentifier; // @synthesize dpanIdentifier=_dpanIdentifier;
- (_Bool)pertainsToNotificationService:(id)arg1 andDPANIdentifier:(id)arg2;	// IMP=0x0000000100190068
- (_Bool)matchesTask:(id)arg1;	// IMP=0x000000010018ff80
- (long long)actionForInactiveTask:(id)arg1;	// IMP=0x000000010018fecc
- (id)description;	// IMP=0x000000010018fcf4
- (id)endpointComponents;	// IMP=0x000000010018fbd4
- (long long)taskType;	// IMP=0x000000010018fbcc
- (_Bool)isValid;	// IMP=0x000000010018fb34
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000010018fa90
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010018f9e4
- (id)initWithNotificationService:(id)arg1 registrationData:(id)arg2 signature:(id)arg3 certificates:(id)arg4 certificateVersion:(unsigned long long)arg5 dpanIdentifier:(id)arg6 requestedStatus:(unsigned long long)arg7 completionTask:(id)arg8;	// IMP=0x000000010018f8c4

@end

