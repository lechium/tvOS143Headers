/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:21 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol UIAdaptivePresentationControllerDelegate <NSObject>
@optional
-(long long)adaptivePresentationStyleForPresentationController:(id)arg1;
-(long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2;
-(id)presentationController:(id)arg1 viewControllerForAdaptivePresentationStyle:(long long)arg2;
-(void)presentationController:(id)arg1 willPresentWithAdaptiveStyle:(long long)arg2 transitionCoordinator:(id)arg3;
-(BOOL)presentationControllerShouldDismiss:(id)arg1;
-(void)presentationControllerWillDismiss:(id)arg1;
-(void)presentationControllerDidDismiss:(id)arg1;
-(void)presentationControllerDidAttemptToDismiss:(id)arg1;

@end

