/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:22 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TVCoreSettings.framework/TVCoreSettings
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/WFNetworkView.h>

@protocol WFErrorProviderContext;
@class TVSUITextAlertController;

@interface TVCSWiFiErrorViewController : UIViewController <WFNetworkView> {

	id<WFErrorProviderContext> _context;
	TVSUITextAlertController* _alertController;

}

@property (nonatomic,retain) TVSUITextAlertController * alertController;              //@synthesize alertController=_alertController - In the implementation block
@property (nonatomic,readonly) id<WFErrorProviderContext> context;                    //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) BOOL wantsModalPresentation; 
-(id<WFErrorProviderContext>)context;
-(id)initWithContext:(id)arg1 ;
-(void)viewDidLoad;
-(void)setAlertController:(TVSUITextAlertController *)arg1 ;
-(TVSUITextAlertController *)alertController;
-(id)preferredFocusEnvironments;
-(BOOL)wantsModalPresentation;
@end

