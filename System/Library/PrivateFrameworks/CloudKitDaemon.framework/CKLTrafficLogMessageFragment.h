/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:10 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface CKLTrafficLogMessageFragment : NSObject {

	unsigned long long _type;
	NSString* _uuid;
	long long _seqNum;
	NSString* _dataString;

}

@property (nonatomic,readonly) unsigned long long type;              //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSString * uuid;                      //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) long long seqNum;                     //@synthesize seqNum=_seqNum - In the implementation block
@property (nonatomic,readonly) NSString * dataString;                //@synthesize dataString=_dataString - In the implementation block
-(id)description;
-(unsigned long long)type;
-(long long)seqNum;
-(NSString *)uuid;
-(id)initWithMessage:(id)arg1 ;
-(NSString *)dataString;
@end

