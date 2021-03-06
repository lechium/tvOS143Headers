//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSNumber, NSString, NSUUID;

@protocol PBSRestrictionServiceInterface <NSObject>
- (void)validatePIN:(NSString *)arg1 withResult:(void (^)(_Bool))arg2;
- (void)authorizeRestrictionsWithResult:(void (^)(_Bool))arg1;
- (void)restrictionsEnabledWithResult:(void (^)(_Bool))arg1;
- (void)cancelRestrictionAuthorization:(NSUUID *)arg1;
- (void)validateRestrictionForSetting:(unsigned long long)arg1 allowInteraction:(_Bool)arg2 requestToken:(NSUUID *)arg3 withCompletion:(void (^)(unsigned long long))arg4;
- (void)validateRestrictionForContentType:(unsigned long long)arg1 withRating:(NSNumber *)arg2 allowInteraction:(_Bool)arg3 requestToken:(NSUUID *)arg4 withCompletion:(void (^)(unsigned long long))arg5;
@end

