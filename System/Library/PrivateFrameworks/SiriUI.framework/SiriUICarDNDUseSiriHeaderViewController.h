/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:15 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>
#import <SiriUI/SiriUICarDNDContextProviderDelegate.h>

@protocol SiriUICarDNDDelegate;
@class UILabel, NSString, UIImageView, SiriUICarDNDContextProvider;

@interface SiriUICarDNDUseSiriHeaderViewController : UIViewController <SiriUICarDNDContextProviderDelegate> {

	BOOL _localizedSubtitleDisplayedAboveTitle;
	id<SiriUICarDNDDelegate> _delegate;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	NSString* _localizedTitle;
	NSString* _localizedSubtitle;
	UIImageView* _siriOrbImageView;
	SiriUICarDNDContextProvider* _contextProvider;

}

@property (setter=_setTitleLabel:,getter=_titleLabel,nonatomic,retain) UILabel * titleLabel;                                                 //@synthesize titleLabel=_titleLabel - In the implementation block
@property (setter=_setSubtitleLabel:,getter=_subtitleLabel,nonatomic,retain) UILabel * subtitleLabel;                                        //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (setter=_setLocalizedTitle:,getter=_localizedTitle,nonatomic,retain) NSString * localizedTitle;                                    //@synthesize localizedTitle=_localizedTitle - In the implementation block
@property (setter=_setLocalizedSubtitle:,getter=_localizedSubtitle,nonatomic,retain) NSString * localizedSubtitle;                           //@synthesize localizedSubtitle=_localizedSubtitle - In the implementation block
@property (setter=_setSiriOrbImageView:,getter=_siriOrbImageView,nonatomic,retain) UIImageView * siriOrbImageView;                           //@synthesize siriOrbImageView=_siriOrbImageView - In the implementation block
@property (setter=_setContextProvider:,getter=_contextProvider,nonatomic,retain) SiriUICarDNDContextProvider * contextProvider;              //@synthesize contextProvider=_contextProvider - In the implementation block
@property (assign,nonatomic,__weak) id<SiriUICarDNDDelegate> delegate;                                                                       //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)shouldShowCarDNDUseSiriHeaderViewController;
-(id<SiriUICarDNDDelegate>)delegate;
-(void)setDelegate:(id<SiriUICarDNDDelegate>)arg1 ;
-(id)_localizedTitle;
-(id)_localizedSubtitle;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)_titleLabel;
-(id)_subtitleLabel;
-(BOOL)_canShowWhileLocked;
-(void)_setLocalizedSubtitle:(id)arg1 ;
-(void)_setLocalizedTitle:(id)arg1 ;
-(id)_contextProvider;
-(void)contextProvided:(id)arg1 ;
-(id)_hintContext;
-(void)_setupView;
-(void)_setupImageView;
-(void)_setupTitleLabel;
-(void)_setupSubtitleLabel;
-(void)_setupTitleAndSubtitleConstraints;
-(void)_addContextProvider;
-(void)_sendCardAppearedAnalyticsEvent;
-(void)_removeContextProvider;
-(void)_setSiriOrbImageView:(id)arg1 ;
-(id)_siriOrbImageView;
-(void)_setTitleLabel:(id)arg1 ;
-(void)_setSubtitleLabel:(id)arg1 ;
-(void)_setContextProvider:(id)arg1 ;
@end

