/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:28 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WebKit/WebKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView;

@interface WKApplicationStateTrackingView : UIView {

	WeakObjCPtr<WKWebView> _webViewToTrack;
	unique_ptr<WebKit::ApplicationStateTracker, std::__1::default_delete<WebKit::ApplicationStateTracker> >* _applicationStateTracker;

}

@property (nonatomic,readonly) BOOL isBackground; 
@property (nonatomic,readonly) UIView * _contentView; 
-(BOOL)isBackground;
-(UIView *)_contentView;
-(void)_applicationWillEnterForeground;
-(void)didMoveToWindow;
-(void)willMoveToWindow:(id)arg1 ;
-(void)_applicationDidEnterBackground;
-(void)_applicationDidFinishSnapshottingAfterEnteringBackground;
-(void)_willBeginSnapshotSequence;
-(void)_didCompleteSnapshotSequence;
-(id)initWithFrame:(CGRect)arg1 webView:(id)arg2 ;
@end

