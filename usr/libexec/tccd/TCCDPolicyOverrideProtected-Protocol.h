//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSObject, NSString;
@protocol OS_os_log;

@protocol TCCDPolicyOverrideProtected <NSObject>
+ (NSObject<OS_os_log> *)logHandle;
+ (NSString *)useString:(NSString *)arg1 orReadFromDefaults:(const struct __CFString *)arg2;
@property(retain) NSString *plistFilePath;
- (void)loadAndParse;
@end

