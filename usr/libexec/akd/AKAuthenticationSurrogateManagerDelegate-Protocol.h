//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class AKAppleIDAuthenticationContext, AKClient, NSObject;
@protocol OS_dispatch_queue;

@protocol AKAuthenticationSurrogateManagerDelegate
- (void)promptForAppleIDSettingsRedirectWithContext:(AKAppleIDAuthenticationContext *)arg1 client:(AKClient *)arg2 needFullUI:(_Bool)arg3 completion:(void (^)(_Bool, NSError *))arg4;
- (NSObject<OS_dispatch_queue> *)uiWorkQueue;
@end

