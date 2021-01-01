/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:06 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GameCenterFoundation/GKSpecialPlayerInternal.h>

@interface GKAutomatchPlayerInternal : GKSpecialPlayerInternal {

	long long _automatchPosition;

}

@property (assign,nonatomic) long long automatchPosition;              //@synthesize automatchPosition=_automatchPosition - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)alias;
-(id)playerID;
-(id)teamPlayerID;
-(id)gamePlayerID;
-(BOOL)isAutomatchPlayer;
-(long long)automatchPosition;
-(void)setAutomatchPosition:(long long)arg1 ;
@end

