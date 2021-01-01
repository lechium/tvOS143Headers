/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:00 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface _TVRCRapportDeviceRecord : NSObject {

	NSString* _ids;
	unsigned long long _transports;

}

@property (nonatomic,copy) NSString * ids;                               //@synthesize ids=_ids - In the implementation block
@property (assign,nonatomic) unsigned long long transports;              //@synthesize transports=_transports - In the implementation block
-(id)description;
-(NSString *)ids;
-(unsigned long long)transports;
-(void)setTransports:(unsigned long long)arg1 ;
-(void)setIds:(NSString *)arg1 ;
-(id)initWithIDS:(id)arg1 ;
-(BOOL)hasAvailableTransports;
@end
