/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:34 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol UIWebViewDelegate;
@class UIScrollView, UIWebBrowserView, UICheckeredPatternView, NSURLRequest, UIWebViewWebViewDelegate, UIWebPDFViewHandler;

@interface UIWebViewInternal : NSObject {

	UIScrollView* scroller;
	UIWebBrowserView* browserView;
	UICheckeredPatternView* checkeredPatternView;
	id<UIWebViewDelegate> delegate;
	unsigned scalesPageToFit : 1;
	unsigned isLoading : 1;
	unsigned hasOverriddenOrientationChangeEventHandling : 1;
	unsigned drawsCheckeredPattern : 1;
	unsigned webSelectionEnabled : 1;
	unsigned drawInWebThread : 1;
	unsigned inRotation : 1;
	unsigned didRotateEnclosingScrollView : 1;
	unsigned safeAreaShouldAffectObscuredInsets : 1;
	NSURLRequest* request;
	long long clickedAlertButtonIndex;
	UIWebViewWebViewDelegate* webViewDelegate;
	UIWebPDFViewHandler* pdfHandler;

}
@end
