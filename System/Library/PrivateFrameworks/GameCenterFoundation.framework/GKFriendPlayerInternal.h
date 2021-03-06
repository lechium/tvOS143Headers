/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:06 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GameCenterFoundation/GKFamiliarPlayerInternal.h>

@class NSString, NSDate, GKGameInternal;

@interface GKFriendPlayerInternal : GKFamiliarPlayerInternal {

	NSString* _status;
	NSDate* _lastPlayedDate;
	GKGameInternal* _lastPlayedGame;

}
+(BOOL)supportsSecureCoding;
+(id)secureCodedPropertyKeys;
-(void)dealloc;
-(id)status;
-(void)setStatus:(id)arg1 ;
-(id)lastPlayedDate;
-(void)setLastPlayedDate:(id)arg1 ;
-(id)lastPlayedGame;
-(int)defaultFamiliarity;
-(BOOL)isFriend;
-(void)setLastPlayedGame:(id)arg1 ;
@end

