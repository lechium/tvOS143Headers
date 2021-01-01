/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:52 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/DialogEngine.framework/DialogEngine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/DEReader.h>

@class NSData;

@interface DEDataReader : NSObject <DEReader> {

	NSData* _data;
	unsigned long long _dataOffset;

}

@property (nonatomic,retain) NSData * data;                              //@synthesize data=_data - In the implementation block
@property (assign,nonatomic) unsigned long long dataOffset;              //@synthesize dataOffset=_dataOffset - In the implementation block
-(id)init;
-(NSData *)data;
-(id)initWithData:(id)arg1 ;
-(void)close;
-(void)setData:(NSData *)arg1 ;
-(id)readDataOfLength:(unsigned long long)arg1 ;
-(id)readData;
-(unsigned long long)dataOffset;
-(void)setDataOffset:(unsigned long long)arg1 ;
@end

