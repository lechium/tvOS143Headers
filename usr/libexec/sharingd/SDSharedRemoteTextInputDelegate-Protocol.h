//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSDictionary;

@protocol SDSharedRemoteTextInputDelegate

@optional
- (void)handleInputDidEndWithFlags:(unsigned long long)arg1 sessionInfo:(NSDictionary *)arg2;
- (void)handleInputDidBeginWithFlags:(unsigned long long)arg1 sessionInfo:(NSDictionary *)arg2;
- (void)handleEventWithData:(NSDictionary *)arg1;
@end

