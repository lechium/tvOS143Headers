//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString;

@protocol UAResumableActivitiesSysdiagnoseSupportProtocol <NSObject>
- (void)doCopyRecentActions:(NSDictionary *)arg1 completionHandler:(void (^)(NSArray *))arg2;
- (void)doGetSysdiagnoseStringsIncludingPrivateData:(_Bool)arg1 completionHandler:(void (^)(NSArray *))arg2;
- (void)doNOP:(NSString *)arg1 withCompletionHandler:(void (^)(NSString *, NSError *))arg2;
@end
