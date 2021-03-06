//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString;

@protocol AKURLBagDictionaryProvider <NSObject>
- (void)forceURLBagUpdateForAltDSID:(NSString *)arg1 urlSwitchData:(NSString *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)fetchURLBagForAltDSID:(NSString *)arg1 completion:(void (^)(NSDictionary *, NSError *))arg2;
- (NSDictionary *)urlBagFromCache:(_Bool)arg1 altDSID:(NSString *)arg2 error:(id *)arg3;
- (NSDictionary *)urlBagForAltDSID:(NSString *)arg1 error:(id *)arg2;
@end

