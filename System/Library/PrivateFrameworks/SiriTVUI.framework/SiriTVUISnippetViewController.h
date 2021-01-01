/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:16 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SiriTVUI.framework/SiriTVUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriTVUI/SiriTVUI-Structs.h>
#import <SiriUI/SiriUIBaseSnippetViewController.h>
#import <SiriTVUI/SiriTVUIPresentationPreparation.h>

@protocol SiriTVUIAnalyticsDelegate;
@class NSString, NSUUID;

@interface SiriTVUISnippetViewController : SiriUIBaseSnippetViewController <SiriTVUIPresentationPreparation> {

	id<SiriTVUIAnalyticsDelegate> _analyticsDelegate;
	NSString* _currentUtterance;
	NSString* _dialogIdentifier;
	NSUUID* _conversationItemIdentifer;
	UIEdgeInsets _contentMargins;

}

@property (assign,nonatomic,__weak) id<SiriTVUISnippetViewControllerDelegate> delegate; 
@property (assign,nonatomic,__weak) id<SiriTVUIAnalyticsDelegate> analyticsDelegate;                 //@synthesize analyticsDelegate=_analyticsDelegate - In the implementation block
@property (nonatomic,copy) NSString * currentUtterance;                                              //@synthesize currentUtterance=_currentUtterance - In the implementation block
@property (nonatomic,copy) NSString * dialogIdentifier;                                              //@synthesize dialogIdentifier=_dialogIdentifier - In the implementation block
@property (nonatomic,retain) NSUUID * conversationItemIdentifer;                                     //@synthesize conversationItemIdentifer=_conversationItemIdentifer - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentMargins;                                            //@synthesize contentMargins=_contentMargins - In the implementation block
@property (nonatomic,readonly) BOOL allowSwipeDismissal; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)viewDidLoad;
-(NSString *)dialogIdentifier;
-(void)setDialogIdentifier:(NSString *)arg1 ;
-(CGSize)preferredContentSize;
-(void)setContentMargins:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)contentMargins;
-(id<SiriTVUIAnalyticsDelegate>)analyticsDelegate;
-(void)setAnalyticsDelegate:(id<SiriTVUIAnalyticsDelegate>)arg1 ;
-(void)didUpdateInteractiveTransitionWithFullScreenFraction:(double)arg1 ;
-(void)willEndInteractiveTransitionFromFullScreenFraction:(double)arg1 toFullScreenFraction:(double)arg2 velocity:(CGPoint)arg3 ;
-(NSString *)currentUtterance;
-(BOOL)canBePresentedFullScreen;
-(BOOL)allowSwipeDismissal;
-(void)willBeginInteractiveTransition;
-(void)setCurrentUtterance:(NSString *)arg1 ;
-(NSUUID *)conversationItemIdentifer;
-(void)setConversationItemIdentifer:(NSUUID *)arg1 ;
@end

