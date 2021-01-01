//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSDictionary, NSString;

@protocol AFSecurityService <NSObject>
- (oneway void)setKeychainValue:(NSData *)arg1 forKey:(NSString *)arg2 accountIdentifier:(NSString *)arg3 completion:(void (^)(NSError *))arg4;
- (oneway void)processDataMap:(NSDictionary *)arg1 usingProcedure:(long long)arg2 completion:(void (^)(NSDictionary *, NSDictionary *))arg3;
- (oneway void)processData:(NSData *)arg1 usingProcedure:(long long)arg2 completion:(void (^)(NSData *, NSError *))arg3;
@end
