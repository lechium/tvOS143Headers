/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:37 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CloudMediaServicesQueueController.framework/CloudMediaServicesQueueController
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class CMSPlayerPointer, NSDictionary;

@interface CMSPlaybackQueueContext : NSObject <NSSecureCoding> {

	CMSPlayerPointer* _playerPointer;
	NSDictionary* _userActivityDictionary;

}

@property (nonatomic,retain) CMSPlayerPointer * playerPointer;                   //@synthesize playerPointer=_playerPointer - In the implementation block
@property (nonatomic,retain) NSDictionary * userActivityDictionary;              //@synthesize userActivityDictionary=_userActivityDictionary - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)userActivityDictionary;
-(void)setUserActivityDictionary:(NSDictionary *)arg1 ;
-(CMSPlayerPointer *)playerPointer;
-(id)initWithPlayerPointer:(id)arg1 forUserActivityDictionary:(id)arg2 ;
-(void)setPlayerPointer:(CMSPlayerPointer *)arg1 ;
@end

