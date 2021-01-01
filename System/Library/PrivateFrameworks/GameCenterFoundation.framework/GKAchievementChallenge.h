/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:05 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GameCenterFoundation/GKChallenge.h>

@class GKAchievement;

@interface GKAchievementChallenge : GKChallenge {

	GKAchievement* _achievement;

}

@property (nonatomic,retain) GKAchievement * achievement;              //@synthesize achievement=_achievement - In the implementation block
+(BOOL)instancesRespondToSelector:(SEL)arg1 ;
-(id)description;
-(void)dealloc;
-(id)initWithInternalRepresentation:(id)arg1 ;
-(id)titleText;
-(void)setInternal:(id)arg1 ;
-(void)setAchievement:(GKAchievement *)arg1 ;
-(BOOL)detailsLoaded;
-(void)loadDetailsWithCompletionHandler:(/*^block*/id)arg1 ;
-(GKAchievement *)achievement;
-(id)detailGoalTextForPlayer:(id)arg1 withAchievement:(id)arg2 ;
@end

