/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:04 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/GKCustomTournamentDelegate.h>

@class GKPlayer, GKTournament;

@interface GKCustomTournamentManager : NSObject <GKCustomTournamentDelegate> {

	GKTournament* _tournament;
	GKPlayer* _creator;

}

@property (assign,nonatomic,__weak) GKTournament * tournament;              //@synthesize tournament=_tournament - In the implementation block
@property (nonatomic,retain) GKPlayer * creator;                            //@synthesize creator=_creator - In the implementation block
-(void)setCreator:(GKPlayer *)arg1 ;
-(GKPlayer *)creator;
-(GKTournament *)tournament;
-(void)addInvitees:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removeInvitees:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)addCreator:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removeCreator:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)acceptInvitationWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)declineInvitationWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setTournament:(GKTournament *)arg1 ;
@end

