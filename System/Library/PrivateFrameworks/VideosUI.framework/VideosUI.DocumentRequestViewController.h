/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:45 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideosUI/VideosUI.DocumentViewController.h>

@class NSString;

@interface VideosUI.DocumentRequestViewController : VideosUI.DocumentViewController {

	 viewWillAppearAfterTabSwitch;
	 viewControllerIdentifier;
	 staticPPTDocumentFolderPath;
	 viewControllerDocumentIdentifier;
	 documentType;
	 initialControllerRef;
	 initialRequestSent;
	 inAppBannerAllowed;
	 inAppBannerNotificationPending;
	 activeServiceRequest;
	 activeFragmentServiceRequest;
	 eventMonitorController;
	 shouldHideLoadingView;
	 shouldCustomRestoreLastFocusBehaviour;
	 isWaitingForDocumentFragment;

}

@property (readonly,nonatomic) NSString * viewControllerIdentifier; 
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(NSString *)viewControllerIdentifier;
@end
