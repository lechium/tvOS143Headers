//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class BKSAnimationFenceHandle, NSDictionary, NSString, NSURL, SASRequestOptions;

@protocol AFUIViewControllerHosting <NSObject>
- (void)serviceViewControllerRequestsDismissalWithDismissalReason:(unsigned long long)arg1 completion:(void (^)(_Bool))arg2;
- (void)serviceViewControllerRequestsPresentation:(void (^)(_Bool))arg1;
- (void)serviceDidRequestCurrentTextInput:(void (^)(NSString *))arg1;
- (void)serviceDidEndTaptoEdit;
- (void)serviceWillBeginTapToEdit;
- (void)serviceDidResetTextInput;
- (void)serviceDidRequestKeyboard:(_Bool)arg1;
- (void)serviceDidRequestKeyboard:(_Bool)arg1 minimized:(_Bool)arg2;
- (void)serviceViewControllerRequestKeyboardForTapToEditWithCompletion:(void (^)(_Bool))arg1;
- (void)serviceDidDetectAudioRoutePickerTap;
- (void)serviceDidExitUITrackingMode;
- (void)serviceDidEnterUITrackingMode;
- (void)servicePresentationDidChangePeekMode:(unsigned long long)arg1;
- (void)serviceDidDetectMicButtonLongPressEnded;
- (void)serviceDidDetectMicButtonLongPressBegan;
- (void)serviceDidDetectMicButtonTap;
- (void)serviceDidPresentConversationFromBreadcrumb;
- (void)serviceDidPresentUserInterface;
- (void)handlePasscodeUnlockWithCompletion:(void (^)(long long))arg1;
- (void)getScreenshotWithReplyHandler:(void (^)(NSData *))arg1;
- (void)serviceOpenURL:(NSURL *)arg1 appBundleID:(NSString *)arg2 allowSiriDismissal:(_Bool)arg3;
- (void)serviceOpenURL:(NSURL *)arg1 delaySessionEndForTTS:(_Bool)arg2 replyHandler:(void (^)(_Bool))arg3;
- (void)setBugReportingAvailable:(_Bool)arg1;
- (void)pulseHelpButton;
- (void)setHelpButtonEmphasized:(_Bool)arg1;
- (void)setStatusBarHidden:(_Bool)arg1 animated:(_Bool)arg2 completion:(void (^)(_Bool))arg3;
- (void)setStatusBarHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)serviceDidDismissViewControllerWithStatusBarStyle:(long long)arg1;
- (void)serviceWillDismissViewControllerWithStatusBarStyle:(long long)arg1;
- (void)serviceDidPresentViewControllerWithStatusBarStyle:(long long)arg1;
- (void)serviceWillPresentViewControllerWithStatusBarStyle:(long long)arg1;
- (void)setStatusViewDisabled:(_Bool)arg1;
- (void)setStatusViewUserInteractionEnabled:(_Bool)arg1;
- (void)setCarDisplaySnippetMode:(long long)arg1;
- (void)setFullScreenDimmingLayerVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setStatusViewHidden:(_Bool)arg1;
- (void)siriIdleAndQuietStatusDidChange:(_Bool)arg1;
- (void)serviceLaunchApplicationWithBundleIdentifier:(NSString *)arg1 withURL:(NSURL *)arg2 launchOptions:(long long)arg3 replyHandler:(void (^)(_Bool))arg4;
- (void)serviceUserRelevantEventDidOccur;
- (void)serviceStartRequestWithOptions:(SASRequestOptions *)arg1;
- (void)serviceDidReadBulletinWithIdentifier:(NSString *)arg1;
- (void)serviceBulletinWithIdentifier:(NSString *)arg1 replyHandler:(void (^)(AFBulletin *))arg2;
- (void)serviceStartGuidedAccess;
- (void)serviceRequestsDismissalWithDelayForTTS:(_Bool)arg1 userInfo:(NSDictionary *)arg2 withDismissalReason:(unsigned long long)arg3;
- (void)serviceRequestsActivationSourceWithReplyHandler:(void (^)(long long))arg1;

@optional
- (void)requestHostBlurVisible:(_Bool)arg1 reason:(long long)arg2 fence:(BKSAnimationFenceHandle *)arg3;
- (void)setShouldDismissForSwipesOutsideContent:(_Bool)arg1;
- (void)setShouldDismissForTapsOutsideContent:(_Bool)arg1;
- (void)setShouldDismissForTapOutsideContent:(_Bool)arg1;
- (void)extendCurrentTTSRequested;
- (void)setTypeToSiriViewHidden:(_Bool)arg1;
- (void)serviceDidDismissBugReporter;
- (void)serviceDidPresentBugReporter;
- (void)servicePresentedIntentWithBundleId:(NSString *)arg1;
@end

