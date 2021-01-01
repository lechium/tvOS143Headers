//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSNumber;

@protocol IDSGroupServer <NSObject>
- (void)queryGroupServerForENID:(NSData *)arg1 withCompletion:(void (^)(IDSGroupGetMessage *, NSError *, long long, NSDictionary *, NSArray *))arg2;
- (void)publishGroupForKey:(NSData *)arg1 data:(NSData *)arg2 signature:(NSData *)arg3 forwardingSig:(NSData *)arg4 ENID:(NSData *)arg5 version:(NSNumber *)arg6 completion:(void (^)(IDSGroupPutMessage *, NSError *, long long, NSDictionary *, NSArray *))arg7;
@end
