/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:04 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class GKTournamentParticipantInternal, GKPlayer;

@interface GKTournamentParticipant : NSObject <NSSecureCoding> {

	GKTournamentParticipantInternal* _internal;
	GKPlayer* _player;

}

@property (retain) GKTournamentParticipantInternal * internal;              //@synthesize internal=_internal - In the implementation block
@property (nonatomic,retain) GKPlayer * player;                             //@synthesize player=_player - In the implementation block
@property (nonatomic,readonly) long long score; 
@property (nonatomic,readonly) long long playerGroup; 
@property (nonatomic,readonly) long long replayCount; 
@property (nonatomic,readonly) long long participantState; 
@property (nonatomic,readonly) BOOL cheatingIndicator; 
+(BOOL)supportsSecureCoding;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(GKPlayer *)player;
-(void)setPlayer:(GKPlayer *)arg1 ;
-(id)initWithInternalRepresentation:(id)arg1 ;
-(GKTournamentParticipantInternal *)internal;
-(void)setInternal:(GKTournamentParticipantInternal *)arg1 ;
@end
