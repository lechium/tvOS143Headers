/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:33 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol _UIRotatingAlertControllerDelegate <NSObject>
@optional
-(void)sheet:(id)arg1 presentingViewControllerWillChange:(id)arg2;
-(void)sheet:(id)arg1 presentingViewControllerDidChange:(id)arg2;

@required
-(CGRect*)initialPresentationRectInHostViewForSheet:(id)arg1;
-(id)hostViewForSheet:(id)arg1;
-(CGRect*)presentationRectInHostViewForSheet:(id)arg1;

@end

