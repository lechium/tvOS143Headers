/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:59 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSData;

@interface HMIDataReader : NSObject {

	NSData* _data;
	unsigned long long _position;

}
-(unsigned long long)length;
-(id)initWithData:(id)arg1 ;
-(unsigned long long)position;
-(id)readData:(unsigned long long)arg1 ;
-(unsigned)readUInt32;
-(unsigned long long)readUInt64;
-(void)seek:(unsigned long long)arg1 ;
@end
