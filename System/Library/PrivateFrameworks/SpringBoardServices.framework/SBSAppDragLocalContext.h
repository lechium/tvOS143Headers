/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:09 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSSet, NSURL, NSUserActivity, UIView;

@interface SBSAppDragLocalContext : NSObject {

	BOOL _cancelsViaScaleAndFade;
	BOOL _sourceLocal;
	NSString* _applicationBundleIdentifier;
	NSSet* _launchActions;
	long long _startLocation;
	NSString* _draggedSceneIdentifier;
	NSURL* _launchURL;
	NSUserActivity* _userActivity;
	UIView* _portaledPreview;

}

@property (nonatomic,copy) NSString * applicationBundleIdentifier;               //@synthesize applicationBundleIdentifier=_applicationBundleIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSSet * launchActions;                       //@synthesize launchActions=_launchActions - In the implementation block
@property (nonatomic,readonly) long long startLocation;                          //@synthesize startLocation=_startLocation - In the implementation block
@property (nonatomic,copy) NSString * draggedSceneIdentifier;                    //@synthesize draggedSceneIdentifier=_draggedSceneIdentifier - In the implementation block
@property (nonatomic,copy) NSURL * launchURL;                                    //@synthesize launchURL=_launchURL - In the implementation block
@property (nonatomic,retain) NSUserActivity * userActivity;                      //@synthesize userActivity=_userActivity - In the implementation block
@property (nonatomic,retain) UIView * portaledPreview;                           //@synthesize portaledPreview=_portaledPreview - In the implementation block
@property (assign,nonatomic) BOOL cancelsViaScaleAndFade;                        //@synthesize cancelsViaScaleAndFade=_cancelsViaScaleAndFade - In the implementation block
@property (assign,getter=isSourceLocal,nonatomic) BOOL sourceLocal;              //@synthesize sourceLocal=_sourceLocal - In the implementation block
-(id)description;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)initWithApplicationBundleIdentifier:(id)arg1 withLaunchActions:(id)arg2 startLocation:(long long)arg3 ;
-(NSString *)applicationBundleIdentifier;
-(void)setApplicationBundleIdentifier:(NSString *)arg1 ;
-(NSSet *)launchActions;
-(long long)startLocation;
-(NSString *)draggedSceneIdentifier;
-(void)setDraggedSceneIdentifier:(NSString *)arg1 ;
-(NSURL *)launchURL;
-(void)setLaunchURL:(NSURL *)arg1 ;
-(NSUserActivity *)userActivity;
-(void)setUserActivity:(NSUserActivity *)arg1 ;
-(UIView *)portaledPreview;
-(void)setPortaledPreview:(UIView *)arg1 ;
-(BOOL)cancelsViaScaleAndFade;
-(void)setCancelsViaScaleAndFade:(BOOL)arg1 ;
-(BOOL)isSourceLocal;
-(void)setSourceLocal:(BOOL)arg1 ;
@end

