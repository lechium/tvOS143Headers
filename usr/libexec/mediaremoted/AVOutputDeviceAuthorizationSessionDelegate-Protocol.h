//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AVOutputDeviceAuthorizationRequest, AVOutputDeviceAuthorizationSession, NSString;

@protocol AVOutputDeviceAuthorizationSessionDelegate <NSObject>
- (void)outputDeviceAuthorizationSession:(AVOutputDeviceAuthorizationSession *)arg1 didProvideAuthorizationRequest:(AVOutputDeviceAuthorizationRequest *)arg2;

@optional
- (_Bool)outputDeviceAuthorizationSession:(AVOutputDeviceAuthorizationSession *)arg1 shouldRetryAuthorizationRequest:(AVOutputDeviceAuthorizationRequest *)arg2 reason:(NSString *)arg3;
@end

