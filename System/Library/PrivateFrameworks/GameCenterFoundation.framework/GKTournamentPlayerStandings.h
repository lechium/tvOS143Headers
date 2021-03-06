/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:04 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class GKTournamentPlayerStandingsInternal;

@interface GKTournamentPlayerStandings : NSObject {

	GKTournamentPlayerStandingsInternal* _internal;

}

@property (retain) GKTournamentPlayerStandingsInternal * internal;              //@synthesize internal=_internal - In the implementation block
@property (nonatomic,readonly) long long score; 
@property (nonatomic,readonly) long long topScore; 
@property (nonatomic,readonly) long long friendRank; 
@property (nonatomic,readonly) long long friendCount; 
@property (nonatomic,readonly) long long globalRank; 
@property (nonatomic,readonly) long long globalPlayerCount; 
@property (nonatomic,readonly) long long replayCount; 
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(id)init;
-(id)initWithInternalRepresentation:(id)arg1 ;
-(GKTournamentPlayerStandingsInternal *)internal;
-(void)setInternal:(GKTournamentPlayerStandingsInternal *)arg1 ;
@end

