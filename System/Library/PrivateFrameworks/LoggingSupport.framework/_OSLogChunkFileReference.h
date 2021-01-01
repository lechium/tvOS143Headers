/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:46 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class _OSLogCollectionReference;

@interface _OSLogChunkFileReference : NSObject {

	_OSLogCollectionReference* _oslcr;
	char* _path;
	unsigned long long _xot;
	unsigned long long _xet;

}

@property (nonatomic,readonly) char* path;                                      //@synthesize path=_path - In the implementation block
@property (nonatomic,readonly) unsigned long long xattrOldestTime;              //@synthesize xot=_xot - In the implementation block
@property (nonatomic,readonly) unsigned long long xattrEndTime;                 //@synthesize xet=_xet - In the implementation block
-(void)dealloc;
-(char*)path;
-(id)initWithCollection:(id)arg1 subpath:(const char*)arg2 ;
-(BOOL)readXattrForTimespan:(id*)arg1 ;
-(id)copyMappedChunkFile:(id*)arg1 ;
-(unsigned long long)xattrOldestTime;
-(unsigned long long)xattrEndTime;
@end

