//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Security/SFAnalytics.h>

__attribute__((visibility("hidden")))
@interface CKKSAnalytics : SFAnalytics
{
}

+ (id)logger;	// IMP=0x0000000100124cb8
+ (id)databasePath;	// IMP=0x0000000100124c68
- (id)datePropertyForKey:(id)arg1 zoneName:(id)arg2;	// IMP=0x0000000100124bcc
- (void)setDateProperty:(id)arg1 forKey:(id)arg2 zoneName:(id)arg3;	// IMP=0x0000000100124b28
- (id)dateOfLastSuccessForEvent:(id)arg1 zoneName:(id)arg2;	// IMP=0x0000000100124a8c
- (void)noteEvent:(id)arg1 zoneName:(id)arg2;	// IMP=0x0000000100124a04
- (void)noteEvent:(id)arg1;	// IMP=0x00000001001249f8
- (void)logUnrecoverableError:(id)arg1 forEvent:(id)arg2 withAttributes:(id)arg3;	// IMP=0x0000000100124740
- (void)logUnrecoverableError:(id)arg1 forEvent:(id)arg2 zoneName:(id)arg3 withAttributes:(id)arg4;	// IMP=0x0000000100124478
- (void)logRecoverableError:(id)arg1 forEvent:(id)arg2 withAttributes:(id)arg3;	// IMP=0x00000001001241c8
- (void)logRecoverableError:(id)arg1 forEvent:(id)arg2 zoneName:(id)arg3 withAttributes:(id)arg4;	// IMP=0x0000000100123ef4
- (id)createErrorAttributes:(id)arg1 depth:(unsigned long long)arg2 attributes:(id)arg3;	// IMP=0x0000000100123c90
- (id)errorChain:(id)arg1 depth:(unsigned long long)arg2;	// IMP=0x0000000100123a64
- (void)addCKPartialError:(id)arg1 error:(id)arg2 depth:(unsigned long long)arg3;	// IMP=0x000000010012372c
- (_Bool)isCKPartialError:(id)arg1;	// IMP=0x0000000100123698
- (void)logSuccessForEvent:(id)arg1 zoneName:(id)arg2;	// IMP=0x0000000100123580

@end

