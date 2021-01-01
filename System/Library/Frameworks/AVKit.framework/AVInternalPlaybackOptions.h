/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:16 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray, AVTransportBarViewController, UIViewController, AVControlItem;

@interface AVInternalPlaybackOptions : NSObject {

	BOOL _includeTransportBar;
	BOOL _includeInfoViews;
	BOOL _includeInteractiveOverlay;
	BOOL _requiresLinearPlayback;
	BOOL _requiresFullSubtitles;
	BOOL _disableScrubbingThumbnails;
	BOOL _appliesPreferredDisplayCriteriaAutomatically;
	BOOL _skipForwardEnabled;
	BOOL _skipBackwardEnabled;
	BOOL _allowInfoMetadataSubpanel;
	BOOL _allowsPictureInPicturePlayback;
	BOOL _waitingForNextStream;
	NSArray* _allowedSubtitleOptionLanguages;
	AVTransportBarViewController* _clientTransportBarViewController;
	UIViewController* _customOverlayViewController;
	long long _skippingBehavior;
	AVControlItem* _interactiveOverlayItem;

}

@property (assign,nonatomic) BOOL includeTransportBar;                                                         //@synthesize includeTransportBar=_includeTransportBar - In the implementation block
@property (assign,nonatomic) BOOL includeInfoViews;                                                            //@synthesize includeInfoViews=_includeInfoViews - In the implementation block
@property (assign,nonatomic) BOOL includeInteractiveOverlay;                                                   //@synthesize includeInteractiveOverlay=_includeInteractiveOverlay - In the implementation block
@property (assign,nonatomic) BOOL requiresLinearPlayback;                                                      //@synthesize requiresLinearPlayback=_requiresLinearPlayback - In the implementation block
@property (nonatomic,copy) NSArray * allowedSubtitleOptionLanguages;                                           //@synthesize allowedSubtitleOptionLanguages=_allowedSubtitleOptionLanguages - In the implementation block
@property (assign,nonatomic) BOOL requiresFullSubtitles;                                                       //@synthesize requiresFullSubtitles=_requiresFullSubtitles - In the implementation block
@property (assign,nonatomic) BOOL disableScrubbingThumbnails;                                                  //@synthesize disableScrubbingThumbnails=_disableScrubbingThumbnails - In the implementation block
@property (nonatomic,retain) AVTransportBarViewController * clientTransportBarViewController;                  //@synthesize clientTransportBarViewController=_clientTransportBarViewController - In the implementation block
@property (assign,nonatomic) BOOL appliesPreferredDisplayCriteriaAutomatically;                                //@synthesize appliesPreferredDisplayCriteriaAutomatically=_appliesPreferredDisplayCriteriaAutomatically - In the implementation block
@property (nonatomic,retain) UIViewController * customOverlayViewController;                                   //@synthesize customOverlayViewController=_customOverlayViewController - In the implementation block
@property (assign,nonatomic) long long skippingBehavior;                                                       //@synthesize skippingBehavior=_skippingBehavior - In the implementation block
@property (assign,getter=isSkipForwardEnabled,nonatomic) BOOL skipForwardEnabled;                              //@synthesize skipForwardEnabled=_skipForwardEnabled - In the implementation block
@property (assign,getter=isSkipBackwardEnabled,nonatomic) BOOL skipBackwardEnabled;                            //@synthesize skipBackwardEnabled=_skipBackwardEnabled - In the implementation block
@property (getter=isOffOptionAvailableForSubtitles,readonly) BOOL offOptionAvailableForSubtitles; 
@property (assign,nonatomic) BOOL allowInfoMetadataSubpanel;                                                   //@synthesize allowInfoMetadataSubpanel=_allowInfoMetadataSubpanel - In the implementation block
@property (assign,nonatomic) BOOL allowsPictureInPicturePlayback;                                              //@synthesize allowsPictureInPicturePlayback=_allowsPictureInPicturePlayback - In the implementation block
@property (assign,nonatomic) BOOL waitingForNextStream;                                                        //@synthesize waitingForNextStream=_waitingForNextStream - In the implementation block
@property (nonatomic,retain) AVControlItem * interactiveOverlayItem;                                           //@synthesize interactiveOverlayItem=_interactiveOverlayItem - In the implementation block
-(id)debugDescription;
-(id)init;
-(BOOL)requiresLinearPlayback;
-(void)setRequiresLinearPlayback:(BOOL)arg1 ;
-(BOOL)isOffOptionAvailableForSubtitles;
-(id)_descriptionOfTrueBooleanProperty:(id)arg1 ;
-(id)_descriptionOfBooleanProperty:(id)arg1 ;
-(BOOL)includeTransportBar;
-(void)setIncludeTransportBar:(BOOL)arg1 ;
-(BOOL)includeInfoViews;
-(void)setIncludeInfoViews:(BOOL)arg1 ;
-(BOOL)includeInteractiveOverlay;
-(void)setIncludeInteractiveOverlay:(BOOL)arg1 ;
-(NSArray *)allowedSubtitleOptionLanguages;
-(void)setAllowedSubtitleOptionLanguages:(NSArray *)arg1 ;
-(BOOL)requiresFullSubtitles;
-(void)setRequiresFullSubtitles:(BOOL)arg1 ;
-(BOOL)disableScrubbingThumbnails;
-(void)setDisableScrubbingThumbnails:(BOOL)arg1 ;
-(AVTransportBarViewController *)clientTransportBarViewController;
-(void)setClientTransportBarViewController:(AVTransportBarViewController *)arg1 ;
-(BOOL)appliesPreferredDisplayCriteriaAutomatically;
-(void)setAppliesPreferredDisplayCriteriaAutomatically:(BOOL)arg1 ;
-(UIViewController *)customOverlayViewController;
-(void)setCustomOverlayViewController:(UIViewController *)arg1 ;
-(long long)skippingBehavior;
-(void)setSkippingBehavior:(long long)arg1 ;
-(BOOL)isSkipForwardEnabled;
-(void)setSkipForwardEnabled:(BOOL)arg1 ;
-(BOOL)isSkipBackwardEnabled;
-(void)setSkipBackwardEnabled:(BOOL)arg1 ;
-(BOOL)allowInfoMetadataSubpanel;
-(void)setAllowInfoMetadataSubpanel:(BOOL)arg1 ;
-(BOOL)allowsPictureInPicturePlayback;
-(void)setAllowsPictureInPicturePlayback:(BOOL)arg1 ;
-(BOOL)waitingForNextStream;
-(void)setWaitingForNextStream:(BOOL)arg1 ;
-(AVControlItem *)interactiveOverlayItem;
-(void)setInteractiveOverlayItem:(AVControlItem *)arg1 ;
@end

