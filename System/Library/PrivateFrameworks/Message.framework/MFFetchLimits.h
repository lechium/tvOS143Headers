/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:13 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface MFFetchLimits : NSObject {

	unsigned long long _fetchMinBytes;
	unsigned long long _fetchMaxBytes;
	unsigned long long _minBytesLeft;

}

@property (assign,nonatomic) unsigned long long fetchMinBytes;              //@synthesize fetchMinBytes=_fetchMinBytes - In the implementation block
@property (assign,nonatomic) unsigned long long fetchMaxBytes;              //@synthesize fetchMaxBytes=_fetchMaxBytes - In the implementation block
@property (assign,nonatomic) unsigned long long minBytesLeft;               //@synthesize minBytesLeft=_minBytesLeft - In the implementation block
-(id)description;
-(id)init;
-(unsigned long long)fetchMaxBytes;
-(void)setFetchMaxBytes:(unsigned long long)arg1 ;
-(unsigned long long)fetchMinBytes;
-(void)setFetchMinBytes:(unsigned long long)arg1 ;
-(unsigned long long)minBytesLeft;
-(void)setMinBytesLeft:(unsigned long long)arg1 ;
@end

