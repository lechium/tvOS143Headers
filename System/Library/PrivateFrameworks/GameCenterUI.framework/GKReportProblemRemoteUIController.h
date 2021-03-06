/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:10 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GameCenterUI/GKRemoteUIController.h>

@class GKPlayer, NSURL;

@interface GKReportProblemRemoteUIController : GKRemoteUIController {

	GKPlayer* _problemPlayer;
	NSURL* _url;

}

@property (nonatomic,retain) NSURL * url;                           //@synthesize url=_url - In the implementation block
@property (nonatomic,retain) GKPlayer * problemPlayer;              //@synthesize problemPlayer=_problemPlayer - In the implementation block
+(id)controllerForProblemPlayer:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setUrl:(NSURL *)arg1 ;
-(NSURL *)url;
-(id)bagKey;
-(int)preferredLayoutStyle;
-(id)fallbackURL;
-(id)postBodyForInitialLoad;
-(id)initWithProblemPlayer:(id)arg1 ;
-(GKPlayer *)problemPlayer;
-(void)setProblemPlayer:(GKPlayer *)arg1 ;
@end

