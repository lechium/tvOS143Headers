/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:58 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface MPAVOutputDeviceDescription : NSObject {

	long long _routeType;
	long long _routeSubtype;
	NSString* _uid;

}

@property (nonatomic,readonly) long long routeType;                 //@synthesize routeType=_routeType - In the implementation block
@property (nonatomic,readonly) long long routeSubtype;              //@synthesize routeSubtype=_routeSubtype - In the implementation block
@property (nonatomic,readonly) NSString * uid;                      //@synthesize uid=_uid - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(long long)routeType;
-(NSString *)uid;
-(id)initWithDeviceType:(long long)arg1 deviceSubtype:(long long)arg2 uid:(id)arg3 ;
-(long long)routeSubtype;
@end
